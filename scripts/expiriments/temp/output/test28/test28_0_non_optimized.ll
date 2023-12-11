; ModuleID = '../../files/simple/test28.c'
source_filename = "../../files/simple/test28.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@.str.1 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca [3 x i32], align 4
  store i32 0, ptr %1, align 4
  store i32 19199191, ptr %2, align 4
  store i32 2, ptr %3, align 4
  br label %5

5:                                                ; preds = %8, %0
  %6 = load i32, ptr %2, align 4
  %7 = icmp ne i32 %6, 0
  br i1 %7, label %8, label %18

8:                                                ; preds = %5
  %9 = load i32, ptr %2, align 4
  %10 = srem i32 %9, 10
  %11 = load i32, ptr %3, align 4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %12
  store i32 %10, ptr %13, align 4
  %14 = load i32, ptr %2, align 4
  %15 = sdiv i32 %14, 10
  store i32 %15, ptr %2, align 4
  %16 = load i32, ptr %3, align 4
  %17 = add nsw i32 %16, -1
  store i32 %17, ptr %3, align 4
  br label %5, !llvm.loop !6

18:                                               ; preds = %5
  store i32 0, ptr %3, align 4
  br label %19

19:                                               ; preds = %44, %18
  %20 = load i32, ptr %3, align 4
  %21 = icmp slt i32 %20, 3
  br i1 %21, label %22, label %47

22:                                               ; preds = %19
  %23 = load i32, ptr %3, align 4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %24
  %26 = load i32, ptr %25, align 4
  %27 = icmp eq i32 %26, 1
  br i1 %27, label %28, label %32

28:                                               ; preds = %22
  %29 = load i32, ptr %3, align 4
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %30
  store i32 9, ptr %31, align 4
  br label %43

32:                                               ; preds = %22
  %33 = load i32, ptr %3, align 4
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %34
  %36 = load i32, ptr %35, align 4
  %37 = icmp eq i32 %36, 9
  br i1 %37, label %38, label %42

38:                                               ; preds = %32
  %39 = load i32, ptr %3, align 4
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %40
  store i32 1, ptr %41, align 4
  br label %42

42:                                               ; preds = %38, %32
  br label %43

43:                                               ; preds = %42, %28
  br label %44

44:                                               ; preds = %43
  %45 = load i32, ptr %3, align 4
  %46 = add nsw i32 %45, 1
  store i32 %46, ptr %3, align 4
  br label %19, !llvm.loop !8

47:                                               ; preds = %19
  store i32 0, ptr %3, align 4
  br label %48

48:                                               ; preds = %57, %47
  %49 = load i32, ptr %3, align 4
  %50 = icmp slt i32 %49, 3
  br i1 %50, label %51, label %60

51:                                               ; preds = %48
  %52 = load i32, ptr %3, align 4
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %53
  %55 = load i32, ptr %54, align 4
  %56 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %55)
  br label %57

57:                                               ; preds = %51
  %58 = load i32, ptr %3, align 4
  %59 = add nsw i32 %58, 1
  store i32 %59, ptr %3, align 4
  br label %48, !llvm.loop !9

60:                                               ; preds = %48
  %61 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  ret i32 0
}

declare i32 @printf(ptr noundef, ...) #1

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

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
!9 = distinct !{!9, !7}
