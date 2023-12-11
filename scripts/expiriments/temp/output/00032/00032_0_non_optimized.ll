; ModuleID = '../../files/simple/00032.c'
source_filename = "../../files/simple/00032.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [2 x i32], align 4
  %3 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  %4 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 0
  store i32 2, ptr %4, align 4
  %5 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 1
  store i32 3, ptr %5, align 4
  %6 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 0
  store ptr %6, ptr %3, align 8
  %7 = load ptr, ptr %3, align 8
  %8 = getelementptr inbounds i32, ptr %7, i32 1
  store ptr %8, ptr %3, align 8
  %9 = load i32, ptr %7, align 4
  %10 = icmp ne i32 %9, 2
  br i1 %10, label %11, label %12

11:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %46

12:                                               ; preds = %0
  %13 = load ptr, ptr %3, align 8
  %14 = getelementptr inbounds i32, ptr %13, i32 1
  store ptr %14, ptr %3, align 8
  %15 = load i32, ptr %13, align 4
  %16 = icmp ne i32 %15, 3
  br i1 %16, label %17, label %18

17:                                               ; preds = %12
  store i32 2, ptr %1, align 4
  br label %46

18:                                               ; preds = %12
  %19 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 1
  store ptr %19, ptr %3, align 8
  %20 = load ptr, ptr %3, align 8
  %21 = getelementptr inbounds i32, ptr %20, i32 -1
  store ptr %21, ptr %3, align 8
  %22 = load i32, ptr %20, align 4
  %23 = icmp ne i32 %22, 3
  br i1 %23, label %24, label %25

24:                                               ; preds = %18
  store i32 1, ptr %1, align 4
  br label %46

25:                                               ; preds = %18
  %26 = load ptr, ptr %3, align 8
  %27 = getelementptr inbounds i32, ptr %26, i32 -1
  store ptr %27, ptr %3, align 8
  %28 = load i32, ptr %26, align 4
  %29 = icmp ne i32 %28, 2
  br i1 %29, label %30, label %31

30:                                               ; preds = %25
  store i32 2, ptr %1, align 4
  br label %46

31:                                               ; preds = %25
  %32 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 0
  store ptr %32, ptr %3, align 8
  %33 = load ptr, ptr %3, align 8
  %34 = getelementptr inbounds i32, ptr %33, i32 1
  store ptr %34, ptr %3, align 8
  %35 = load i32, ptr %34, align 4
  %36 = icmp ne i32 %35, 3
  br i1 %36, label %37, label %38

37:                                               ; preds = %31
  store i32 1, ptr %1, align 4
  br label %46

38:                                               ; preds = %31
  %39 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 1
  store ptr %39, ptr %3, align 8
  %40 = load ptr, ptr %3, align 8
  %41 = getelementptr inbounds i32, ptr %40, i32 -1
  store ptr %41, ptr %3, align 8
  %42 = load i32, ptr %41, align 4
  %43 = icmp ne i32 %42, 2
  br i1 %43, label %44, label %45

44:                                               ; preds = %38
  store i32 1, ptr %1, align 4
  br label %46

45:                                               ; preds = %38
  store i32 0, ptr %1, align 4
  br label %46

46:                                               ; preds = %45, %44, %37, %30, %24, %17, %11
  %47 = load i32, ptr %1, align 4
  ret i32 %47
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
