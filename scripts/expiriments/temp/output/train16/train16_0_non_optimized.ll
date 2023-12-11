; ModuleID = '../../files/simple/train16.c'
source_filename = "../../files/simple/train16.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [10 x i8] c"%lld %lld\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i64, align 8
  %3 = alloca i64, align 8
  %4 = alloca i64, align 8
  %5 = alloca i64, align 8
  %6 = alloca i64, align 8
  %7 = alloca i64, align 8
  %8 = alloca i64, align 8
  %9 = alloca i64, align 8
  %10 = alloca i64, align 8
  %11 = alloca i64, align 8
  store i32 0, ptr %1, align 4
  store i64 0, ptr %9, align 8
  store i64 60, ptr %2, align 8
  store i64 23, ptr %3, align 8
  store i64 51, ptr %4, align 8
  store i64 23, ptr %5, align 8
  %12 = load i64, ptr %2, align 8
  %13 = load i64, ptr %4, align 8
  %14 = sub i64 %12, %13
  store i64 %14, ptr %10, align 8
  %15 = load i64, ptr %3, align 8
  %16 = load i64, ptr %5, align 8
  %17 = sub i64 %15, %16
  store i64 %17, ptr %11, align 8
  %18 = load i64, ptr %10, align 8
  %19 = load i64, ptr %4, align 8
  %20 = icmp ugt i64 %18, %19
  br i1 %20, label %21, label %25

21:                                               ; preds = %0
  %22 = load i64, ptr %10, align 8
  %23 = load i64, ptr %3, align 8
  %24 = mul i64 %22, %23
  store i64 %24, ptr %6, align 8
  br label %29

25:                                               ; preds = %0
  %26 = load i64, ptr %4, align 8
  %27 = load i64, ptr %3, align 8
  %28 = mul i64 %26, %27
  store i64 %28, ptr %6, align 8
  br label %29

29:                                               ; preds = %25, %21
  %30 = load i64, ptr %11, align 8
  %31 = load i64, ptr %5, align 8
  %32 = icmp ugt i64 %30, %31
  br i1 %32, label %33, label %37

33:                                               ; preds = %29
  %34 = load i64, ptr %11, align 8
  %35 = load i64, ptr %2, align 8
  %36 = mul i64 %34, %35
  store i64 %36, ptr %7, align 8
  br label %41

37:                                               ; preds = %29
  %38 = load i64, ptr %5, align 8
  %39 = load i64, ptr %2, align 8
  %40 = mul i64 %38, %39
  store i64 %40, ptr %7, align 8
  br label %41

41:                                               ; preds = %37, %33
  %42 = load i64, ptr %6, align 8
  %43 = load i64, ptr %7, align 8
  %44 = icmp ult i64 %42, %43
  br i1 %44, label %45, label %47

45:                                               ; preds = %41
  %46 = load i64, ptr %6, align 8
  store i64 %46, ptr %8, align 8
  br label %56

47:                                               ; preds = %41
  %48 = load i64, ptr %6, align 8
  %49 = load i64, ptr %7, align 8
  %50 = icmp eq i64 %48, %49
  br i1 %50, label %51, label %53

51:                                               ; preds = %47
  %52 = load i64, ptr %6, align 8
  store i64 %52, ptr %8, align 8
  store i64 1, ptr %9, align 8
  br label %55

53:                                               ; preds = %47
  %54 = load i64, ptr %7, align 8
  store i64 %54, ptr %8, align 8
  br label %55

55:                                               ; preds = %53, %51
  br label %56

56:                                               ; preds = %55, %45
  %57 = load i64, ptr %8, align 8
  %58 = load i64, ptr %9, align 8
  %59 = call i32 (ptr, ...) @printf(ptr noundef @.str, i64 noundef %57, i64 noundef %58)
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
