#!/bin/bash

# Set the path to the library and pass name
PATH2LIB="../../featurePass/build/featurePass/FeaturePass.so"
PASS=fp

rm -f features.csv

# Iterate through all C/C++ files in the current directory
for filename in *.c *.cpp; do
    if [ -f "$filename" ]; then
        printf "Running on %s\n" "$filename"
        # Delete outputs from previous runs
        #rm -f default.profraw *_prof *_fplicm *.bc *.profdata *_output *.ll *.in *.in.Z

        # Convert source code to bitcode (IR)
        clang -emit-llvm -c "$filename" -Xclang -disable-O0-optnone -o "${filename%.*}.bc"

        # Instrument profiler passes. Generates profile data
        opt -passes='pgo-instr-gen,instrprof' "${filename%.*}.bc" -o "${filename%.*}.prof.bc"

        # Generate binary executable with profiler embedded
        clang -fprofile-instr-generate "${filename%.*}.prof.bc" -o "${filename%.*}_prof"

        # Run the profiler embedded executable
        ./"${filename%.*}_prof" > /dev/null 2>&1

        # Merge profiler data
        llvm-profdata merge -o "${filename%.*}.profdata" default.profraw

        # Attach profile data to the bc file
        opt -passes="pgo-instr-use" -o "${filename%.*}.profdata.bc" -pgo-test-profile-file="${filename%.*}.profdata" < "${filename%.*}.bc"

        # Run the feature pass
        echo "Output for $filename:" >> features.csv
        opt --disable-output -load-pass-plugin="${PATH2LIB}" -passes="${PASS}" "${filename%.*}.profdata.bc" >> features.csv 2>&1
        echo "" >> features.csv  # Add an empty line for better readability

        # Cleanup
        rm -f *.in *.in.Z default.profraw *_prof *_fplicm *.bc *.profdata *_output *.ll
    fi
done
