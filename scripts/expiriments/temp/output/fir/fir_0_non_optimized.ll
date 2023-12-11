; ModuleID = '../../files/simple/fir.c'
source_filename = "../../files/simple/fir.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@fir_lpf35 = dso_local global [35 x float] [float 0xBF7A0D0B40000000, float 0xBF14164C20000000, float 0x3F7F80E5C0000000, float 0x3F74B60900000000, float 0xBF811EF300000000, float 0xBF854D11E0000000, float 0x3F81CF35A0000000, float 0x3F94A79380000000, float 0xBF6693EA60000000, float 0xBF9EC16FC0000000, float 0xBF823E18E0000000, float 0x3FA55BC4E0000000, float 0x3FA1769FC0000000, float 0xBFA9F9AA40000000, float 0xBFB60A7D20000000, float 0x3FADA706E0000000, float 0x3FD3F2E820000000, float 0x3FDC2DC320000000, float 0x3FD3F2E820000000, float 0x3FADA706E0000000, float 0xBFB60A7D20000000, float 0xBFA9F9AA40000000, float 0x3FA1769FC0000000, float 0x3FA55BC4E0000000, float 0xBF823E18E0000000, float 0xBF9EC16FC0000000, float 0xBF6693EA60000000, float 0x3F94A79380000000, float 0x3F81CF35A0000000, float 0xBF854D11E0000000, float 0xBF811EF300000000, float 0x3F74B60900000000, float 0x3F7F80E5C0000000, float 0xBF14164C20000000, float 0xBF7A0D0B40000000], align 16
@fir_lpf37 = dso_local global [37 x float] [float 0xBF4554FBE0000000, float 0xBF6E44FA00000000, float 0xBF44940BC0000000, float 0x3F799ED7C0000000, float 0x3F70A45D40000000, float 0xBF80C56500000000, float 0xBF84DC65C0000000, float 0x3F80121680000000, float 0x3F936C58E0000000, float 0xBF68FE6920000000, float 0xBF9E5FB720000000, float 0xBF8290ABC0000000, float 0x3FA4EB7880000000, float 0x3FA124D0A0000000, float 0xBFA9FC8F40000000, float 0xBFB60B1BC0000000, float 0x3FAD79AF20000000, float 0x3FD3EC6BC0000000, float 0x3FDC28F5C0000000, float 0x3FD3EC6BC0000000, float 0x3FAD79AF20000000, float 0xBFB60B1BC0000000, float 0xBFA9FC8F40000000, float 0x3FA124D0A0000000, float 0x3FA4EB7880000000, float 0xBF8290ABC0000000, float 0xBF9E5FB720000000, float 0xBF68FE6920000000, float 0x3F936C58E0000000, float 0x3F80121680000000, float 0xBF84DC65C0000000, float 0xBF80C56500000000, float 0x3F70A45D40000000, float 0x3F799ED7C0000000, float 0xBF44940BC0000000, float 0xBF6E44FA00000000, float 0xBF4554FBE0000000], align 16
@rand.next = internal global i64 1, align 8
@sigma = dso_local global float 0x3FC99999A0000000, align 4
@main.hist = internal global [34 x float] zeroinitializer, align 16
@Cnt1 = dso_local global i32 0, align 4
@Cnt2 = dso_local global i32 0, align 4
@Cnt3 = dso_local global i32 0, align 4
@Cnt4 = dso_local global i32 0, align 4
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
define dso_local float @fir_filter(float noundef %0, ptr noundef %1, i32 noundef %2, ptr noundef %3) #0 {
  %5 = alloca float, align 4
  %6 = alloca ptr, align 8
  %7 = alloca i32, align 4
  %8 = alloca ptr, align 8
  %9 = alloca i32, align 4
  %10 = alloca ptr, align 8
  %11 = alloca ptr, align 8
  %12 = alloca ptr, align 8
  %13 = alloca float, align 4
  store float %0, ptr %5, align 4
  store ptr %1, ptr %6, align 8
  store i32 %2, ptr %7, align 4
  store ptr %3, ptr %8, align 8
  %14 = load ptr, ptr %8, align 8
  store ptr %14, ptr %10, align 8
  %15 = load ptr, ptr %10, align 8
  store ptr %15, ptr %11, align 8
  %16 = load ptr, ptr %6, align 8
  %17 = load i32, ptr %7, align 4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds float, ptr %16, i64 %18
  %20 = getelementptr inbounds float, ptr %19, i64 -1
  store ptr %20, ptr %12, align 8
  %21 = load ptr, ptr %10, align 8
  %22 = getelementptr inbounds float, ptr %21, i32 1
  store ptr %22, ptr %10, align 8
  %23 = load float, ptr %21, align 4
  %24 = load ptr, ptr %12, align 8
  %25 = getelementptr inbounds float, ptr %24, i32 -1
  store ptr %25, ptr %12, align 8
  %26 = load float, ptr %24, align 4
  %27 = fmul float %23, %26
  store float %27, ptr %13, align 4
  store i32 2, ptr %9, align 4
  br label %28

28:                                               ; preds = %45, %4
  %29 = load i32, ptr %9, align 4
  %30 = load i32, ptr %7, align 4
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %48

