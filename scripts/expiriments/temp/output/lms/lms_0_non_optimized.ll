; ModuleID = '../../files/simple/lms.c'
source_filename = "../../files/simple/lms.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@mu = dso_local global float 0x3F847AE140000000, align 4
@rand.next = internal global i64 1, align 8
@main.d = internal global [201 x float] zeroinitializer, align 16
@main.b = internal global [21 x float] zeroinitializer, align 16
@lms.px = internal global [51 x float] zeroinitializer, align 16
@lms.sigma = internal global float 2.000000e+00, align 4
@gaussian.ready = internal global i32 0, align 4
@gaussian.gstore = internal global float 0.000000e+00, align 4
@gaussian.rconst1 = internal global float 0x3F10000000000000, align 4
@gaussian.rconst2 = internal global float 1.638400e+04, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @rand() #0 {
  %1 = load i64, ptr @rand.next, align 8
  %2 = mul i64 %1, 1103515245
  %3 = add i64 %2, 12345
  store i64 %3, ptr @rand.next, align 8
  %4 = load i64, ptr @rand.next, align 8
  %5 = udiv i64 %4, 65536
  %6 = trunc i64 %5 to i32
  %7 = urem i32 %6, 32768
  ret i32 %7
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca float, align 4
  %3 = alloca float, align 4
  %4 = alloca float, align 4
  %5 = alloca float, align 4
  %6 = alloca float, align 4
  %7 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %8 = call float @sqrt(double noundef 2.000000e+00)
  store float %8, ptr %2, align 4
  %9 = call float @sqrt(double noundef 1.200000e+01)
  %10 = fpext float %9 to double
  %11 = fmul double 2.000000e-01, %10
  %12 = fptrunc double %11 to float
  store float %12, ptr %3, align 4
  store float 0x3FD41B2F80000000, ptr %4, align 4
  store i32 0, ptr %7, align 4
  br label %13

13:                                               ; preds = %31, %0
  %14 = load i32, ptr %7, align 4
  %15 = icmp slt i32 %14, 201
  br i1 %15, label %16, label %34

16:                                               ; preds = %13
  %17 = load float, ptr %2, align 4
  %18 = load float, ptr %4, align 4
  %19 = load i32, ptr %7, align 4
  %20 = sitofp i32 %19 to float
  %21 = fmul float %18, %20
  %22 = fpext float %21 to double
  %23 = call float @sin(double noundef %22)
  %24 = load float, ptr %3, align 4
  %25 = call float @gaussian()
  %26 = fmul float %24, %25
  %27 = call float @llvm.fmuladd.f32(float %17, float %23, float %26)
  %28 = load i32, ptr %7, align 4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [201 x float], ptr @main.d, i64 0, i64 %29
  store float %27, ptr %30, align 4
  br label %31

31:                                               ; preds = %16
  %32 = load i32, ptr %7, align 4
  %33 = add nsw i32 %32, 1
  store i32 %33, ptr %7, align 4
  br label %13, !llvm.loop !6

34:                                               ; preds = %13
  %35 = load float, ptr @mu, align 4
  %36 = fpext float %35 to double
  %37 = fmul double 2.000000e+00, %36
  %38 = fdiv double %37, 2.100000e+01
  %39 = fptrunc double %38 to float
  store float %39, ptr @mu, align 4
  store float 0.000000e+00, ptr %5, align 4
  store i32 0, ptr %7, align 4
  br label %40

40:                                               ; preds = %55, %34
  %41 = load i32, ptr %7, align 4
  %42 = icmp slt i32 %41, 201
  br i1 %42, label %43, label %58

43:                                               ; preds = %40
  %44 = load float, ptr %5, align 4
  %45 = load i32, ptr %7, align 4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds [201 x float], ptr @main.d, i64 0, i64 %46
  %48 = load float, ptr %47, align 4
  %49 = load float, ptr @mu, align 4
  %50 = call float @lms(float noundef %44, float noundef %48, ptr noundef @main.b, i32 noundef 20, float noundef %49, float noundef 0x3F847AE140000000)
  %51 = load i32, ptr %7, align 4
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [201 x float], ptr @main.d, i64 0, i64 %52
  %54 = load float, ptr %53, align 4
  store float %54, ptr %5, align 4
  br label %55

