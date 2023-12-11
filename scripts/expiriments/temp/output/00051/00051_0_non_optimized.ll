; ModuleID = '../../files/simple/00051.c'
source_filename = "../../files/simple/00051.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@x = dso_local global i32 0, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i32, ptr @x, align 4
  switch i32 %2, label %4 [
    i32 0, label %3
  ]

3:                                                ; preds = %0
  br label %4

4:                                                ; preds = %3, %0
  %5 = load i32, ptr @x, align 4
  switch i32 %5, label %10 [
    i32 0, label %6
  ]

6:                                                ; preds = %4
  %7 = load i32, ptr @x, align 4
  switch i32 %7, label %9 [
    i32 0, label %8
  ]

8:                                                ; preds = %6
  br label %11

9:                                                ; preds = %6
  store i32 1, ptr %1, align 4
  br label %24

10:                                               ; preds = %4
  store i32 1, ptr %1, align 4
  br label %24

11:                                               ; preds = %8
  %12 = load i32, ptr @x, align 4
  switch i32 %12, label %14 [
    i32 1, label %13
  ]

13:                                               ; preds = %11
  store i32 1, ptr %1, align 4
  br label %24

14:                                               ; preds = %11
  %15 = load i32, ptr @x, align 4
  switch i32 %15, label %18 [
    i32 1, label %17
  ]

16:                                               ; No predecessors!
  br label %17

17:                                               ; preds = %14, %16
  store i32 1, ptr %1, align 4
  br label %24

18:                                               ; preds = %14
  %19 = load i32, ptr @x, align 4
  switch i32 %19, label %23 [
    i32 0, label %20
    i32 1, label %22
  ]

20:                                               ; preds = %18
  %21 = load i32, ptr @x, align 4
  store i32 %21, ptr %1, align 4
  br label %24

22:                                               ; preds = %18
  store i32 1, ptr %1, align 4
  br label %24

23:                                               ; preds = %18
  store i32 1, ptr %1, align 4
  br label %24

24:                                               ; preds = %23, %22, %20, %17, %13, %10, %9
  %25 = load i32, ptr %1, align 4
  ret i32 %25
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
