; ModuleID = '../../files/simple/train8.c'
source_filename = "../../files/simple/train8.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@pai = dso_local global double 0x400921FB5444261E, align 8
@r = dso_local global double 0.000000e+00, align 8
@a1 = dso_local global double 0.000000e+00, align 8
@b1 = dso_local global double 0.000000e+00, align 8
@.str = private unnamed_addr constant [7 x i8] c"%f %f\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store double 2.330000e+01, ptr @r, align 8
  %2 = load double, ptr @r, align 8
  %3 = fmul double 2.000000e+00, %2
  %4 = load double, ptr @pai, align 8
  %5 = fmul double %3, %4
  store double %5, ptr @a1, align 8
  %6 = load double, ptr @r, align 8
  %7 = load double, ptr @r, align 8
  %8 = fmul double %6, %7
  %9 = load double, ptr @pai, align 8
  %10 = fmul double %8, %9
  store double %10, ptr @b1, align 8
  %11 = load double, ptr @b1, align 8
  %12 = load double, ptr @a1, align 8
  %13 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %11, double noundef %12)
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