55:                                               ; preds = %43
  %56 = load i32, ptr %7, align 4
  %57 = add nsw i32 %56, 1
  store i32 %57, ptr %7, align 4
  br label %40, !llvm.loop !8

58:                                               ; preds = %40
  %59 = load i32, ptr %1, align 4
  ret i32 %59
}

; Function Attrs: noinline nounwind optnone uwtable
define internal float @sqrt(double noundef %0) #0 {
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
  br label %58

15:                                               ; preds = %1
  store i32 1, ptr %7, align 4
  br label %16

16:                                               ; preds = %54, %15
  %17 = load i32, ptr %7, align 4
  %18 = icmp slt i32 %17, 20
  br i1 %18, label %19, label %57

19:                                               ; preds = %16
  %20 = load i32, ptr %8, align 4
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %51, label %22

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
  %44 = fptrunc double %43 to float
  %45 = call float @fabs(float noundef %44)
  %46 = fpext float %45 to double
  %47 = load double, ptr %6, align 8
  %48 = fcmp ole double %46, %47
  br i1 %48, label %49, label %50

49:                                               ; preds = %22
  store i32 1, ptr %8, align 4
  br label %50

50:                                               ; preds = %49, %22
  br label %53

51:                                               ; preds = %19
  %52 = load float, ptr %3, align 4
  store float %52, ptr %3, align 4
  br label %53

53:                                               ; preds = %51, %50
  br label %54

54:                                               ; preds = %53
  %55 = load i32, ptr %7, align 4
  %56 = add nsw i32 %55, 1
  store i32 %56, ptr %7, align 4
  br label %16, !llvm.loop !9

57:                                               ; preds = %16
  br label %58

58:                                               ; preds = %57, %14
  %59 = load float, ptr %3, align 4
  ret float %59
}

; Function Attrs: noinline nounwind optnone uwtable
define internal float @sin(double noundef %0) #0 {
  %2 = alloca float, align 4
  %3 = alloca float, align 4
  %4 = alloca float, align 4
  %5 = alloca i32, align 4
  %6 = fptrunc double %0 to float
  store float %6, ptr %2, align 4
  store i32 1, ptr %5, align 4
  br label %7

7:                                                ; preds = %11, %1
  %8 = load float, ptr %2, align 4
  %9 = fpext float %8 to double
  %10 = fcmp ogt double %9, 0x401921FB54442D18
  br i1 %10, label %11, label %16

11:                                               ; preds = %7
  %12 = load float, ptr %2, align 4
  %13 = fpext float %12 to double
  %14 = fsub double %13, 0x401921FB54442D18
  %15 = fptrunc double %14 to float
  store float %15, ptr %2, align 4
  br label %7, !llvm.loop !10

16:                                               ; preds = %7
  br label %17

17:                                               ; preds = %21, %16
  %18 = load float, ptr %2, align 4
  %19 = fpext float %18 to double
  %20 = fcmp olt double %19, 0xC01921FB54442D18
  br i1 %20, label %21, label %26

21:                                               ; preds = %17
  %22 = load float, ptr %2, align 4
  %23 = fpext float %22 to double
  %24 = fadd double %23, 0x401921FB54442D18
  %25 = fptrunc double %24 to float
  store float %25, ptr %2, align 4
  br label %17, !llvm.loop !11

26:                                               ; preds = %17
  %27 = load float, ptr %2, align 4
  store float %27, ptr %4, align 4
  store float %27, ptr %3, align 4
  %28 = load float, ptr %4, align 4
  %29 = load float, ptr %2, align 4
  %30 = load float, ptr %2, align 4
  %31 = fmul float %29, %30
  %32 = fneg float %31
  %33 = fmul float %28, %32
  %34 = fpext float %33 to double
  %35 = load i32, ptr %5, align 4
  %36 = sitofp i32 %35 to double
  %37 = fmul double 2.000000e+00, %36
  %38 = load i32, ptr %5, align 4
  %39 = sitofp i32 %38 to double
  %40 = call double @llvm.fmuladd.f64(double 2.000000e+00, double %39, double 1.000000e+00)
  %41 = fmul double %37, %40
  %42 = fdiv double %34, %41
  %43 = fptrunc double %42 to float
  store float %43, ptr %4, align 4
  %44 = load float, ptr %3, align 4
  %45 = load float, ptr %4, align 4
  %46 = fadd float %44, %45
  store float %46, ptr %3, align 4
  %47 = load i32, ptr %5, align 4
  %48 = add nsw i32 %47, 1
  store i32 %48, ptr %5, align 4
  br label %49

