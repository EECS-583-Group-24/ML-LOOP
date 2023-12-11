; ModuleID = '../../files/simple/00179.c'
source_filename = "../../files/simple/00179.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [6 x i8] c"hello\00", align 1
@.str.1 = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@.str.2 = private unnamed_addr constant [5 x i8] c"gosh\00", align 1
@.str.3 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@.str.4 = private unnamed_addr constant [6 x i8] c"apple\00", align 1
@.str.5 = private unnamed_addr constant [6 x i8] c"goere\00", align 1
@.str.6 = private unnamed_addr constant [6 x i8] c"zebra\00", align 1
@.str.7 = private unnamed_addr constant [2 x i8] c"!\00", align 1
@.str.8 = private unnamed_addr constant [6 x i8] c"goerg\00", align 1
@.str.9 = private unnamed_addr constant [5 x i8] c"grgr\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [10 x i8], align 1
  store i32 0, ptr %1, align 4
  %3 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %4 = call ptr @strcpy(ptr noundef %3, ptr noundef @.str) #6
  %5 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %5)
  %7 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %8 = call ptr @strncpy(ptr noundef %7, ptr noundef @.str.2, i64 noundef 2) #6
  %9 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %9)
  %11 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %12 = call i32 @strcmp(ptr noundef %11, ptr noundef @.str.4) #7
  %13 = icmp sgt i32 %12, 0
  %14 = zext i1 %13 to i32
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %14)
  %16 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %17 = call i32 @strcmp(ptr noundef %16, ptr noundef @.str.5) #7
  %18 = icmp sgt i32 %17, 0
  %19 = zext i1 %18 to i32
  %20 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %19)
  %21 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %22 = call i32 @strcmp(ptr noundef %21, ptr noundef @.str.6) #7
  %23 = icmp slt i32 %22, 0
  %24 = zext i1 %23 to i32
  %25 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %24)
  %26 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %27 = call i64 @strlen(ptr noundef %26) #7
  %28 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i64 noundef %27)
  %29 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %30 = call ptr @strcat(ptr noundef %29, ptr noundef @.str.7) #6
  %31 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %32 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %31)
  %33 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %34 = call i32 @strncmp(ptr noundef %33, ptr noundef @.str.4, i64 noundef 2) #7
  %35 = icmp sgt i32 %34, 0
  %36 = zext i1 %35 to i32
  %37 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %36)
  %38 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %39 = call i32 @strncmp(ptr noundef %38, ptr noundef @.str.5, i64 noundef 2) #7
  %40 = icmp eq i32 %39, 0
  %41 = zext i1 %40 to i32
  %42 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %41)
  %43 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %44 = call i32 @strncmp(ptr noundef %43, ptr noundef @.str.8, i64 noundef 2) #7
  %45 = icmp eq i32 %44, 0
  %46 = zext i1 %45 to i32
  %47 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %46)
  %48 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %49 = call i32 @strncmp(ptr noundef %48, ptr noundef @.str.6, i64 noundef 2) #7
  %50 = icmp slt i32 %49, 0
  %51 = zext i1 %50 to i32
  %52 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %51)
  %53 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %54 = call ptr @strchr(ptr noundef %53, i32 noundef 111) #7
  %55 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %54)
  %56 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %57 = call ptr @strrchr(ptr noundef %56, i32 noundef 108) #7
  %58 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %57)
  %59 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %60 = call ptr @strrchr(ptr noundef %59, i32 noundef 120) #7
  %61 = icmp eq ptr %60, null
  %62 = zext i1 %61 to i32
  %63 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %62)
  %64 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 1
  call void @llvm.memset.p0.i64(ptr align 1 %64, i8 114, i64 4, i1 false)
  %65 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %66 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %65)
  %67 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 2
  %68 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  call void @llvm.memcpy.p0.p0.i64(ptr align 1 %67, ptr align 1 %68, i64 2, i1 false)
  %69 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %70 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %69)
  %71 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %72 = call i32 @memcmp(ptr noundef %71, ptr noundef @.str.4, i64 noundef 4) #7
  %73 = icmp sgt i32 %72, 0
  %74 = zext i1 %73 to i32
  %75 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %74)
  %76 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %77 = call i32 @memcmp(ptr noundef %76, ptr noundef @.str.9, i64 noundef 4) #7
  %78 = icmp eq i32 %77, 0
  %79 = zext i1 %78 to i32
  %80 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %79)
  %81 = getelementptr inbounds [10 x i8], ptr %2, i64 0, i64 0
  %82 = call i32 @memcmp(ptr noundef %81, ptr noundef @.str.6, i64 noundef 4) #7
  %83 = icmp slt i32 %82, 0
  %84 = zext i1 %83 to i32
  %85 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %84)
  ret i32 0
}

; Function Attrs: nounwind
declare ptr @strcpy(ptr noundef, ptr noundef) #1

declare i32 @printf(ptr noundef, ...) #2

; Function Attrs: nounwind
declare ptr @strncpy(ptr noundef, ptr noundef, i64 noundef) #1

; Function Attrs: nounwind willreturn memory(read)
declare i32 @strcmp(ptr noundef, ptr noundef) #3

; Function Attrs: nounwind willreturn memory(read)
declare i64 @strlen(ptr noundef) #3

; Function Attrs: nounwind
declare ptr @strcat(ptr noundef, ptr noundef) #1

; Function Attrs: nounwind willreturn memory(read)
declare i32 @strncmp(ptr noundef, ptr noundef, i64 noundef) #3

; Function Attrs: nounwind willreturn memory(read)
declare ptr @strchr(ptr noundef, i32 noundef) #3

; Function Attrs: nounwind willreturn memory(read)
declare ptr @strrchr(ptr noundef, i32 noundef) #3

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: write)
declare void @llvm.memset.p0.i64(ptr nocapture writeonly, i8, i64, i1 immarg) #4

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #5

; Function Attrs: nounwind willreturn memory(read)
declare i32 @memcmp(ptr noundef, ptr noundef, i64 noundef) #3

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind willreturn memory(read) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nocallback nofree nounwind willreturn memory(argmem: write) }
attributes #5 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #6 = { nounwind }
attributes #7 = { nounwind willreturn memory(read) }

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!llvm.ident = !{!5}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{!"clang version 16.0.6 (https://github.com/llvm/llvm-project.git 7cbf1a2591520c2491aa35339f227775f4d3adf6)"}
