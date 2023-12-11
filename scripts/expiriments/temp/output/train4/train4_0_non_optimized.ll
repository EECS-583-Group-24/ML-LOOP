; ModuleID = '../../files/simple/train4.c'
source_filename = "../../files/simple/train4.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local double @sqrt_of_sum_of_squares(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca double, align 8
  %4 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  store double 0.000000e+00, ptr %3, align 8
  store i32 1, ptr %4, align 4
  br label %5

5:                                                ; preds = %16, %1
  %6 = load i32, ptr %4, align 4
  %7 = load i32, ptr %2, align 4
  %8 = icmp sle i32 %6, %7
  br i1 %8, label %9, label %19

9:                                                ; preds = %5
  %10 = load i32, ptr %4, align 4
  %11 = load i32, ptr %4, align 4
  %12 = mul nsw i32 %10, %11
  %13 = sitofp i32 %12 to double
  %14 = load double, ptr %3, align 8
  %15 = fadd double %14, %13
  store double %15, ptr %3, align 8
  br label %16

16:                                               ; preds = %9
  %17 = load i32, ptr %4, align 4
  %18 = add nsw i32 %17, 1
  store i32 %18, ptr %4, align 4
  br label %5, !llvm.loop !6

19:                                               ; preds = %5
  %20 = load double, ptr %3, align 8
  %21 = fdiv double %20, 2.000000e+00
  ret double %21
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca double, align 8
  store i32 0, ptr %1, align 4
  %3 = call double @sqrt_of_sum_of_squares(i32 noundef 10000000)
  store double %3, ptr %2, align 8
  %4 = load double, ptr %2, align 8
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %4)
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
!6 = distinct !{!6, !7}
!7 = !{!"llvm.loop.mustprogress"}