32:                                               ; preds = %28
  %33 = load ptr, ptr %10, align 8
  %34 = load float, ptr %33, align 4
  %35 = load ptr, ptr %11, align 8
  %36 = getelementptr inbounds float, ptr %35, i32 1
  store ptr %36, ptr %11, align 8
  store float %34, ptr %35, align 4
  %37 = load ptr, ptr %10, align 8
  %38 = getelementptr inbounds float, ptr %37, i32 1
  store ptr %38, ptr %10, align 8
  %39 = load float, ptr %37, align 4
  %40 = load ptr, ptr %12, align 8
  %41 = getelementptr inbounds float, ptr %40, i32 -1
  store ptr %41, ptr %12, align 8
  %42 = load float, ptr %40, align 4
  %43 = load float, ptr %13, align 4
  %44 = call float @llvm.fmuladd.f32(float %39, float %42, float %43)
  store float %44, ptr %13, align 4
  br label %45

45:                                               ; preds = %32
  %46 = load i32, ptr %9, align 4
  %47 = add nsw i32 %46, 1
  store i32 %47, ptr %9, align 4
  br label %28, !llvm.loop !6

48:                                               ; preds = %28
  %49 = load float, ptr %5, align 4
  %50 = load ptr, ptr %12, align 8
  %51 = load float, ptr %50, align 4
  %52 = load float, ptr %13, align 4
  %53 = call float @llvm.fmuladd.f32(float %49, float %51, float %52)
  store float %53, ptr %13, align 4
  %54 = load float, ptr %5, align 4
  %55 = load ptr, ptr %11, align 8
  store float %54, ptr %55, align 4
  %56 = load float, ptr %13, align 4
  ret float %56
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare float @llvm.fmuladd.f32(float, float, float) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca float, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %2, align 4
  br label %5

5:                                                ; preds = %22, %0
  %6 = load i32, ptr %2, align 4
  %7 = icmp slt i32 %6, 10
  br i1 %7, label %8, label %25

8:                                                ; preds = %5
  %9 = load i32, ptr %2, align 4
  %10 = sitofp i32 %9 to double
  %11 = fmul double 0x3FD41B2F769CF0E0, %10
  %12 = call float @sin(double noundef %11)
  %13 = load float, ptr @sigma, align 4
  %14 = call float @gaussian()
  %15 = call float @llvm.fmuladd.f32(float %13, float %14, float %12)
  store float %15, ptr %4, align 4
  %16 = load float, ptr %4, align 4
  %17 = fpext float %16 to double
  %18 = fmul double %17, 2.500000e+04
  %19 = fptrunc double %18 to float
  store float %19, ptr %4, align 4
  %20 = load float, ptr %4, align 4
  %21 = call float @fir_filter(float noundef %20, ptr noundef @fir_lpf35, i32 noundef 35, ptr noundef @main.hist)
  br label %22

22:                                               ; preds = %8
  %23 = load i32, ptr %2, align 4
  %24 = add nsw i32 %23, 1
  store i32 %24, ptr %2, align 4
  br label %5, !llvm.loop !8

25:                                               ; preds = %5
  store i32 0, ptr %2, align 4
  br label %26

26:                                               ; preds = %41, %25
  %27 = load i32, ptr %2, align 4
  %28 = icmp slt i32 %27, 10
  br i1 %28, label %29, label %44

29:                                               ; preds = %26
  %30 = load i32, ptr %2, align 4
  %31 = sitofp i32 %30 to double
  %32 = fmul double 0x3FD41B2F769CF0E0, %31
  %33 = call float @sin(double noundef %32)
  %34 = load float, ptr @sigma, align 4
  %35 = call float @gaussian()
  %36 = call float @llvm.fmuladd.f32(float %34, float %35, float %33)
  store float %36, ptr %4, align 4
  %37 = load float, ptr %4, align 4
  %38 = fpext float %37 to double
  %39 = fmul double %38, 2.500000e+04
  %40 = fptrunc double %39 to float
  store float %40, ptr %4, align 4
  br label %41

41:                                               ; preds = %29
  %42 = load i32, ptr %2, align 4
  %43 = add nsw i32 %42, 1
  store i32 %43, ptr %2, align 4
  br label %26, !llvm.loop !9

44:                                               ; preds = %26
  %45 = load i32, ptr %1, align 4
  ret i32 %45
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
  br i1 %7, label %8, label %61

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
  %54 = call float @sqrt(double noundef -2.000000e-01)
  store float %54, ptr %4, align 4
  %55 = load float, ptr %1, align 4
  %56 = load float, ptr %4, align 4
  %57 = fmul float %55, %56
  store float %57, ptr @gaussian.gstore, align 4
  %58 = load float, ptr %2, align 4
  %59 = load float, ptr %4, align 4
  %60 = fmul float %58, %59
  store float %60, ptr %5, align 4
  store i32 1, ptr @gaussian.ready, align 4
  br label %63

61:                                               ; preds = %0
  store i32 0, ptr @gaussian.ready, align 4
  %62 = load float, ptr @gaussian.gstore, align 4
  store float %62, ptr %5, align 4
  br label %63

63:                                               ; preds = %61, %53
  %64 = load float, ptr %5, align 4
  ret float %64
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fmuladd.f64(double, double, double) #1

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
  br label %16, !llvm.loop !14

57:                                               ; preds = %16
  br label %58

58:                                               ; preds = %57, %14
  %59 = load float, ptr %3, align 4
  ret float %59
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
