; ModuleID = '../../files/simple/00040.c'
source_filename = "../../files/simple/00040.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@t = dso_local global ptr null, align 8
@N = dso_local global i32 0, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @chk(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  store i32 %1, ptr %4, align 4
  store i32 0, ptr %5, align 4
  store i32 0, ptr %6, align 4
  br label %7

7:                                                ; preds = %143, %2
  %8 = load i32, ptr %5, align 4
  %9 = icmp slt i32 %8, 8
  br i1 %9, label %10, label %146

10:                                               ; preds = %7
  %11 = load i32, ptr %6, align 4
  %12 = load ptr, ptr @t, align 8
  %13 = load i32, ptr %3, align 4
  %14 = load i32, ptr %5, align 4
  %15 = mul nsw i32 8, %14
  %16 = add nsw i32 %13, %15
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, ptr %12, i64 %17
  %19 = load i32, ptr %18, align 4
  %20 = add nsw i32 %11, %19
  store i32 %20, ptr %6, align 4
  %21 = load i32, ptr %6, align 4
  %22 = load ptr, ptr @t, align 8
  %23 = load i32, ptr %5, align 4
  %24 = load i32, ptr %4, align 4
  %25 = mul nsw i32 8, %24
  %26 = add nsw i32 %23, %25
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, ptr %22, i64 %27
  %29 = load i32, ptr %28, align 4
  %30 = add nsw i32 %21, %29
  store i32 %30, ptr %6, align 4
  %31 = load i32, ptr %3, align 4
  %32 = load i32, ptr %5, align 4
  %33 = add nsw i32 %31, %32
  %34 = icmp slt i32 %33, 8
  %35 = zext i1 %34 to i32
  %36 = load i32, ptr %4, align 4
  %37 = load i32, ptr %5, align 4
  %38 = add nsw i32 %36, %37
  %39 = icmp slt i32 %38, 8
  %40 = zext i1 %39 to i32
  %41 = and i32 %35, %40
  %42 = icmp ne i32 %41, 0
  br i1 %42, label %43, label %58

43:                                               ; preds = %10
  %44 = load i32, ptr %6, align 4
  %45 = load ptr, ptr @t, align 8
  %46 = load i32, ptr %3, align 4
  %47 = load i32, ptr %5, align 4
  %48 = add nsw i32 %46, %47
  %49 = load i32, ptr %4, align 4
  %50 = load i32, ptr %5, align 4
  %51 = add nsw i32 %49, %50
  %52 = mul nsw i32 8, %51
  %53 = add nsw i32 %48, %52
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, ptr %45, i64 %54
  %56 = load i32, ptr %55, align 4
  %57 = add nsw i32 %44, %56
  store i32 %57, ptr %6, align 4
  br label %58

58:                                               ; preds = %43, %10
  %59 = load i32, ptr %3, align 4
  %60 = load i32, ptr %5, align 4
  %61 = add nsw i32 %59, %60
  %62 = icmp slt i32 %61, 8
  %63 = zext i1 %62 to i32
  %64 = load i32, ptr %4, align 4
  %65 = load i32, ptr %5, align 4
  %66 = sub nsw i32 %64, %65
  %67 = icmp sge i32 %66, 0
  %68 = zext i1 %67 to i32
  %69 = and i32 %63, %68
  %70 = icmp ne i32 %69, 0
  br i1 %70, label %71, label %86

71:                                               ; preds = %58
  %72 = load i32, ptr %6, align 4
  %73 = load ptr, ptr @t, align 8
  %74 = load i32, ptr %3, align 4
  %75 = load i32, ptr %5, align 4
  %76 = add nsw i32 %74, %75
  %77 = load i32, ptr %4, align 4
  %78 = load i32, ptr %5, align 4
  %79 = sub nsw i32 %77, %78
  %80 = mul nsw i32 8, %79
  %81 = add nsw i32 %76, %80
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, ptr %73, i64 %82
  %84 = load i32, ptr %83, align 4
  %85 = add nsw i32 %72, %84
  store i32 %85, ptr %6, align 4
  br label %86

86:                                               ; preds = %71, %58
  %87 = load i32, ptr %3, align 4
  %88 = load i32, ptr %5, align 4
  %89 = sub nsw i32 %87, %88
  %90 = icmp sge i32 %89, 0
  %91 = zext i1 %90 to i32
  %92 = load i32, ptr %4, align 4
  %93 = load i32, ptr %5, align 4
  %94 = add nsw i32 %92, %93
  %95 = icmp slt i32 %94, 8
  %96 = zext i1 %95 to i32
  %97 = and i32 %91, %96
  %98 = icmp ne i32 %97, 0
  br i1 %98, label %99, label %114

99:                                               ; preds = %86
  %100 = load i32, ptr %6, align 4
  %101 = load ptr, ptr @t, align 8
  %102 = load i32, ptr %3, align 4
  %103 = load i32, ptr %5, align 4
  %104 = sub nsw i32 %102, %103
  %105 = load i32, ptr %4, align 4
  %106 = load i32, ptr %5, align 4
  %107 = add nsw i32 %105, %106
  %108 = mul nsw i32 8, %107
  %109 = add nsw i32 %104, %108
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i32, ptr %101, i64 %110
  %112 = load i32, ptr %111, align 4
  %113 = add nsw i32 %100, %112
  store i32 %113, ptr %6, align 4
  br label %114

114:                                              ; preds = %99, %86
  %115 = load i32, ptr %3, align 4
  %116 = load i32, ptr %5, align 4
  %117 = sub nsw i32 %115, %116
  %118 = icmp sge i32 %117, 0
  %119 = zext i1 %118 to i32
  %120 = load i32, ptr %4, align 4
  %121 = load i32, ptr %5, align 4
  %122 = sub nsw i32 %120, %121
  %123 = icmp sge i32 %122, 0
  %124 = zext i1 %123 to i32
  %125 = and i32 %119, %124
  %126 = icmp ne i32 %125, 0
  br i1 %126, label %127, label %142

127:                                              ; preds = %114
  %128 = load i32, ptr %6, align 4
  %129 = load ptr, ptr @t, align 8
  %130 = load i32, ptr %3, align 4
  %131 = load i32, ptr %5, align 4
  %132 = sub nsw i32 %130, %131
  %133 = load i32, ptr %4, align 4
  %134 = load i32, ptr %5, align 4
  %135 = sub nsw i32 %133, %134
  %136 = mul nsw i32 8, %135
  %137 = add nsw i32 %132, %136
  %138 = sext i32 %137 to i64
  %139 = getelementptr inbounds i32, ptr %129, i64 %138
  %140 = load i32, ptr %139, align 4
  %141 = add nsw i32 %128, %140
  store i32 %141, ptr %6, align 4
  br label %142

142:                                              ; preds = %127, %114
  br label %143

143:                                              ; preds = %142
  %144 = load i32, ptr %5, align 4
  %145 = add nsw i32 %144, 1
  store i32 %145, ptr %5, align 4
  br label %7, !llvm.loop !6

146:                                              ; preds = %7
  %147 = load i32, ptr %6, align 4
  ret i32 %147
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @go(i32 noundef %0, i32 noundef %1, i32 noundef %2) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store i32 %0, ptr %5, align 4
  store i32 %1, ptr %6, align 4
  store i32 %2, ptr %7, align 4
  %8 = load i32, ptr %5, align 4
  %9 = icmp eq i32 %8, 8
  br i1 %9, label %10, label %13

10:                                               ; preds = %3
  %11 = load i32, ptr @N, align 4
  %12 = add nsw i32 %11, 1
  store i32 %12, ptr @N, align 4
  store i32 0, ptr %4, align 4
  br label %59

13:                                               ; preds = %3
  br label %14

14:                                               ; preds = %55, %13
  %15 = load i32, ptr %7, align 4
  %16 = icmp slt i32 %15, 8
  br i1 %16, label %17, label %58

17:                                               ; preds = %14
  br label %18

18:                                               ; preds = %51, %17
  %19 = load i32, ptr %6, align 4
  %20 = icmp slt i32 %19, 8
  br i1 %20, label %21, label %54

21:                                               ; preds = %18
  %22 = load i32, ptr %6, align 4
  %23 = load i32, ptr %7, align 4
  %24 = call i32 @chk(i32 noundef %22, i32 noundef %23)
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %50

26:                                               ; preds = %21
  %27 = load ptr, ptr @t, align 8
  %28 = load i32, ptr %6, align 4
  %29 = load i32, ptr %7, align 4
  %30 = mul nsw i32 8, %29
  %31 = add nsw i32 %28, %30
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, ptr %27, i64 %32
  %34 = load i32, ptr %33, align 4
  %35 = add nsw i32 %34, 1
  store i32 %35, ptr %33, align 4
  %36 = load i32, ptr %5, align 4
  %37 = add nsw i32 %36, 1
  %38 = load i32, ptr %6, align 4
  %39 = load i32, ptr %7, align 4
  %40 = call i32 @go(i32 noundef %37, i32 noundef %38, i32 noundef %39)
  %41 = load ptr, ptr @t, align 8
  %42 = load i32, ptr %6, align 4
  %43 = load i32, ptr %7, align 4
  %44 = mul nsw i32 8, %43
  %45 = add nsw i32 %42, %44
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, ptr %41, i64 %46
  %48 = load i32, ptr %47, align 4
  %49 = add nsw i32 %48, -1
  store i32 %49, ptr %47, align 4
  br label %50

50:                                               ; preds = %26, %21
  br label %51

51:                                               ; preds = %50
  %52 = load i32, ptr %6, align 4
  %53 = add nsw i32 %52, 1
  store i32 %53, ptr %6, align 4
  br label %18, !llvm.loop !8

54:                                               ; preds = %18
  store i32 0, ptr %6, align 4
  br label %55

55:                                               ; preds = %54
  %56 = load i32, ptr %7, align 4
  %57 = add nsw i32 %56, 1
  store i32 %57, ptr %7, align 4
  br label %14, !llvm.loop !9

58:                                               ; preds = %14
  store i32 0, ptr %4, align 4
  br label %59

59:                                               ; preds = %58, %10
  %60 = load i32, ptr %4, align 4
  ret i32 %60
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = call noalias ptr @calloc(i64 noundef 64, i64 noundef 4) #2
  store ptr %2, ptr @t, align 8
  %3 = call i32 @go(i32 noundef 0, i32 noundef 0, i32 noundef 0)
  %4 = load i32, ptr @N, align 4
  %5 = icmp ne i32 %4, 92
  br i1 %5, label %6, label %7

6:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %8

7:                                                ; preds = %0
  store i32 0, ptr %1, align 4
  br label %8

8:                                                ; preds = %7, %6
  %9 = load i32, ptr %1, align 4
  ret i32 %9
}

; Function Attrs: nounwind allocsize(0,1)
declare noalias ptr @calloc(i64 noundef, i64 noundef) #1

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nounwind allocsize(0,1) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nounwind allocsize(0,1) }

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
