; ModuleID = '../../files/simple/test20.c'
source_filename = "../../files/simple/test20.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 2031, ptr %2, align 4
  store i32 233, ptr %3, align 4
  store i32 23, ptr %4, align 4
  %8 = load i32, ptr %3, align 4
  %9 = load i32, ptr %2, align 4
  %10 = icmp sgt i32 %8, %9
  br i1 %10, label %11, label %15

11:                                               ; preds = %0
  %12 = load i32, ptr %3, align 4
  store i32 %12, ptr %4, align 4
  %13 = load i32, ptr %2, align 4
  store i32 %13, ptr %3, align 4
  %14 = load i32, ptr %4, align 4
  store i32 %14, ptr %2, align 4
  br label %15

15:                                               ; preds = %11, %0
  store i32 0, ptr %6, align 4
  %16 = load i32, ptr %2, align 4
  %17 = load i32, ptr %3, align 4
  %18 = srem i32 %16, %17
  store i32 %18, ptr %5, align 4
  store i32 1, ptr %7, align 4
  br label %19

19:                                               ; preds = %36, %15
  %20 = load i32, ptr %7, align 4
  %21 = load i32, ptr %3, align 4
  %22 = icmp sle i32 %20, %21
  br i1 %22, label %23, label %39

23:                                               ; preds = %19
  %24 = load i32, ptr %3, align 4
  %25 = load i32, ptr %7, align 4
  %26 = srem i32 %24, %25
  %27 = icmp eq i32 %26, 0
  br i1 %27, label %28, label %35

28:                                               ; preds = %23
  %29 = load i32, ptr %2, align 4
  %30 = load i32, ptr %7, align 4
  %31 = srem i32 %29, %30
  %32 = icmp eq i32 %31, 0
  br i1 %32, label %33, label %35

33:                                               ; preds = %28
  %34 = load i32, ptr %7, align 4
  store i32 %34, ptr %6, align 4
  br label %35

35:                                               ; preds = %33, %28, %23
  br label %36

36:                                               ; preds = %35
  %37 = load i32, ptr %7, align 4
  %38 = add nsw i32 %37, 1
  store i32 %38, ptr %7, align 4
  br label %19, !llvm.loop !6

39:                                               ; preds = %19
  %40 = load i32, ptr %6, align 4
  %41 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %40)
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
