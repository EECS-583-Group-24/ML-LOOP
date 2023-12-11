; ModuleID = '../../files/simple/00130.c'
source_filename = "../../files/simple/00130.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [2 x [4 x i8]], align 1
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca [4 x i32], align 16
  store i32 0, ptr %1, align 4
  %6 = getelementptr inbounds [2 x [4 x i8]], ptr %2, i64 0, i64 0
  store ptr %6, ptr %3, align 8
  %7 = getelementptr inbounds [2 x [4 x i8]], ptr %2, i64 0, i64 1
  %8 = getelementptr inbounds [4 x i8], ptr %7, i64 0, i64 3
  store ptr %8, ptr %4, align 8
  %9 = getelementptr inbounds [2 x [4 x i8]], ptr %2, i64 0, i64 1
  %10 = getelementptr inbounds [4 x i8], ptr %9, i64 0, i64 3
  store i8 2, ptr %10, align 1
  %11 = getelementptr inbounds [4 x i32], ptr %5, i64 0, i64 0
  store i32 2, ptr %11, align 16
  %12 = getelementptr inbounds [2 x [4 x i8]], ptr %2, i64 0, i64 1
  %13 = getelementptr inbounds [4 x i8], ptr %12, i64 0, i64 3
  %14 = load i8, ptr %13, align 1
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %15, 2
  br i1 %16, label %17, label %18

17:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %38

18:                                               ; preds = %0
  %19 = load ptr, ptr %3, align 8
  %20 = getelementptr inbounds [4 x i8], ptr %19, i64 1
  %21 = getelementptr inbounds [4 x i8], ptr %20, i64 0, i64 3
  %22 = load i8, ptr %21, align 1
  %23 = sext i8 %22 to i32
  %24 = icmp ne i32 %23, 2
  br i1 %24, label %25, label %26

25:                                               ; preds = %18
  store i32 1, ptr %1, align 4
  br label %38

26:                                               ; preds = %18
  %27 = load ptr, ptr %4, align 8
  %28 = load i8, ptr %27, align 1
  %29 = sext i8 %28 to i32
  %30 = icmp ne i32 %29, 2
  br i1 %30, label %31, label %32

31:                                               ; preds = %26
  store i32 1, ptr %1, align 4
  br label %38

32:                                               ; preds = %26
  %33 = getelementptr inbounds [4 x i32], ptr %5, i64 0, i64 0
  %34 = load i32, ptr %33, align 16
  %35 = icmp ne i32 %34, 2
  br i1 %35, label %36, label %37

36:                                               ; preds = %32
  store i32 1, ptr %1, align 4
  br label %38

37:                                               ; preds = %32
  store i32 0, ptr %1, align 4
  br label %38

38:                                               ; preds = %37, %36, %31, %25, %17
  %39 = load i32, ptr %1, align 4
  ret i32 %39
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
