; ModuleID = '../../files/simple/fft1k.c'
source_filename = "../../files/simple/fft1k.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.COMPLEX = type { float, float }

@n = dso_local global i32 1024, align 4
@x = dso_local global [1024 x %struct.COMPLEX] zeroinitializer, align 16
@w = dso_local global [1024 x %struct.COMPLEX] zeroinitializer, align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local float @fabs(float noundef %0) #0 {
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
define dso_local float @sin(double noundef %0) #0 {
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
  br label %7, !llvm.loop !6

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
  br label %17, !llvm.loop !8

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
  br label %49, !llvm.loop !9

76:                                               ; preds = %49
  %77 = load float, ptr %3, align 4
  ret float %77
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fmuladd.f64(double, double, double) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local float @cos(double noundef %0) #0 {
  %2 = alloca float, align 4
  %3 = fptrunc double %0 to float
  store float %3, ptr %2, align 4
  %4 = load float, ptr %2, align 4
  %5 = fpext float %4 to double
  %6 = fsub double 0x3FF921FB54442D18, %5
  %7 = call float @sin(double noundef %6)
  ret float %7
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = load i32, ptr @n, align 4
  call void @init_w(i32 noundef %2)
  store float 1.000000e+00, ptr @x, align 16
  %3 = load i32, ptr @n, align 4
  call void @fft_c(i32 noundef %3)
  ret i32 0
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @init_w(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca float, align 4
  store i32 %0, ptr %2, align 4
  %5 = load i32, ptr %2, align 4
  %6 = sitofp i32 %5 to double
  %7 = fdiv double 0x401921FB54442D18, %6
  %8 = fptrunc double %7 to float
  store float %8, ptr %4, align 4
  store i32 0, ptr %3, align 4
  br label %9

9:                                                ; preds = %34, %1
  %10 = load i32, ptr %3, align 4
  %11 = load i32, ptr %2, align 4
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %13, label %37

13:                                               ; preds = %9
  %14 = load i32, ptr %3, align 4
  %15 = sitofp i32 %14 to float
  %16 = load float, ptr %4, align 4
  %17 = fmul float %15, %16
  %18 = fpext float %17 to double
  %19 = call float @cos(double noundef %18)
  %20 = load i32, ptr %3, align 4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds [1024 x %struct.COMPLEX], ptr @w, i64 0, i64 %21
  %23 = getelementptr inbounds %struct.COMPLEX, ptr %22, i32 0, i32 0
  store float %19, ptr %23, align 8
  %24 = load i32, ptr %3, align 4
  %25 = sitofp i32 %24 to float
  %26 = load float, ptr %4, align 4
  %27 = fmul float %25, %26
  %28 = fpext float %27 to double
  %29 = call float @sin(double noundef %28)
  %30 = load i32, ptr %3, align 4
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds [1024 x %struct.COMPLEX], ptr @w, i64 0, i64 %31
  %33 = getelementptr inbounds %struct.COMPLEX, ptr %32, i32 0, i32 1
  store float %29, ptr %33, align 4
  br label %34

34:                                               ; preds = %13
  %35 = load i32, ptr %3, align 4
  %36 = add nsw i32 %35, 1
  store i32 %36, ptr %3, align 4
  br label %9, !llvm.loop !10

37:                                               ; preds = %9
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @fft_c(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca %struct.COMPLEX, align 4
  %4 = alloca %struct.COMPLEX, align 4
  %5 = alloca %struct.COMPLEX, align 4
  %6 = alloca ptr, align 8
  %7 = alloca ptr, align 8
  %8 = alloca ptr, align 8
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  %11 = alloca i32, align 4
  %12 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  store i32 1, ptr %12, align 4
  %13 = load i32, ptr %2, align 4
  %14 = sdiv i32 %13, 2
  store i32 %14, ptr %11, align 4
  br label %15

15:                                               ; preds = %112, %1
  %16 = load i32, ptr %11, align 4
  %17 = icmp sgt i32 %16, 0
  br i1 %17, label %18, label %115

18:                                               ; preds = %15
  store ptr @w, ptr %8, align 8
  store i32 0, ptr %10, align 4
  br label %19

19:                                               ; preds = %106, %18
  %20 = load i32, ptr %10, align 4
  %21 = load i32, ptr %11, align 4
  %22 = icmp slt i32 %20, %21
  br i1 %22, label %23, label %109

23:                                               ; preds = %19
  %24 = load ptr, ptr %8, align 8
  call void @llvm.memcpy.p0.p0.i64(ptr align 4 %3, ptr align 4 %24, i64 8, i1 false)
  %25 = load i32, ptr %10, align 4
  store i32 %25, ptr %9, align 4
  br label %26

26:                                               ; preds = %96, %23
  %27 = load i32, ptr %9, align 4
  %28 = load i32, ptr %2, align 4
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %30, label %101

30:                                               ; preds = %26
  %31 = load i32, ptr %9, align 4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds %struct.COMPLEX, ptr @x, i64 %32
  store ptr %33, ptr %6, align 8
  %34 = load ptr, ptr %6, align 8
  %35 = load i32, ptr %11, align 4
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds %struct.COMPLEX, ptr %34, i64 %36
  store ptr %37, ptr %7, align 8
  %38 = load ptr, ptr %6, align 8
  %39 = getelementptr inbounds %struct.COMPLEX, ptr %38, i32 0, i32 0
  %40 = load float, ptr %39, align 4
  %41 = load ptr, ptr %7, align 8
  %42 = getelementptr inbounds %struct.COMPLEX, ptr %41, i32 0, i32 0
  %43 = load float, ptr %42, align 4
  %44 = fadd float %40, %43
  %45 = getelementptr inbounds %struct.COMPLEX, ptr %4, i32 0, i32 0
  store float %44, ptr %45, align 4
  %46 = load ptr, ptr %6, align 8
  %47 = getelementptr inbounds %struct.COMPLEX, ptr %46, i32 0, i32 1
  %48 = load float, ptr %47, align 4
  %49 = load ptr, ptr %7, align 8
  %50 = getelementptr inbounds %struct.COMPLEX, ptr %49, i32 0, i32 1
  %51 = load float, ptr %50, align 4
  %52 = fadd float %48, %51
  %53 = getelementptr inbounds %struct.COMPLEX, ptr %4, i32 0, i32 1
  store float %52, ptr %53, align 4
  %54 = load ptr, ptr %6, align 8
  %55 = getelementptr inbounds %struct.COMPLEX, ptr %54, i32 0, i32 0
  %56 = load float, ptr %55, align 4
  %57 = load ptr, ptr %7, align 8
  %58 = getelementptr inbounds %struct.COMPLEX, ptr %57, i32 0, i32 0
  %59 = load float, ptr %58, align 4
  %60 = fsub float %56, %59
  %61 = getelementptr inbounds %struct.COMPLEX, ptr %5, i32 0, i32 0
  store float %60, ptr %61, align 4
  %62 = load ptr, ptr %6, align 8
  %63 = getelementptr inbounds %struct.COMPLEX, ptr %62, i32 0, i32 1
  %64 = load float, ptr %63, align 4
  %65 = load ptr, ptr %7, align 8
  %66 = getelementptr inbounds %struct.COMPLEX, ptr %65, i32 0, i32 1
  %67 = load float, ptr %66, align 4
  %68 = fsub float %64, %67
  %69 = getelementptr inbounds %struct.COMPLEX, ptr %5, i32 0, i32 1
  store float %68, ptr %69, align 4
  %70 = getelementptr inbounds %struct.COMPLEX, ptr %5, i32 0, i32 0
  %71 = load float, ptr %70, align 4
  %72 = getelementptr inbounds %struct.COMPLEX, ptr %3, i32 0, i32 0
  %73 = load float, ptr %72, align 4
  %74 = getelementptr inbounds %struct.COMPLEX, ptr %5, i32 0, i32 1
  %75 = load float, ptr %74, align 4
  %76 = getelementptr inbounds %struct.COMPLEX, ptr %3, i32 0, i32 1
  %77 = load float, ptr %76, align 4
  %78 = fmul float %75, %77
  %79 = fneg float %78
  %80 = call float @llvm.fmuladd.f32(float %71, float %73, float %79)
  %81 = load ptr, ptr %7, align 8
  %82 = getelementptr inbounds %struct.COMPLEX, ptr %81, i32 0, i32 0
  store float %80, ptr %82, align 4
  %83 = getelementptr inbounds %struct.COMPLEX, ptr %5, i32 0, i32 0
  %84 = load float, ptr %83, align 4
  %85 = getelementptr inbounds %struct.COMPLEX, ptr %3, i32 0, i32 1
  %86 = load float, ptr %85, align 4
  %87 = getelementptr inbounds %struct.COMPLEX, ptr %5, i32 0, i32 1
  %88 = load float, ptr %87, align 4
  %89 = getelementptr inbounds %struct.COMPLEX, ptr %3, i32 0, i32 0
  %90 = load float, ptr %89, align 4
  %91 = fmul float %88, %90
  %92 = call float @llvm.fmuladd.f32(float %84, float %86, float %91)
  %93 = load ptr, ptr %7, align 8
  %94 = getelementptr inbounds %struct.COMPLEX, ptr %93, i32 0, i32 1
  store float %92, ptr %94, align 4
  %95 = load ptr, ptr %6, align 8
  call void @llvm.memcpy.p0.p0.i64(ptr align 4 %95, ptr align 4 %4, i64 8, i1 false)
  br label %96

96:                                               ; preds = %30
  %97 = load i32, ptr %9, align 4
  %98 = load i32, ptr %11, align 4
  %99 = mul nsw i32 2, %98
  %100 = add nsw i32 %97, %99
  store i32 %100, ptr %9, align 4
  br label %26, !llvm.loop !11

101:                                              ; preds = %26
  %102 = load ptr, ptr %8, align 8
  %103 = load i32, ptr %12, align 4
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds %struct.COMPLEX, ptr %102, i64 %104
  store ptr %105, ptr %8, align 8
  br label %106

106:                                              ; preds = %101
  %107 = load i32, ptr %10, align 4
  %108 = add nsw i32 %107, 1
  store i32 %108, ptr %10, align 4
  br label %19, !llvm.loop !12

109:                                              ; preds = %19
  %110 = load i32, ptr %12, align 4
  %111 = mul nsw i32 2, %110
  store i32 %111, ptr %12, align 4
  br label %112

112:                                              ; preds = %109
  %113 = load i32, ptr %11, align 4
  %114 = sdiv i32 %113, 2
  store i32 %114, ptr %11, align 4
  br label %15, !llvm.loop !13

115:                                              ; preds = %15
  ret void
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare float @llvm.fmuladd.f32(float, float, float) #1

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }

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
