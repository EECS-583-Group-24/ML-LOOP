; ModuleID = '../../files/simple/00058.c'
source_filename = "../../files/simple/00058.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [7 x i8] c"abcdef\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  store ptr @.str, ptr %2, align 8
  %3 = load ptr, ptr %2, align 8
  %4 = getelementptr inbounds i8, ptr %3, i64 0
  %5 = load i8, ptr %4, align 1
  %6 = sext i8 %5 to i32
  %7 = icmp ne i32 %6, 97
  br i1 %7, label %8, label %9

8:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %52

9:                                                ; preds = %0
  %10 = load ptr, ptr %2, align 8
  %11 = getelementptr inbounds i8, ptr %10, i64 1
  %12 = load i8, ptr %11, align 1
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 98
  br i1 %14, label %15, label %16

15:                                               ; preds = %9
  store i32 2, ptr %1, align 4
  br label %52

16:                                               ; preds = %9
  %17 = load ptr, ptr %2, align 8
  %18 = getelementptr inbounds i8, ptr %17, i64 2
  %19 = load i8, ptr %18, align 1
  %20 = sext i8 %19 to i32
  %21 = icmp ne i32 %20, 99
  br i1 %21, label %22, label %23

22:                                               ; preds = %16
  store i32 3, ptr %1, align 4
  br label %52

23:                                               ; preds = %16
  %24 = load ptr, ptr %2, align 8
  %25 = getelementptr inbounds i8, ptr %24, i64 3
  %26 = load i8, ptr %25, align 1
  %27 = sext i8 %26 to i32
  %28 = icmp ne i32 %27, 100
  br i1 %28, label %29, label %30

29:                                               ; preds = %23
  store i32 4, ptr %1, align 4
  br label %52

30:                                               ; preds = %23
  %31 = load ptr, ptr %2, align 8
  %32 = getelementptr inbounds i8, ptr %31, i64 4
  %33 = load i8, ptr %32, align 1
  %34 = sext i8 %33 to i32
  %35 = icmp ne i32 %34, 101
  br i1 %35, label %36, label %37

36:                                               ; preds = %30
  store i32 5, ptr %1, align 4
  br label %52

37:                                               ; preds = %30
  %38 = load ptr, ptr %2, align 8
  %39 = getelementptr inbounds i8, ptr %38, i64 5
  %40 = load i8, ptr %39, align 1
  %41 = sext i8 %40 to i32
  %42 = icmp ne i32 %41, 102
  br i1 %42, label %43, label %44

43:                                               ; preds = %37
  store i32 6, ptr %1, align 4
  br label %52

44:                                               ; preds = %37
  %45 = load ptr, ptr %2, align 8
  %46 = getelementptr inbounds i8, ptr %45, i64 6
  %47 = load i8, ptr %46, align 1
  %48 = sext i8 %47 to i32
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %51

50:                                               ; preds = %44
  store i32 7, ptr %1, align 4
  br label %52

51:                                               ; preds = %44
  store i32 0, ptr %1, align 4
  br label %52

52:                                               ; preds = %51, %50, %43, %36, %29, %22, %15, %8
  %53 = load i32, ptr %1, align 4
  ret i32 %53
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
