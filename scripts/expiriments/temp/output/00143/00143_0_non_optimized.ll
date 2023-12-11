; ModuleID = '../../files/simple/00143.c'
source_filename = "../../files/simple/00143.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  %6 = alloca [39 x i16], align 16
  %7 = alloca [39 x i16], align 16
  store i32 0, ptr %1, align 4
  store i32 0, ptr %3, align 4
  br label %8

8:                                                ; preds = %20, %0
  %9 = load i32, ptr %3, align 4
  %10 = icmp slt i32 %9, 39
  br i1 %10, label %11, label %23

11:                                               ; preds = %8
  %12 = load i32, ptr %3, align 4
  %13 = trunc i32 %12 to i16
  %14 = load i32, ptr %3, align 4
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds [39 x i16], ptr %6, i64 0, i64 %15
  store i16 %13, ptr %16, align 2
  %17 = load i32, ptr %3, align 4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds [39 x i16], ptr %7, i64 0, i64 %18
  store i16 0, ptr %19, align 2
  br label %20

20:                                               ; preds = %11
  %21 = load i32, ptr %3, align 4
  %22 = add nsw i32 %21, 1
  store i32 %22, ptr %3, align 4
  br label %8, !llvm.loop !6

23:                                               ; preds = %8
  %24 = getelementptr inbounds [39 x i16], ptr %6, i64 0, i64 0
  store ptr %24, ptr %4, align 8
  %25 = getelementptr inbounds [39 x i16], ptr %7, i64 0, i64 0
  store ptr %25, ptr %5, align 8
  store i32 39, ptr %2, align 4
  %26 = load i32, ptr %2, align 4
  %27 = add nsw i32 %26, 7
  %28 = sdiv i32 %27, 8
  store i32 %28, ptr %3, align 4
  %29 = load i32, ptr %2, align 4
  %30 = srem i32 %29, 8
  switch i32 %30, label %85 [
    i32 0, label %31
    i32 7, label %38
    i32 6, label %44
    i32 5, label %50
    i32 4, label %56
    i32 3, label %62
    i32 2, label %68
    i32 1, label %74
  ]

31:                                               ; preds = %23
  br label %32

32:                                               ; preds = %80, %31
  %33 = load ptr, ptr %4, align 8
  %34 = getelementptr inbounds i16, ptr %33, i32 1
  store ptr %34, ptr %4, align 8
  %35 = load i16, ptr %33, align 2
  %36 = load ptr, ptr %5, align 8
  %37 = getelementptr inbounds i16, ptr %36, i32 1
  store ptr %37, ptr %5, align 8
  store i16 %35, ptr %36, align 2
  br label %38

38:                                               ; preds = %23, %32
  %39 = load ptr, ptr %4, align 8
  %40 = getelementptr inbounds i16, ptr %39, i32 1
  store ptr %40, ptr %4, align 8
  %41 = load i16, ptr %39, align 2
  %42 = load ptr, ptr %5, align 8
  %43 = getelementptr inbounds i16, ptr %42, i32 1
  store ptr %43, ptr %5, align 8
  store i16 %41, ptr %42, align 2
  br label %44

44:                                               ; preds = %23, %38
  %45 = load ptr, ptr %4, align 8
  %46 = getelementptr inbounds i16, ptr %45, i32 1
  store ptr %46, ptr %4, align 8
  %47 = load i16, ptr %45, align 2
  %48 = load ptr, ptr %5, align 8
  %49 = getelementptr inbounds i16, ptr %48, i32 1
  store ptr %49, ptr %5, align 8
  store i16 %47, ptr %48, align 2
  br label %50

50:                                               ; preds = %23, %44
  %51 = load ptr, ptr %4, align 8
  %52 = getelementptr inbounds i16, ptr %51, i32 1
  store ptr %52, ptr %4, align 8
  %53 = load i16, ptr %51, align 2
  %54 = load ptr, ptr %5, align 8
  %55 = getelementptr inbounds i16, ptr %54, i32 1
  store ptr %55, ptr %5, align 8
  store i16 %53, ptr %54, align 2
  br label %56

56:                                               ; preds = %23, %50
  %57 = load ptr, ptr %4, align 8
  %58 = getelementptr inbounds i16, ptr %57, i32 1
  store ptr %58, ptr %4, align 8
  %59 = load i16, ptr %57, align 2
  %60 = load ptr, ptr %5, align 8
  %61 = getelementptr inbounds i16, ptr %60, i32 1
  store ptr %61, ptr %5, align 8
  store i16 %59, ptr %60, align 2
  br label %62

62:                                               ; preds = %23, %56
  %63 = load ptr, ptr %4, align 8
  %64 = getelementptr inbounds i16, ptr %63, i32 1
  store ptr %64, ptr %4, align 8
  %65 = load i16, ptr %63, align 2
  %66 = load ptr, ptr %5, align 8
  %67 = getelementptr inbounds i16, ptr %66, i32 1
  store ptr %67, ptr %5, align 8
  store i16 %65, ptr %66, align 2
  br label %68

68:                                               ; preds = %23, %62
  %69 = load ptr, ptr %4, align 8
  %70 = getelementptr inbounds i16, ptr %69, i32 1
  store ptr %70, ptr %4, align 8
  %71 = load i16, ptr %69, align 2
  %72 = load ptr, ptr %5, align 8
  %73 = getelementptr inbounds i16, ptr %72, i32 1
  store ptr %73, ptr %5, align 8
  store i16 %71, ptr %72, align 2
  br label %74

74:                                               ; preds = %23, %68
  %75 = load ptr, ptr %4, align 8
  %76 = getelementptr inbounds i16, ptr %75, i32 1
  store ptr %76, ptr %4, align 8
  %77 = load i16, ptr %75, align 2
  %78 = load ptr, ptr %5, align 8
  %79 = getelementptr inbounds i16, ptr %78, i32 1
  store ptr %79, ptr %5, align 8
  store i16 %77, ptr %78, align 2
  br label %80

80:                                               ; preds = %74
  %81 = load i32, ptr %3, align 4
  %82 = add nsw i32 %81, -1
  store i32 %82, ptr %3, align 4
  %83 = icmp sgt i32 %82, 0
  br i1 %83, label %32, label %84, !llvm.loop !8

84:                                               ; preds = %80
  br label %85

85:                                               ; preds = %84, %23
  store i32 0, ptr %3, align 4
  br label %86

86:                                               ; preds = %103, %85
  %87 = load i32, ptr %3, align 4
  %88 = icmp slt i32 %87, 39
  br i1 %88, label %89, label %106

89:                                               ; preds = %86
  %90 = load i32, ptr %3, align 4
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds [39 x i16], ptr %6, i64 0, i64 %91
  %93 = load i16, ptr %92, align 2
  %94 = sext i16 %93 to i32
  %95 = load i32, ptr %3, align 4
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds [39 x i16], ptr %7, i64 0, i64 %96
  %98 = load i16, ptr %97, align 2
  %99 = sext i16 %98 to i32
  %100 = icmp ne i32 %94, %99
  br i1 %100, label %101, label %102

101:                                              ; preds = %89
  store i32 1, ptr %1, align 4
  br label %107

102:                                              ; preds = %89
  br label %103

103:                                              ; preds = %102
  %104 = load i32, ptr %3, align 4
  %105 = add nsw i32 %104, 1
  store i32 %105, ptr %3, align 4
  br label %86, !llvm.loop !9

106:                                              ; preds = %86
  store i32 0, ptr %1, align 4
  br label %107

107:                                              ; preds = %106, %101
  %108 = load i32, ptr %1, align 4
  ret i32 %108
}

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

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
