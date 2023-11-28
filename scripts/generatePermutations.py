import itertools
import csv

# Define the optimizations
optimizations = {
    'A': "--ipsccp --globalopt --deadargelim --simplifycfg --function-attrs --mldst-motion --sroa --jump-threading --reassociate --indvars --mem2reg --lcssa --rpo-function-attrs --bdce --dse --inferattrs --lower-amx-intrinsics --alignment-from-assumptions --barrier --block-freq --lowerswitch --branch-prob --demanded-bits --float2int --forceattrs --loop-idiom --globals-aa --gvn --loop-accesses --loop-deletion --loop-unroll --loop-vectorize --sccp --strip-dead-prototypes --inline --globaldce --constmerge",
    'B': "--licm",
    'C': "--loop-rotate --instcombine --loop-simplify",
    'D': "--memcpyopt",
    'E': "--lowerswitch --adce --slp-vectorizer --tailcallelim"
}

# Get the values from the dictionary and convert them into a list of lists
optimization_values = list(optimizations.values())

# Generate unique permutations
unique_permutations = set(itertools.permutations(optimization_values))

# Write permutations to a text file
with open('optimization_permutations.txt', 'w') as txtfile:
    for permutation in unique_permutations:
        txtfile.write(' '.join(permutation) + '\n')
