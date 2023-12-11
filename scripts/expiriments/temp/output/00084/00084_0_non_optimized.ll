; ModuleID = '../../files/simple/00084.c'
source_filename = "../../files/simple/00084.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @none() #0 {
  ret i32 0
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @one(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  %4 = load i32, ptr %3, align 4
  %5 = icmp ne i32 %4, 1
  br i1 %5, label %6, label %7

6:                                                ; preds = %1
  store i32 1, ptr %2, align 4
  br label %8

7:                                                ; preds = %1
  store i32 0, ptr %2, align 4
  br label %8

8:                                                ; preds = %7, %6
  %9 = load i32, ptr %2, align 4
  ret i32 %9
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @two(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  store i32 %1, ptr %5, align 4
  %6 = load i32, ptr %4, align 4
  %7 = icmp ne i32 %6, 1
  br i1 %7, label %8, label %9

8:                                                ; preds = %2
  store i32 1, ptr %3, align 4
  br label %14

9:                                                ; preds = %2
  %10 = load i32, ptr %5, align 4
  %11 = icmp ne i32 %10, 2
  br i1 %11, label %12, label %13

12:                                               ; preds = %9
  store i32 1, ptr %3, align 4
  br label %14

13:                                               ; preds = %9
  store i32 0, ptr %3, align 4
  br label %14

14:                                               ; preds = %13, %12, %8
  %15 = load i32, ptr %3, align 4
  ret i32 %15
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @three(i32 noundef %0, i32 noundef %1, i32 noundef %2) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store i32 %0, ptr %5, align 4
  store i32 %1, ptr %6, align 4
  store i32 %2, ptr %7, align 4
  %8 = load i32, ptr %5, align 4
  %9 = icmp ne i32 %8, 1
  br i1 %9, label %10, label %11

10:                                               ; preds = %3
  store i32 1, ptr %4, align 4
  br label %20

11:                                               ; preds = %3
  %12 = load i32, ptr %6, align 4
  %13 = icmp ne i32 %12, 2
  br i1 %13, label %14, label %15

14:                                               ; preds = %11
  store i32 1, ptr %4, align 4
  br label %20

15:                                               ; preds = %11
  %16 = load i32, ptr %7, align 4
  %17 = icmp ne i32 %16, 3
  br i1 %17, label %18, label %19

18:                                               ; preds = %15
  store i32 1, ptr %4, align 4
  br label %20

19:                                               ; preds = %15
  store i32 0, ptr %4, align 4
  br label %20

20:                                               ; preds = %19, %18, %14, %10
  %21 = load i32, ptr %4, align 4
  ret i32 %21
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = call i32 @none()
  %3 = icmp ne i32 %2, 0
  br i1 %3, label %4, label %5

4:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %18

5:                                                ; preds = %0
  %6 = call i32 @one(i32 noundef 1)
  %7 = icmp ne i32 %6, 0
  br i1 %7, label %8, label %9

8:                                                ; preds = %5
  store i32 2, ptr %1, align 4
  br label %18

9:                                                ; preds = %5
  %10 = call i32 @two(i32 noundef 1, i32 noundef 2)
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %13

12:                                               ; preds = %9
  store i32 3, ptr %1, align 4
  br label %18

13:                                               ; preds = %9
  %14 = call i32 @three(i32 noundef 1, i32 noundef 2, i32 noundef 3)
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %17

16:                                               ; preds = %13
  store i32 4, ptr %1, align 4
  br label %18

17:                                               ; preds = %13
  store i32 0, ptr %1, align 4
  br label %18

18:                                               ; preds = %17, %16, %12, %8, %4
  %19 = load i32, ptr %1, align 4
  ret i32 %19
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