49:                                               ; preds = %54, %26
  %50 = load float, ptr %4, align 4
  %51 = call float @fabs(float noundef %50)
  %52 = fpext float %51 to double
  %53 = fcmp oge double %52, 1.000000e-05
  br i1 %53, label %54, label %76

54:                                               ; preds = %49
  %55 = load float, ptr %4, align 4
  %56 = load float, ptr %2, align 4
  %57 = load float, ptr %2, align 4
  %58 = fmul float %56, %57
  %59 = fneg float %58
  %60 = fmul float %55, %59
  %61 = fpext float %60 to double
  %62 = load i32, ptr %5, align 4
  %63 = sitofp i32 %62 to double
  %64 = fmul double 2.000000e+00, %63
  %65 = load i32, ptr %5, align 4
  %66 = sitofp i32 %65 to double
  %67 = call double @llvm.fmuladd.f64(double 2.000000e+00, double %66, double 1.000000e+00)
  %68 = fmul double %64, %67
  %69 = fdiv double %61, %68
  %70 = fptrunc double %69 to float
  store float %70, ptr %4, align 4
  %71 = load float, ptr %3, align 4
  %72 = load float, ptr %4, align 4
  %73 = fadd float %71, %72
  store float %73, ptr %3, align 4
  %74 = load i32, ptr %5, align 4
  %75 = add nsw i32 %74, 1
  store i32 %75, ptr %5, align 4
  br label %49, !llvm.loop !12

76:                                               ; preds = %49
  %77 = load float, ptr %3, align 4
  ret float %77
}

; Function Attrs: noinline nounwind optnone uwtable
define internal float @gaussian() #0 {
  %1 = alloca float, align 4
  %2 = alloca float, align 4
  %3 = alloca float, align 4
  %4 = alloca float, align 4
  %5 = alloca float, align 4
  %6 = load i32, ptr @gaussian.ready, align 4
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %68

8:                                                ; preds = %0
  %9 = call i32 @rand()
  %10 = sitofp i32 %9 to float
  %11 = load float, ptr @gaussian.rconst2, align 4
  %12 = fsub float %10, %11
  store float %12, ptr %1, align 4
  %13 = call i32 @rand()
  %14 = sitofp i32 %13 to float
  %15 = load float, ptr @gaussian.rconst2, align 4
  %16 = fsub float %14, %15
  store float %16, ptr %2, align 4
  %17 = load float, ptr @gaussian.rconst1, align 4
  %18 = load float, ptr %1, align 4
  %19 = fmul float %18, %17
  store float %19, ptr %1, align 4
  %20 = load float, ptr @gaussian.rconst1, align 4
  %21 = load float, ptr %2, align 4
  %22 = fmul float %21, %20
  store float %22, ptr %2, align 4
  %23 = load float, ptr %1, align 4
  %24 = load float, ptr %1, align 4
  %25 = load float, ptr %2, align 4
  %26 = load float, ptr %2, align 4
  %27 = fmul float %25, %26
  %28 = call float @llvm.fmuladd.f32(float %23, float %24, float %27)
  store float %28, ptr %3, align 4
  br label %29

29:                                               ; preds = %32, %8
  %30 = load float, ptr %3, align 4
  %31 = fcmp ogt float %30, 1.000000e+00
  br i1 %31, label %32, label %53

32:                                               ; preds = %29
  %33 = call i32 @rand()
  %34 = sitofp i32 %33 to float
  %35 = load float, ptr @gaussian.rconst2, align 4
  %36 = fsub float %34, %35
  store float %36, ptr %1, align 4
  %37 = call i32 @rand()
  %38 = sitofp i32 %37 to float
  %39 = load float, ptr @gaussian.rconst2, align 4
  %40 = fsub float %38, %39
  store float %40, ptr %2, align 4
  %41 = load float, ptr @gaussian.rconst1, align 4
  %42 = load float, ptr %1, align 4
  %43 = fmul float %42, %41
  store float %43, ptr %1, align 4
  %44 = load float, ptr @gaussian.rconst1, align 4
  %45 = load float, ptr %2, align 4
  %46 = fmul float %45, %44
  store float %46, ptr %2, align 4
  %47 = load float, ptr %1, align 4
  %48 = load float, ptr %1, align 4
  %49 = load float, ptr %2, align 4
  %50 = load float, ptr %2, align 4
  %51 = fmul float %49, %50
  %52 = call float @llvm.fmuladd.f32(float %47, float %48, float %51)
  store float %52, ptr %3, align 4
  br label %29, !llvm.loop !13

