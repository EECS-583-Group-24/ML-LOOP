; ModuleID = '../../files/simple/test11.c'
source_filename = "../../files/simple/test11.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 100, ptr %2, align 4
  store i32 120, ptr %3, align 4
  %5 = load i32, ptr %2, align 4
  %6 = load i32, ptr %3, align 4
  %7 = icmp slt i32 %5, %6
  br i1 %7, label %8, label %12

8:                                                ; preds = %0
  %9 = load i32, ptr %2, align 4
  store i32 %9, ptr %4, align 4
  %10 = load i32, ptr %3, align 4
  store i32 %10, ptr %2, align 4
  %11 = load i32, ptr %4, align 4
  store i32 %11, ptr %3, align 4
  br label %12

12:                                               ; preds = %8, %0
  br label %13

13:                                               ; preds = %12, %32
  %14 = load i32, ptr %2, align 4
  %15 = load i32, ptr %3, align 4
  %16 = srem i32 %14, %15
  store i32 %16, ptr %4, align 4
  %17 = load i32, ptr %4, align 4
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %22

19:                                               ; preds = %13
  %20 = load i32, ptr %3, align 4
  %21 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %20)
  br label %34

22:                                               ; preds = %13
  %23 = load i32, ptr %4, align 4
  store i32 %23, ptr %2, align 4
  %24 = load i32, ptr %3, align 4
  %25 = load i32, ptr %2, align 4
  %26 = srem i32 %24, %25
  store i32 %26, ptr %4, align 4
  %27 = load i32, ptr %4, align 4
  %28 = icmp eq i32 %27, 0
  br i1 %28, label %29, label %32

29:                                               ; preds = %22
  %30 = load i32, ptr %2, align 4
  %31 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %30)
  br label %34

32:                                               ; preds = %22
  %33 = load i32, ptr %4, align 4
  store i32 %33, ptr %3, align 4
  br label %13

34:                                               ; preds = %29, %19
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
