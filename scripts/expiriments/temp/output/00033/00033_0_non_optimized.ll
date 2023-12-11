; ModuleID = '../../files/simple/00033.c'
source_filename = "../../files/simple/00033.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@g = dso_local global i32 0, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @effect() #0 {
  store i32 1, ptr @g, align 4
  ret i32 1
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr @g, align 4
  store i32 0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = icmp ne i32 %3, 0
  br i1 %4, label %5, label %9

5:                                                ; preds = %0
  %6 = call i32 @effect()
  %7 = icmp ne i32 %6, 0
  br i1 %7, label %8, label %9

8:                                                ; preds = %5
  store i32 1, ptr %1, align 4
  br label %50

9:                                                ; preds = %5, %0
  %10 = load i32, ptr @g, align 4
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %13

12:                                               ; preds = %9
  store i32 2, ptr %1, align 4
  br label %50

13:                                               ; preds = %9
  store i32 1, ptr %2, align 4
  %14 = load i32, ptr %2, align 4
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %24

16:                                               ; preds = %13
  %17 = call i32 @effect()
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %24

19:                                               ; preds = %16
  %20 = load i32, ptr @g, align 4
  %21 = icmp ne i32 %20, 1
  br i1 %21, label %22, label %23

22:                                               ; preds = %19
  store i32 3, ptr %1, align 4
  br label %50

23:                                               ; preds = %19
  br label %25

24:                                               ; preds = %16, %13
  store i32 4, ptr %1, align 4
  br label %50

25:                                               ; preds = %23
  store i32 0, ptr @g, align 4
  store i32 1, ptr %2, align 4
  %26 = load i32, ptr %2, align 4
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %31, label %28

28:                                               ; preds = %25
  %29 = call i32 @effect()
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %36

31:                                               ; preds = %28, %25
  %32 = load i32, ptr @g, align 4
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %34, label %35

34:                                               ; preds = %31
  store i32 5, ptr %1, align 4
  br label %50

35:                                               ; preds = %31
  br label %37

36:                                               ; preds = %28
  store i32 6, ptr %1, align 4
  br label %50

37:                                               ; preds = %35
  store i32 0, ptr %2, align 4
  %38 = load i32, ptr %2, align 4
  %39 = icmp ne i32 %38, 0
  br i1 %39, label %43, label %40

40:                                               ; preds = %37
  %41 = call i32 @effect()
  %42 = icmp ne i32 %41, 0
  br i1 %42, label %43, label %48

43:                                               ; preds = %40, %37
  %44 = load i32, ptr @g, align 4
  %45 = icmp ne i32 %44, 1
  br i1 %45, label %46, label %47

46:                                               ; preds = %43
  store i32 7, ptr %1, align 4
  br label %50

47:                                               ; preds = %43
  br label %49

48:                                               ; preds = %40
  store i32 8, ptr %1, align 4
  br label %50

49:                                               ; preds = %47
  store i32 0, ptr %1, align 4
  br label %50

50:                                               ; preds = %49, %48, %46, %36, %34, %24, %22, %12, %8
  %51 = load i32, ptr %1, align 4
  ret i32 %51
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