53:                                               ; preds = %29
  %54 = load float, ptr %3, align 4
  %55 = fpext float %54 to double
  %56 = call float @log(double noundef %55)
  %57 = fmul float -2.000000e+00, %56
  %58 = load float, ptr %3, align 4
  %59 = fdiv float %57, %58
  %60 = fpext float %59 to double
  %61 = call float @sqrt(double noundef %60)
  store float %61, ptr %4, align 4
  %62 = load float, ptr %1, align 4
  %63 = load float, ptr %4, align 4
  %64 = fmul float %62, %63
  store float %64, ptr @gaussian.gstore, align 4
  %65 = load float, ptr %2, align 4
  %66 = load float, ptr %4, align 4
  %67 = fmul float %65, %66
  store float %67, ptr %5, align 4
  store i32 1, ptr @gaussian.ready, align 4
  br label %70

68:                                               ; preds = %0
  store i32 0, ptr @gaussian.ready, align 4
  %69 = load float, ptr @gaussian.gstore, align 4
  store float %69, ptr %5, align 4
  br label %70

70:                                               ; preds = %68, %53
  %71 = load float, ptr %5, align 4
  ret float %71
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare float @llvm.fmuladd.f32(float, float, float) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local float @lms(float noundef %0, float noundef %1, ptr noundef %2, i32 noundef %3, float noundef %4, float noundef %5) #0 {
  %7 = alloca float, align 4
  %8 = alloca float, align 4
  %9 = alloca ptr, align 8
  %10 = alloca i32, align 4
  %11 = alloca float, align 4
  %12 = alloca float, align 4
  %13 = alloca i32, align 4
  %14 = alloca float, align 4
  %15 = alloca float, align 4
  %16 = alloca float, align 4
  %17 = alloca float, align 4
  store float %0, ptr %7, align 4
  store float %1, ptr %8, align 4
  store ptr %2, ptr %9, align 8
  store i32 %3, ptr %10, align 4
  store float %4, ptr %11, align 4
  store float %5, ptr %12, align 4
  %18 = load float, ptr %7, align 4
  store float %18, ptr @lms.px, align 16
  %19 = load ptr, ptr %9, align 8
  %20 = getelementptr inbounds float, ptr %19, i64 0
  %21 = load float, ptr %20, align 4
  %22 = load float, ptr @lms.px, align 16
  %23 = fmul float %21, %22
  store float %23, ptr %17, align 4
  store i32 1, ptr %13, align 4
  br label %24

24:                                               ; preds = %40, %6
  %25 = load i32, ptr %13, align 4
  %26 = load i32, ptr %10, align 4
  %27 = icmp sle i32 %25, %26
  br i1 %27, label %28, label %43

28:                                               ; preds = %24
  %29 = load float, ptr %17, align 4
  %30 = load ptr, ptr %9, align 8
  %31 = load i32, ptr %13, align 4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds float, ptr %30, i64 %32
  %34 = load float, ptr %33, align 4
  %35 = load i32, ptr %13, align 4
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [51 x float], ptr @lms.px, i64 0, i64 %36
  %38 = load float, ptr %37, align 4
  %39 = call float @llvm.fmuladd.f32(float %34, float %38, float %29)
  store float %39, ptr %17, align 4
  br label %40

40:                                               ; preds = %28
  %41 = load i32, ptr %13, align 4
  %42 = add nsw i32 %41, 1
  store i32 %42, ptr %13, align 4
  br label %24, !llvm.loop !14

