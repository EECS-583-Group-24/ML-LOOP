; ModuleID = '../test/toy.c'
source_filename = "../test/toy.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [24 x i8] c"Should Not Be Printed!\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @never_executed() #0 {
  %1 = call i32 (ptr, ...) @printf(ptr noundef @.str)
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @iAdd(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  store i32 %1, ptr %4, align 4
  %5 = load i32, ptr %3, align 4
  %6 = load i32, ptr %4, align 4
  %7 = add nsw i32 %5, %6
  ret i32 %7
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local float @fAdd(float noundef %0, float noundef %1) #0 {
  %3 = alloca float, align 4
  %4 = alloca float, align 4
  store float %0, ptr %3, align 4
  store float %1, ptr %4, align 4
  %5 = load float, ptr %3, align 4
  %6 = load float, ptr %4, align 4
  %7 = fadd float %5, %6
  ret float %7
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [200 x i32], align 16
  %3 = alloca [200 x i32], align 16
  %4 = alloca [200 x float], align 16
  %5 = alloca [200 x float], align 16
  %6 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  call void @llvm.memset.p0.i64(ptr align 16 %2, i8 0, i64 800, i1 false)
  call void @llvm.memset.p0.i64(ptr align 16 %3, i8 0, i64 800, i1 false)
  %7 = getelementptr inbounds <{ i32, [199 x i32] }>, ptr %3, i32 0, i32 0
  store i32 1, ptr %7, align 16
  call void @llvm.memset.p0.i64(ptr align 16 %4, i8 0, i64 800, i1 false)
  %8 = getelementptr inbounds <{ float, [199 x float] }>, ptr %4, i32 0, i32 0
  store float 0x3FB99999A0000000, ptr %8, align 16
  call void @llvm.memset.p0.i64(ptr align 16 %5, i8 0, i64 800, i1 false)
  %9 = getelementptr inbounds <{ float, [199 x float] }>, ptr %5, i32 0, i32 0
  store float 0x40099999A0000000, ptr %9, align 16
  store i32 0, ptr %6, align 4
  br label %10

10:                                               ; preds = %48, %0
  %11 = load i32, ptr %6, align 4
  %12 = icmp slt i32 %11, 200
  br i1 %12, label %13, label %51

13:                                               ; preds = %10
  %14 = load i32, ptr %6, align 4
  %15 = sitofp i32 %14 to double
  %16 = fcmp olt double %15, 1.600000e+02
  br i1 %16, label %17, label %30

17:                                               ; preds = %13
  %18 = load i32, ptr %6, align 4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds [200 x float], ptr %4, i64 0, i64 %19
  %21 = load float, ptr %20, align 4
  %22 = load i32, ptr %6, align 4
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds [200 x float], ptr %5, i64 0, i64 %23
  %25 = load float, ptr %24, align 4
  %26 = call float @fAdd(float noundef %21, float noundef %25)
  %27 = load i32, ptr %6, align 4
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds [200 x float], ptr %5, i64 0, i64 %28
  store float %26, ptr %29, align 4
  br label %30

30:                                               ; preds = %17, %13
  %31 = load i32, ptr %6, align 4
  %32 = sitofp i32 %31 to double
  %33 = fcmp olt double %32, 6.000000e+01
  br i1 %33, label %34, label %47

34:                                               ; preds = %30
  %35 = load i32, ptr %6, align 4
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [200 x i32], ptr %2, i64 0, i64 %36
  %38 = load i32, ptr %37, align 4
  %39 = load i32, ptr %6, align 4
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [200 x i32], ptr %3, i64 0, i64 %40
  %42 = load i32, ptr %41, align 4
  %43 = call i32 @iAdd(i32 noundef %38, i32 noundef %42)
  %44 = load i32, ptr %6, align 4
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds [200 x i32], ptr %3, i64 0, i64 %45
  store i32 %43, ptr %46, align 4
  br label %47

47:                                               ; preds = %34, %30
  br label %48

48:                                               ; preds = %47
  %49 = load i32, ptr %6, align 4
  %50 = add nsw i32 %49, 1
  store i32 %50, ptr %6, align 4
  br label %10, !llvm.loop !6

51:                                               ; preds = %10
  ret i32 0
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: write)
declare void @llvm.memset.p0.i64(ptr nocapture writeonly, i8, i64, i1 immarg) #2

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: write) }

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
