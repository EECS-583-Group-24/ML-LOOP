; ModuleID = '../../files/simple/insertsort.c'
source_filename = "../../files/simple/insertsort.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca [11 x i32], align 16
  store i32 0, ptr %1, align 4
  %6 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 0
  store i32 0, ptr %6, align 16
  %7 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 1
  store i32 11, ptr %7, align 4
  %8 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 2
  store i32 10, ptr %8, align 8
  %9 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 3
  store i32 9, ptr %9, align 4
  %10 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 4
  store i32 8, ptr %10, align 16
  %11 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 5
  store i32 7, ptr %11, align 4
  %12 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 6
  store i32 6, ptr %12, align 8
  %13 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 7
  store i32 5, ptr %13, align 4
  %14 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 8
  store i32 4, ptr %14, align 16
  %15 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 9
  store i32 3, ptr %15, align 4
  %16 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 10
  store i32 2, ptr %16, align 8
  store i32 2, ptr %2, align 4
  br label %17

17:                                               ; preds = %53, %0
  %18 = load i32, ptr %2, align 4
  %19 = icmp sle i32 %18, 10
  br i1 %19, label %20, label %56

20:                                               ; preds = %17
  %21 = load i32, ptr %2, align 4
  store i32 %21, ptr %3, align 4
  br label %22

22:                                               ; preds = %33, %20
  %23 = load i32, ptr %3, align 4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 %24
  %26 = load i32, ptr %25, align 4
  %27 = load i32, ptr %3, align 4
  %28 = sub nsw i32 %27, 1
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 %29
  %31 = load i32, ptr %30, align 4
  %32 = icmp slt i32 %26, %31
  br i1 %32, label %33, label %53

33:                                               ; preds = %22
  %34 = load i32, ptr %3, align 4
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 %35
  %37 = load i32, ptr %36, align 4
  store i32 %37, ptr %4, align 4
  %38 = load i32, ptr %3, align 4
  %39 = sub nsw i32 %38, 1
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 %40
  %42 = load i32, ptr %41, align 4
  %43 = load i32, ptr %3, align 4
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 %44
  store i32 %42, ptr %45, align 4
  %46 = load i32, ptr %4, align 4
  %47 = load i32, ptr %3, align 4
  %48 = sub nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds [11 x i32], ptr %5, i64 0, i64 %49
  store i32 %46, ptr %50, align 4
  %51 = load i32, ptr %3, align 4
  %52 = add nsw i32 %51, -1
  store i32 %52, ptr %3, align 4
  br label %22, !llvm.loop !6

53:                                               ; preds = %22
  %54 = load i32, ptr %2, align 4
  %55 = add nsw i32 %54, 1
  store i32 %55, ptr %2, align 4
  br label %17, !llvm.loop !8

56:                                               ; preds = %17
  %57 = load i32, ptr %1, align 4
  ret i32 %57
}

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

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
