; ModuleID = '../../files/simple/test17.c'
source_filename = "../../files/simple/test17.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 123020, ptr %2, align 4
  %4 = load i32, ptr %2, align 4
  %5 = srem i32 %4, 10
  %6 = icmp eq i32 %5, 9
  br i1 %6, label %7, label %10

7:                                                ; preds = %0
  %8 = load i32, ptr %2, align 4
  %9 = sub nsw i32 %8, 8
  store i32 %9, ptr %2, align 4
  br label %18

10:                                               ; preds = %0
  %11 = load i32, ptr %2, align 4
  %12 = srem i32 %11, 10
  %13 = icmp eq i32 %12, 1
  br i1 %13, label %14, label %17

14:                                               ; preds = %10
  %15 = load i32, ptr %2, align 4
  %16 = add nsw i32 %15, 8
  store i32 %16, ptr %2, align 4
  br label %17

17:                                               ; preds = %14, %10
  br label %18

18:                                               ; preds = %17, %7
  %19 = load i32, ptr %2, align 4
  %20 = sdiv i32 %19, 100
  store i32 %20, ptr %3, align 4
  %21 = load i32, ptr %3, align 4
  %22 = icmp eq i32 %21, 9
  br i1 %22, label %23, label %26

23:                                               ; preds = %18
  %24 = load i32, ptr %2, align 4
  %25 = sub nsw i32 %24, 800
  store i32 %25, ptr %2, align 4
  br label %33

26:                                               ; preds = %18
  %27 = load i32, ptr %3, align 4
  %28 = icmp eq i32 %27, 1
  br i1 %28, label %29, label %32

29:                                               ; preds = %26
  %30 = load i32, ptr %2, align 4
  %31 = add nsw i32 %30, 800
  store i32 %31, ptr %2, align 4
  br label %32

32:                                               ; preds = %29, %26
  br label %33

33:                                               ; preds = %32, %23
  %34 = load i32, ptr %2, align 4
  %35 = sdiv i32 %34, 10
  %36 = srem i32 %35, 10
  store i32 %36, ptr %3, align 4
  %37 = load i32, ptr %3, align 4
  %38 = icmp eq i32 %37, 9
  br i1 %38, label %39, label %42

39:                                               ; preds = %33
  %40 = load i32, ptr %2, align 4
  %41 = sub nsw i32 %40, 80
  store i32 %41, ptr %2, align 4
  br label %49

42:                                               ; preds = %33
  %43 = load i32, ptr %3, align 4
  %44 = icmp eq i32 %43, 1
  br i1 %44, label %45, label %48

45:                                               ; preds = %42
  %46 = load i32, ptr %2, align 4
  %47 = add nsw i32 %46, 80
  store i32 %47, ptr %2, align 4
  br label %48

48:                                               ; preds = %45, %42
  br label %49

49:                                               ; preds = %48, %39
  %50 = load i32, ptr %2, align 4
  %51 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %50)
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
