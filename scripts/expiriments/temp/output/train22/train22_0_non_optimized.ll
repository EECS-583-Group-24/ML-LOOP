; ModuleID = '../../files/simple/train22.c'
source_filename = "../../files/simple/train22.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 2103, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = sdiv i32 %3, 100
  %5 = icmp eq i32 %4, 9
  br i1 %5, label %6, label %9

6:                                                ; preds = %0
  %7 = load i32, ptr %2, align 4
  %8 = sub nsw i32 %7, 800
  store i32 %8, ptr %2, align 4
  br label %17

9:                                                ; preds = %0
  %10 = load i32, ptr %2, align 4
  %11 = sdiv i32 %10, 100
  %12 = icmp eq i32 %11, 1
  br i1 %12, label %13, label %16

13:                                               ; preds = %9
  %14 = load i32, ptr %2, align 4
  %15 = add nsw i32 %14, 800
  store i32 %15, ptr %2, align 4
  br label %16

16:                                               ; preds = %13, %9
  br label %17

17:                                               ; preds = %16, %6
  %18 = load i32, ptr %2, align 4
  %19 = srem i32 %18, 100
  %20 = sdiv i32 %19, 10
  %21 = icmp eq i32 %20, 9
  br i1 %21, label %22, label %25

22:                                               ; preds = %17
  %23 = load i32, ptr %2, align 4
  %24 = sub nsw i32 %23, 80
  store i32 %24, ptr %2, align 4
  br label %34

25:                                               ; preds = %17
  %26 = load i32, ptr %2, align 4
  %27 = srem i32 %26, 100
  %28 = sdiv i32 %27, 10
  %29 = icmp eq i32 %28, 1
  br i1 %29, label %30, label %33

30:                                               ; preds = %25
  %31 = load i32, ptr %2, align 4
  %32 = add nsw i32 %31, 80
  store i32 %32, ptr %2, align 4
  br label %33

33:                                               ; preds = %30, %25
  br label %34

34:                                               ; preds = %33, %22
  %35 = load i32, ptr %2, align 4
  %36 = srem i32 %35, 10
  %37 = icmp eq i32 %36, 9
  br i1 %37, label %38, label %41

38:                                               ; preds = %34
  %39 = load i32, ptr %2, align 4
  %40 = sub nsw i32 %39, 8
  store i32 %40, ptr %2, align 4
  br label %49

41:                                               ; preds = %34
  %42 = load i32, ptr %2, align 4
  %43 = srem i32 %42, 10
  %44 = icmp eq i32 %43, 1
  br i1 %44, label %45, label %48

45:                                               ; preds = %41
  %46 = load i32, ptr %2, align 4
  %47 = add nsw i32 %46, 8
  store i32 %47, ptr %2, align 4
  br label %48

48:                                               ; preds = %45, %41
  br label %49

49:                                               ; preds = %48, %38
  %50 = load i32, ptr %2, align 4
  %51 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %50)
  %52 = load i32, ptr %1, align 4
  ret i32 %52
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
