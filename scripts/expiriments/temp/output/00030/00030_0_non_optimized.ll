; ModuleID = '../../files/simple/00030.c'
source_filename = "../../files/simple/00030.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @f() #0 {
  ret i32 100
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = call i32 @f()
  %3 = icmp sgt i32 %2, 1000
  br i1 %3, label %4, label %5

4:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %26

5:                                                ; preds = %0
  %6 = call i32 @f()
  %7 = icmp sge i32 %6, 1000
  br i1 %7, label %8, label %9

8:                                                ; preds = %5
  store i32 1, ptr %1, align 4
  br label %26

9:                                                ; preds = %5
  %10 = call i32 @f()
  %11 = icmp slt i32 1000, %10
  br i1 %11, label %12, label %13

12:                                               ; preds = %9
  store i32 1, ptr %1, align 4
  br label %26

13:                                               ; preds = %9
  %14 = call i32 @f()
  %15 = icmp sle i32 1000, %14
  br i1 %15, label %16, label %17

16:                                               ; preds = %13
  store i32 1, ptr %1, align 4
  br label %26

17:                                               ; preds = %13
  %18 = call i32 @f()
  %19 = icmp eq i32 1000, %18
  br i1 %19, label %20, label %21

20:                                               ; preds = %17
  store i32 1, ptr %1, align 4
  br label %26

21:                                               ; preds = %17
  %22 = call i32 @f()
  %23 = icmp ne i32 100, %22
  br i1 %23, label %24, label %25

24:                                               ; preds = %21
  store i32 1, ptr %1, align 4
  br label %26

25:                                               ; preds = %21
  store i32 0, ptr %1, align 4
  br label %26

26:                                               ; preds = %25, %24, %20, %16, %12, %8, %4
  %27 = load i32, ptr %1, align 4
  ret i32 %27
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
