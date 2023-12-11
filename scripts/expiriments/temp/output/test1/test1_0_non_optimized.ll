; ModuleID = '../../files/simple/test1.c'
source_filename = "../../files/simple/test1.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@__const.main.hardcoded_input = private unnamed_addr constant [5 x i32] [i32 10, i32 20, i32 30, i32 40, i32 50], align 16
@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@.str.1 = private unnamed_addr constant [2 x i8] c" \00", align 1
@.str.2 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca [100 x i32], align 16
  %5 = alloca [100 x i32], align 16
  %6 = alloca [5 x i32], align 16
  store i32 0, ptr %1, align 4
  store i32 5, ptr %3, align 4
  call void @llvm.memcpy.p0.p0.i64(ptr align 16 %6, ptr align 16 @__const.main.hardcoded_input, i64 20, i1 false)
  store i32 0, ptr %2, align 4
  br label %7

7:                                                ; preds = %29, %0
  %8 = load i32, ptr %2, align 4
  %9 = load i32, ptr %3, align 4
  %10 = icmp slt i32 %8, %9
  br i1 %10, label %11, label %32

11:                                               ; preds = %7
  %12 = load i32, ptr %2, align 4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds [5 x i32], ptr %6, i64 0, i64 %13
  %15 = load i32, ptr %14, align 4
  %16 = load i32, ptr %2, align 4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 %17
  store i32 %15, ptr %18, align 4
  %19 = load i32, ptr %2, align 4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 %20
  %22 = load i32, ptr %21, align 4
  %23 = load i32, ptr %3, align 4
  %24 = sub nsw i32 %23, 1
  %25 = load i32, ptr %2, align 4
  %26 = sub nsw i32 %24, %25
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds [100 x i32], ptr %5, i64 0, i64 %27
  store i32 %22, ptr %28, align 4
  br label %29

29:                                               ; preds = %11
  %30 = load i32, ptr %2, align 4
  %31 = add nsw i32 %30, 1
  store i32 %31, ptr %2, align 4
  br label %7, !llvm.loop !6

32:                                               ; preds = %7
  %33 = load i32, ptr %3, align 4
  %34 = sub nsw i32 %33, 1
  store i32 %34, ptr %2, align 4
  br label %35

35:                                               ; preds = %54, %32
  %36 = load i32, ptr %2, align 4
  %37 = icmp sge i32 %36, 0
  br i1 %37, label %38, label %57

38:                                               ; preds = %35
  %39 = load i32, ptr %3, align 4
  %40 = sub nsw i32 %39, 1
  %41 = load i32, ptr %2, align 4
  %42 = sub nsw i32 %40, %41
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds [100 x i32], ptr %5, i64 0, i64 %43
  %45 = load i32, ptr %44, align 4
  %46 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %45)
  %47 = load i32, ptr %2, align 4
  %48 = icmp ne i32 %47, 0
  br i1 %48, label %49, label %51

49:                                               ; preds = %38
  %50 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  br label %53

51:                                               ; preds = %38
  %52 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  br label %53

53:                                               ; preds = %51, %49
  br label %54

54:                                               ; preds = %53
  %55 = load i32, ptr %2, align 4
  %56 = add nsw i32 %55, -1
  store i32 %56, ptr %2, align 4
  br label %35, !llvm.loop !8

57:                                               ; preds = %35
  ret i32 0
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #1

declare i32 @printf(ptr noundef, ...) #2

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #2 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!llvm.ident = !{!5}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{!"clang version 16.0.6 (https://github.com/llvm/llvm-project.git 7cbf1a2591520c2491aa35339f227775f4d3adf6)"}
!6 = distinct !{!6, !7}
!7 = !{!"llvm.loop.mustprogress"}
!8 = distinct !{!8, !7}
