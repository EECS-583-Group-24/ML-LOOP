; ModuleID = '../../files/simple/00034.c'
source_filename = "../../files/simple/00034.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %2, align 4
  br label %3

3:                                                ; preds = %0
  br label %4

4:                                                ; preds = %3
  br label %5

5:                                                ; preds = %4, %9
  %6 = load i32, ptr %2, align 4
  %7 = icmp eq i32 %6, 5
  br i1 %7, label %8, label %9

8:                                                ; preds = %5
  br label %12

9:                                                ; preds = %5
  %10 = load i32, ptr %2, align 4
  %11 = add nsw i32 %10, 1
  store i32 %11, ptr %2, align 4
  br label %5

12:                                               ; preds = %8
  br label %13

13:                                               ; preds = %17, %12
  %14 = load i32, ptr %2, align 4
  %15 = icmp eq i32 %14, 10
  br i1 %15, label %16, label %17

16:                                               ; preds = %13
  br label %20

17:                                               ; preds = %13
  %18 = load i32, ptr %2, align 4
  %19 = add nsw i32 %18, 1
  store i32 %19, ptr %2, align 4
  br label %13

20:                                               ; preds = %16
  br label %21

21:                                               ; preds = %28, %20
  %22 = load i32, ptr %2, align 4
  %23 = icmp eq i32 %22, 15
  br i1 %23, label %24, label %25

24:                                               ; preds = %21
  br label %29

25:                                               ; preds = %21
  %26 = load i32, ptr %2, align 4
  %27 = add nsw i32 %26, 1
  store i32 %27, ptr %2, align 4
  br label %28

28:                                               ; preds = %25
  br i1 true, label %21, label %29

29:                                               ; preds = %28, %24
  %30 = load i32, ptr %2, align 4
  %31 = sub nsw i32 %30, 15
  ret i32 %31
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
