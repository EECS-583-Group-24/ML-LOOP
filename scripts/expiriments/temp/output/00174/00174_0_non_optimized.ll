; ModuleID = '../../files/simple/00174.c'
source_filename = "../../files/simple/00174.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1
@.str.1 = private unnamed_addr constant [19 x i8] c"%d %d %d %d %d %d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca float, align 4
  store i32 0, ptr %1, align 4
  store float 0x405147AE20000000, ptr %2, align 4
  %3 = load float, ptr %2, align 4
  %4 = fpext float %3 to double
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %4)
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef 6.912000e+01)
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef -4.444000e+01)
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef 0x4085E5525460AA65)
  %9 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef 0x3FCBD1788F8E0597)
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef 1, i32 noundef 1, i32 noundef 0, i32 noundef 0, i32 noundef 0, i32 noundef 1)
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef 0, i32 noundef 1, i32 noundef 1, i32 noundef 1, i32 noundef 0, i32 noundef 0)
  %12 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef 0, i32 noundef 0, i32 noundef 0, i32 noundef 1, i32 noundef 1, i32 noundef 1)
  store float 0x4028AE1480000000, ptr %2, align 4
  %13 = load float, ptr %2, align 4
  %14 = fpext float %13 to double
  %15 = fadd double %14, 5.678000e+01
  %16 = fptrunc double %15 to float
  store float %16, ptr %2, align 4
  %17 = load float, ptr %2, align 4
  %18 = fpext float %17 to double
  %19 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %18)
  store float 0x4028AE1480000000, ptr %2, align 4
  %20 = load float, ptr %2, align 4
  %21 = fpext float %20 to double
  %22 = fsub double %21, 5.678000e+01
  %23 = fptrunc double %22 to float
  store float %23, ptr %2, align 4
  %24 = load float, ptr %2, align 4
  %25 = fpext float %24 to double
  %26 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %25)
  store float 0x4028AE1480000000, ptr %2, align 4
  %27 = load float, ptr %2, align 4
  %28 = fpext float %27 to double
  %29 = fmul double %28, 5.678000e+01
  %30 = fptrunc double %29 to float
  store float %30, ptr %2, align 4
  %31 = load float, ptr %2, align 4
  %32 = fpext float %31 to double
  %33 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %32)
  store float 0x4028AE1480000000, ptr %2, align 4
  %34 = load float, ptr %2, align 4
  %35 = fpext float %34 to double
  %36 = fdiv double %35, 5.678000e+01
  %37 = fptrunc double %36 to float
  store float %37, ptr %2, align 4
  %38 = load float, ptr %2, align 4
  %39 = fpext float %38 to double
  %40 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %39)
  %41 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef 1.234000e+01)
  %42 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef -1.234000e+01)
  store float 2.000000e+00, ptr %2, align 4
  %43 = load float, ptr %2, align 4
  %44 = fpext float %43 to double
  %45 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %44)
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
