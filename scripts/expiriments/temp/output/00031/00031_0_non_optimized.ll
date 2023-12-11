; ModuleID = '../../files/simple/00031.c'
source_filename = "../../files/simple/00031.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @zero() #0 {
  ret i32 0
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @one() #0 {
  ret i32 1
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %4 = call i32 @zero()
  store i32 %4, ptr %2, align 4
  %5 = load i32, ptr %2, align 4
  %6 = add nsw i32 %5, 1
  store i32 %6, ptr %2, align 4
  store i32 %6, ptr %3, align 4
  %7 = load i32, ptr %2, align 4
  %8 = icmp ne i32 %7, 1
  br i1 %8, label %9, label %10

9:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %48

10:                                               ; preds = %0
  %11 = load i32, ptr %3, align 4
  %12 = icmp ne i32 %11, 1
  br i1 %12, label %13, label %14

13:                                               ; preds = %10
  store i32 1, ptr %1, align 4
  br label %48

14:                                               ; preds = %10
  %15 = call i32 @one()
  store i32 %15, ptr %2, align 4
  %16 = load i32, ptr %2, align 4
  %17 = add nsw i32 %16, -1
  store i32 %17, ptr %2, align 4
  store i32 %17, ptr %3, align 4
  %18 = load i32, ptr %2, align 4
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %21

20:                                               ; preds = %14
  store i32 1, ptr %1, align 4
  br label %48

21:                                               ; preds = %14
  %22 = load i32, ptr %3, align 4
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %25

24:                                               ; preds = %21
  store i32 1, ptr %1, align 4
  br label %48

25:                                               ; preds = %21
  %26 = call i32 @zero()
  store i32 %26, ptr %2, align 4
  %27 = load i32, ptr %2, align 4
  %28 = add nsw i32 %27, 1
  store i32 %28, ptr %2, align 4
  store i32 %27, ptr %3, align 4
  %29 = load i32, ptr %2, align 4
  %30 = icmp ne i32 %29, 1
  br i1 %30, label %31, label %32

31:                                               ; preds = %25
  store i32 1, ptr %1, align 4
  br label %48

32:                                               ; preds = %25
  %33 = load i32, ptr %3, align 4
  %34 = icmp ne i32 %33, 0
  br i1 %34, label %35, label %36

35:                                               ; preds = %32
  store i32 1, ptr %1, align 4
  br label %48

36:                                               ; preds = %32
  %37 = call i32 @one()
  store i32 %37, ptr %2, align 4
  %38 = load i32, ptr %2, align 4
  %39 = add nsw i32 %38, -1
  store i32 %39, ptr %2, align 4
  store i32 %38, ptr %3, align 4
  %40 = load i32, ptr %2, align 4
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %42, label %43

42:                                               ; preds = %36
  store i32 1, ptr %1, align 4
  br label %48

43:                                               ; preds = %36
  %44 = load i32, ptr %3, align 4
  %45 = icmp ne i32 %44, 1
  br i1 %45, label %46, label %47

46:                                               ; preds = %43
  store i32 1, ptr %1, align 4
  br label %48

47:                                               ; preds = %43
  store i32 0, ptr %1, align 4
  br label %48

48:                                               ; preds = %47, %46, %42, %35, %31, %24, %20, %13, %9
  %49 = load i32, ptr %1, align 4
  ret i32 %49
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
