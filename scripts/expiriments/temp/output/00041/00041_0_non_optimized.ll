; ModuleID = '../../files/simple/00041.c'
source_filename = "../../files/simple/00041.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %4, align 4
  store i32 2, ptr %2, align 4
  br label %6

6:                                                ; preds = %33, %0
  %7 = load i32, ptr %2, align 4
  %8 = icmp slt i32 %7, 5000
  br i1 %8, label %9, label %34

9:                                                ; preds = %6
  store i32 2, ptr %3, align 4
  store i32 1, ptr %5, align 4
  br label %10

10:                                               ; preds = %22, %9
  %11 = load i32, ptr %3, align 4
  %12 = load i32, ptr %3, align 4
  %13 = mul nsw i32 %11, %12
  %14 = load i32, ptr %2, align 4
  %15 = icmp sle i32 %13, %14
  br i1 %15, label %16, label %25

16:                                               ; preds = %10
  %17 = load i32, ptr %2, align 4
  %18 = load i32, ptr %3, align 4
  %19 = srem i32 %17, %18
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %22

21:                                               ; preds = %16
  store i32 0, ptr %5, align 4
  br label %22

22:                                               ; preds = %21, %16
  %23 = load i32, ptr %3, align 4
  %24 = add nsw i32 %23, 1
  store i32 %24, ptr %3, align 4
  br label %10, !llvm.loop !6

25:                                               ; preds = %10
  %26 = load i32, ptr %2, align 4
  %27 = add nsw i32 %26, 1
  store i32 %27, ptr %2, align 4
  %28 = load i32, ptr %5, align 4
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %30, label %33

30:                                               ; preds = %25
  %31 = load i32, ptr %4, align 4
  %32 = add nsw i32 %31, 1
  store i32 %32, ptr %4, align 4
  br label %33

33:                                               ; preds = %30, %25
  br label %6, !llvm.loop !8

34:                                               ; preds = %6
  %35 = load i32, ptr %4, align 4
  %36 = icmp ne i32 %35, 669
  br i1 %36, label %37, label %38

37:                                               ; preds = %34
  store i32 1, ptr %1, align 4
  br label %39

38:                                               ; preds = %34
  store i32 0, ptr %1, align 4
  br label %39

39:                                               ; preds = %38, %37
  %40 = load i32, ptr %1, align 4
  ret i32 %40
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
