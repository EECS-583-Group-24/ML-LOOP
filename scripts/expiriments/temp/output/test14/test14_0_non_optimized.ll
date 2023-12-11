; ModuleID = '../../files/simple/test14.c'
source_filename = "../../files/simple/test14.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@__const.main.str = private unnamed_addr constant [16 x i8] c"01B0B1B0B0B0BBB\00", align 16
@.str = private unnamed_addr constant [3 x i8] c"%s\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [16 x i8], align 16
  %3 = alloca [15 x i8], align 1
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  call void @llvm.memcpy.p0.p0.i64(ptr align 16 %2, ptr align 16 @__const.main.str, i64 16, i1 false)
  store i32 0, ptr %4, align 4
  store i32 0, ptr %5, align 4
  br label %8

8:                                                ; preds = %18, %0
  %9 = load i32, ptr %5, align 4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds [16 x i8], ptr %2, i64 0, i64 %10
  %12 = load i8, ptr %11, align 1
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %21

15:                                               ; preds = %8
  %16 = load i32, ptr %4, align 4
  %17 = add nsw i32 %16, 1
  store i32 %17, ptr %4, align 4
  br label %18

18:                                               ; preds = %15
  %19 = load i32, ptr %5, align 4
  %20 = add nsw i32 %19, 1
  store i32 %20, ptr %5, align 4
  br label %8, !llvm.loop !6

21:                                               ; preds = %8
  store i32 0, ptr %6, align 4
  store i32 0, ptr %7, align 4
  br label %22

22:                                               ; preds = %72, %21
  %23 = load i32, ptr %7, align 4
  %24 = load i32, ptr %4, align 4
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %26, label %75

26:                                               ; preds = %22
  %27 = load i32, ptr %7, align 4
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds [16 x i8], ptr %2, i64 0, i64 %28
  %30 = load i8, ptr %29, align 1
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %31, 48
  br i1 %32, label %33, label %39

33:                                               ; preds = %26
  %34 = load i32, ptr %6, align 4
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds [15 x i8], ptr %3, i64 0, i64 %35
  store i8 48, ptr %36, align 1
  %37 = load i32, ptr %6, align 4
  %38 = add nsw i32 %37, 1
  store i32 %38, ptr %6, align 4
  br label %71

39:                                               ; preds = %26
  %40 = load i32, ptr %7, align 4
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds [16 x i8], ptr %2, i64 0, i64 %41
  %43 = load i8, ptr %42, align 1
  %44 = sext i8 %43 to i32
  %45 = icmp eq i32 %44, 49
  br i1 %45, label %46, label %52

46:                                               ; preds = %39
  %47 = load i32, ptr %7, align 4
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds [15 x i8], ptr %3, i64 0, i64 %48
  store i8 49, ptr %49, align 1
  %50 = load i32, ptr %6, align 4
  %51 = add nsw i32 %50, 1
  store i32 %51, ptr %6, align 4
  br label %70

52:                                               ; preds = %39
  %53 = load i32, ptr %7, align 4
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [16 x i8], ptr %2, i64 0, i64 %54
  %56 = load i8, ptr %55, align 1
  %57 = sext i8 %56 to i32
  %58 = icmp eq i32 %57, 66
  br i1 %58, label %59, label %69

59:                                               ; preds = %52
  %60 = load i32, ptr %6, align 4
  %61 = icmp ne i32 %60, 0
  br i1 %61, label %62, label %68

62:                                               ; preds = %59
  %63 = load i32, ptr %6, align 4
  %64 = add nsw i32 %63, -1
  store i32 %64, ptr %6, align 4
  %65 = load i32, ptr %6, align 4
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds [15 x i8], ptr %3, i64 0, i64 %66
  store i8 0, ptr %67, align 1
  br label %68

68:                                               ; preds = %62, %59
  br label %69

69:                                               ; preds = %68, %52
  br label %70

70:                                               ; preds = %69, %46
  br label %71

71:                                               ; preds = %70, %33
  br label %72

72:                                               ; preds = %71
  %73 = load i32, ptr %7, align 4
  %74 = add nsw i32 %73, 1
  store i32 %74, ptr %7, align 4
  br label %22, !llvm.loop !8

75:                                               ; preds = %22
  %76 = getelementptr inbounds [15 x i8], ptr %3, i64 0, i64 0
  %77 = call i32 (ptr, ...) @printf(ptr noundef @.str, ptr noundef %76)
  ret i32 0
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #1

declare i32 @printf(ptr noundef, ...) #2

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #2 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

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
