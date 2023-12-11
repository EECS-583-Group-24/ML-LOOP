; ModuleID = '../../files/simple/00195.c'
source_filename = "../../files/simple/00195.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.point = type { double, double }

@point_array = dso_local global [100 x %struct.point] zeroinitializer, align 16
@.str = private unnamed_addr constant [8 x i8] c"%f, %f\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 10, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = sext i32 %3 to i64
  %5 = getelementptr inbounds [100 x %struct.point], ptr @point_array, i64 0, i64 %4
  %6 = getelementptr inbounds %struct.point, ptr %5, i32 0, i32 0
  store double 1.234000e+01, ptr %6, align 16
  %7 = load i32, ptr %2, align 4
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds [100 x %struct.point], ptr @point_array, i64 0, i64 %8
  %10 = getelementptr inbounds %struct.point, ptr %9, i32 0, i32 1
  store double 5.678000e+01, ptr %10, align 8
  %11 = load i32, ptr %2, align 4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds [100 x %struct.point], ptr @point_array, i64 0, i64 %12
  %14 = getelementptr inbounds %struct.point, ptr %13, i32 0, i32 0
  %15 = load double, ptr %14, align 16
  %16 = load i32, ptr %2, align 4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [100 x %struct.point], ptr @point_array, i64 0, i64 %17
  %19 = getelementptr inbounds %struct.point, ptr %18, i32 0, i32 1
  %20 = load double, ptr %19, align 8
  %21 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %15, double noundef %20)
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
