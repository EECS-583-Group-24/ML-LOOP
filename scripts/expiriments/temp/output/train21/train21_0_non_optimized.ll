; ModuleID = '../../files/simple/train21.c'
source_filename = "../../files/simple/train21.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [8 x i8] c"%lf %lf\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca double, align 8
  %3 = alloca double, align 8
  %4 = alloca double, align 8
  store i32 0, ptr %1, align 4
  store double 0x41418F1E9D70A3D7, ptr %2, align 8
  %5 = load double, ptr %2, align 8
  %6 = fcmp oge double %5, 0.000000e+00
  br i1 %6, label %7, label %17

7:                                                ; preds = %0
  %8 = load double, ptr %2, align 8
  %9 = fmul double 0x400921FB54442D18, %8
  %10 = load double, ptr %2, align 8
  %11 = fmul double %9, %10
  store double %11, ptr %3, align 8
  %12 = load double, ptr %2, align 8
  %13 = fmul double 0x401921FB54442D18, %12
  store double %13, ptr %4, align 8
  %14 = load double, ptr %3, align 8
  %15 = load double, ptr %4, align 8
  %16 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %14, double noundef %15)
  store i32 0, ptr %1, align 4
  br label %17

17:                                               ; preds = %7, %0
  %18 = load i32, ptr %1, align 4
  ret i32 %18
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
