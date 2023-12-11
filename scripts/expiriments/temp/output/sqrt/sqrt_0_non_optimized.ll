; ModuleID = '../../files/simple/sqrt.c'
source_filename = "../../files/simple/sqrt.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone willreturn memory(none) uwtable
define dso_local double @fabs(double noundef %0) #0 {
  %2 = alloca double, align 8
  %3 = alloca double, align 8
  store double %0, ptr %2, align 8
  %4 = load double, ptr %2, align 8
  %5 = fcmp oge double %4, 0.000000e+00
  br i1 %5, label %6, label %8

6:                                                ; preds = %1
  %7 = load double, ptr %2, align 8
  store double %7, ptr %3, align 8
  br label %11

8:                                                ; preds = %1
  %9 = load double, ptr %2, align 8
  %10 = fneg double %9
  store double %10, ptr %3, align 8
  br label %11

11:                                               ; preds = %8, %6
  %12 = load double, ptr %3, align 8
  ret double %12
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local float @sqrt(double noundef %0) #1 {
  %2 = alloca float, align 4
  %3 = alloca float, align 4
  %4 = alloca float, align 4
  %5 = alloca double, align 8
  %6 = alloca double, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = fptrunc double %0 to float
  store float %9, ptr %2, align 4
  %10 = load float, ptr %2, align 4
  %11 = fdiv float %10, 1.000000e+01
  store float %11, ptr %3, align 4
  store double 1.000000e-05, ptr %6, align 8
  store i32 0, ptr %8, align 4
  %12 = load float, ptr %2, align 4
  %13 = fcmp oeq float %12, 0.000000e+00
  br i1 %13, label %14, label %15

14:                                               ; preds = %1
  store float 0.000000e+00, ptr %3, align 4
  br label %56

15:                                               ; preds = %1
  store i32 1, ptr %7, align 4
  br label %16

16:                                               ; preds = %52, %15
  %17 = load i32, ptr %7, align 4
  %18 = icmp slt i32 %17, 20
  br i1 %18, label %19, label %55

19:                                               ; preds = %16
  %20 = load i32, ptr %8, align 4
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %49, label %22

22:                                               ; preds = %19
  %23 = load float, ptr %2, align 4
  %24 = load float, ptr %3, align 4
  %25 = load float, ptr %3, align 4
  %26 = fneg float %24
  %27 = call float @llvm.fmuladd.f32(float %26, float %25, float %23)
  %28 = fpext float %27 to double
  %29 = load float, ptr %3, align 4
  %30 = fpext float %29 to double
  %31 = fmul double 2.000000e+00, %30
  %32 = fdiv double %28, %31
  %33 = fptrunc double %32 to float
  store float %33, ptr %4, align 4
  %34 = load float, ptr %3, align 4
  %35 = load float, ptr %4, align 4
  %36 = fadd float %34, %35
  store float %36, ptr %3, align 4
  %37 = load float, ptr %2, align 4
  %38 = load float, ptr %3, align 4
  %39 = load float, ptr %3, align 4
  %40 = fneg float %38
  %41 = call float @llvm.fmuladd.f32(float %40, float %39, float %37)
  %42 = fpext float %41 to double
  store double %42, ptr %5, align 8
  %43 = load double, ptr %5, align 8
  %44 = call double @llvm.fabs.f64(double %43)
  %45 = load double, ptr %6, align 8
  %46 = fcmp ole double %44, %45
  br i1 %46, label %47, label %48

47:                                               ; preds = %22
  store i32 1, ptr %8, align 4
  br label %48

48:                                               ; preds = %47, %22
  br label %51

49:                                               ; preds = %19
  %50 = load float, ptr %3, align 4
  store float %50, ptr %3, align 4
  br label %51

51:                                               ; preds = %49, %48
  br label %52

52:                                               ; preds = %51
  %53 = load i32, ptr %7, align 4
  %54 = add nsw i32 %53, 1
  store i32 %54, ptr %7, align 4
  br label %16, !llvm.loop !6

55:                                               ; preds = %16
  br label %56

56:                                               ; preds = %55, %14
  %57 = load float, ptr %3, align 4
  ret float %57
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare float @llvm.fmuladd.f32(float, float, float) #2

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fabs.f64(double) #2

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #1 {
  %1 = alloca i32, align 4
  %2 = alloca float, align 4
  store i32 0, ptr %1, align 4
  store float 1.234000e+03, ptr %2, align 4
  %3 = load float, ptr %2, align 4
  %4 = fpext float %3 to double
  %5 = call float @sqrt(double noundef %4)
  ret i32 0
}

attributes #0 = { noinline nounwind optnone willreturn memory(none) uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }

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