43:                                               ; preds = %24
  %44 = load float, ptr %8, align 4
  %45 = load float, ptr %17, align 4
  %46 = fsub float %44, %45
  store float %46, ptr %14, align 4
  %47 = load float, ptr %12, align 4
  %48 = load float, ptr @lms.px, align 16
  %49 = load float, ptr @lms.px, align 16
  %50 = fmul float %48, %49
  %51 = load float, ptr %12, align 4
  %52 = fsub float 1.000000e+00, %51
  %53 = load float, ptr @lms.sigma, align 4
  %54 = fmul float %52, %53
  %55 = call float @llvm.fmuladd.f32(float %47, float %50, float %54)
  store float %55, ptr @lms.sigma, align 4
  %56 = load float, ptr %11, align 4
  %57 = load float, ptr %14, align 4
  %58 = fmul float %56, %57
  %59 = load float, ptr @lms.sigma, align 4
  %60 = fdiv float %58, %59
  store float %60, ptr %15, align 4
  store i32 0, ptr %13, align 4
  br label %61

61:                                               ; preds = %81, %43
  %62 = load i32, ptr %13, align 4
  %63 = load i32, ptr %10, align 4
  %64 = icmp sle i32 %62, %63
  br i1 %64, label %65, label %84

65:                                               ; preds = %61
  %66 = load ptr, ptr %9, align 8
  %67 = load i32, ptr %13, align 4
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds float, ptr %66, i64 %68
  %70 = load float, ptr %69, align 4
  %71 = load float, ptr %15, align 4
  %72 = load i32, ptr %13, align 4
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds [51 x float], ptr @lms.px, i64 0, i64 %73
  %75 = load float, ptr %74, align 4
  %76 = call float @llvm.fmuladd.f32(float %71, float %75, float %70)
  %77 = load ptr, ptr %9, align 8
  %78 = load i32, ptr %13, align 4
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds float, ptr %77, i64 %79
  store float %76, ptr %80, align 4
  br label %81

81:                                               ; preds = %65
  %82 = load i32, ptr %13, align 4
  %83 = add nsw i32 %82, 1
  store i32 %83, ptr %13, align 4
  br label %61, !llvm.loop !15

84:                                               ; preds = %61
  %85 = load i32, ptr %10, align 4
  store i32 %85, ptr %13, align 4
  br label %86

86:                                               ; preds = %98, %84
  %87 = load i32, ptr %13, align 4
  %88 = icmp sge i32 %87, 1
  br i1 %88, label %89, label %101

89:                                               ; preds = %86
  %90 = load i32, ptr %13, align 4
  %91 = sub nsw i32 %90, 1
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds [51 x float], ptr @lms.px, i64 0, i64 %92
  %94 = load float, ptr %93, align 4
  %95 = load i32, ptr %13, align 4
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds [51 x float], ptr @lms.px, i64 0, i64 %96
  store float %94, ptr %97, align 4
  br label %98

98:                                               ; preds = %89
  %99 = load i32, ptr %13, align 4
  %100 = add nsw i32 %99, -1
  store i32 %100, ptr %13, align 4
  br label %86, !llvm.loop !16

101:                                              ; preds = %86
  %102 = load float, ptr %17, align 4
  ret float %102
}

; Function Attrs: noinline nounwind optnone uwtable
define internal float @fabs(float noundef %0) #0 {
  %2 = alloca float, align 4
  %3 = alloca float, align 4
  store float %0, ptr %2, align 4
  %4 = load float, ptr %2, align 4
  %5 = fcmp oge float %4, 0.000000e+00
  br i1 %5, label %6, label %8

6:                                                ; preds = %1
  %7 = load float, ptr %2, align 4
  store float %7, ptr %3, align 4
  br label %11

8:                                                ; preds = %1
  %9 = load float, ptr %2, align 4
  %10 = fneg float %9
  store float %10, ptr %3, align 4
  br label %11

11:                                               ; preds = %8, %6
  %12 = load float, ptr %3, align 4
  ret float %12
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fmuladd.f64(double, double, double) #1

; Function Attrs: noinline nounwind optnone uwtable
define internal float @log(double noundef %0) #0 {
  %2 = alloca float, align 4
  %3 = fptrunc double %0 to float
  store float %3, ptr %2, align 4
  ret float 4.500000e+00
}

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }

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
!8 = distinct !{!8, !7}
!9 = distinct !{!9, !7}
!10 = distinct !{!10, !7}
!11 = distinct !{!11, !7}
!12 = distinct !{!12, !7}
!13 = distinct !{!13, !7}
!14 = distinct !{!14, !7}
!15 = distinct !{!15, !7}
!16 = distinct !{!16, !7}
