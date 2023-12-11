; ModuleID = '../../files/simple/train12.c'
source_filename = "../../files/simple/train12.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @gcd(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  store i32 %1, ptr %5, align 4
  %9 = load i32, ptr %4, align 4
  %10 = load i32, ptr %5, align 4
  %11 = srem i32 %9, %10
  store i32 %11, ptr %6, align 4
  store i32 1, ptr %7, align 4
  store i32 0, ptr %8, align 4
  %12 = load i32, ptr %5, align 4
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %16

14:                                               ; preds = %2
  %15 = load i32, ptr %4, align 4
  store i32 %15, ptr %3, align 4
  br label %39

16:                                               ; preds = %2
  br label %17

17:                                               ; preds = %34, %16
  %18 = load i32, ptr %7, align 4
  %19 = load i32, ptr %5, align 4
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %21, label %37

21:                                               ; preds = %17
  %22 = load i32, ptr %4, align 4
  %23 = load i32, ptr %7, align 4
  %24 = srem i32 %22, %23
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %34

26:                                               ; preds = %21
  %27 = load i32, ptr %5, align 4
  %28 = load i32, ptr %7, align 4
  %29 = srem i32 %27, %28
  %30 = icmp eq i32 %29, 0
  br i1 %30, label %31, label %33

31:                                               ; preds = %26
  %32 = load i32, ptr %7, align 4
  store i32 %32, ptr %8, align 4
  br label %33

33:                                               ; preds = %31, %26
  br label %34

34:                                               ; preds = %33, %21
  %35 = load i32, ptr %7, align 4
  %36 = add nsw i32 %35, 1
  store i32 %36, ptr %7, align 4
  br label %17, !llvm.loop !6

37:                                               ; preds = %17
  %38 = load i32, ptr %8, align 4
  store i32 %38, ptr %3, align 4
  br label %39

39:                                               ; preds = %37, %14
  %40 = load i32, ptr %3, align 4
  ret i32 %40
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 125, ptr %2, align 4
  store i32 100, ptr %3, align 4
  %5 = load i32, ptr %3, align 4
  %6 = load i32, ptr %2, align 4
  %7 = icmp slt i32 %5, %6
  br i1 %7, label %8, label %14

8:                                                ; preds = %0
  %9 = load i32, ptr %3, align 4
  %10 = load i32, ptr %2, align 4
  %11 = load i32, ptr %3, align 4
  %12 = srem i32 %10, %11
  %13 = call i32 @gcd(i32 noundef %9, i32 noundef %12)
  store i32 %13, ptr %4, align 4
  br label %32

14:                                               ; preds = %0
  %15 = load i32, ptr %3, align 4
  %16 = load i32, ptr %2, align 4
  %17 = icmp sgt i32 %15, %16
  br i1 %17, label %18, label %24

18:                                               ; preds = %14
  %19 = load i32, ptr %2, align 4
  %20 = load i32, ptr %3, align 4
  %21 = load i32, ptr %2, align 4
  %22 = srem i32 %20, %21
  %23 = call i32 @gcd(i32 noundef %19, i32 noundef %22)
  store i32 %23, ptr %4, align 4
  br label %31

24:                                               ; preds = %14
  %25 = load i32, ptr %3, align 4
  %26 = load i32, ptr %2, align 4
  %27 = icmp eq i32 %25, %26
  br i1 %27, label %28, label %30

28:                                               ; preds = %24
  %29 = load i32, ptr %2, align 4
  store i32 %29, ptr %4, align 4
  br label %30

30:                                               ; preds = %28, %24
  br label %31

31:                                               ; preds = %30, %18
  br label %32

32:                                               ; preds = %31, %8
  %33 = load i32, ptr %4, align 4
  %34 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %33)
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
