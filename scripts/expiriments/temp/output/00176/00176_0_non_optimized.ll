; ModuleID = '../../files/simple/00176.c'
source_filename = "../../files/simple/00176.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@array = dso_local global [16 x i32] zeroinitializer, align 16
@.str = private unnamed_addr constant [4 x i8] c"%d \00", align 1
@.str.1 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @swap(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  store i32 %1, ptr %4, align 4
  %6 = load i32, ptr %3, align 4
  %7 = sext i32 %6 to i64
  %8 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %7
  %9 = load i32, ptr %8, align 4
  store i32 %9, ptr %5, align 4
  %10 = load i32, ptr %4, align 4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %11
  %13 = load i32, ptr %12, align 4
  %14 = load i32, ptr %3, align 4
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %15
  store i32 %13, ptr %16, align 4
  %17 = load i32, ptr %5, align 4
  %18 = load i32, ptr %4, align 4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %19
  store i32 %17, ptr %20, align 4
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @partition(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  store i32 %1, ptr %4, align 4
  %9 = load i32, ptr %3, align 4
  store i32 %9, ptr %5, align 4
  %10 = load i32, ptr %5, align 4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %11
  %13 = load i32, ptr %12, align 4
  store i32 %13, ptr %6, align 4
  %14 = load i32, ptr %3, align 4
  store i32 %14, ptr %7, align 4
  %15 = load i32, ptr %5, align 4
  %16 = load i32, ptr %4, align 4
  call void @swap(i32 noundef %15, i32 noundef %16)
  %17 = load i32, ptr %3, align 4
  store i32 %17, ptr %8, align 4
  br label %18

18:                                               ; preds = %35, %2
  %19 = load i32, ptr %8, align 4
  %20 = load i32, ptr %4, align 4
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %22, label %38

22:                                               ; preds = %18
  %23 = load i32, ptr %8, align 4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %24
  %26 = load i32, ptr %25, align 4
  %27 = load i32, ptr %6, align 4
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %29, label %34

29:                                               ; preds = %22
  %30 = load i32, ptr %8, align 4
  %31 = load i32, ptr %7, align 4
  call void @swap(i32 noundef %30, i32 noundef %31)
  %32 = load i32, ptr %7, align 4
  %33 = add nsw i32 %32, 1
  store i32 %33, ptr %7, align 4
  br label %34

34:                                               ; preds = %29, %22
  br label %35

35:                                               ; preds = %34
  %36 = load i32, ptr %8, align 4
  %37 = add nsw i32 %36, 1
  store i32 %37, ptr %8, align 4
  br label %18, !llvm.loop !6

38:                                               ; preds = %18
  %39 = load i32, ptr %4, align 4
  %40 = load i32, ptr %7, align 4
  call void @swap(i32 noundef %39, i32 noundef %40)
  %41 = load i32, ptr %7, align 4
  ret i32 %41
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @quicksort(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  store i32 %1, ptr %4, align 4
  %6 = load i32, ptr %3, align 4
  %7 = load i32, ptr %4, align 4
  %8 = icmp sge i32 %6, %7
  br i1 %8, label %9, label %10

9:                                                ; preds = %2
  br label %20

10:                                               ; preds = %2
  %11 = load i32, ptr %3, align 4
  %12 = load i32, ptr %4, align 4
  %13 = call i32 @partition(i32 noundef %11, i32 noundef %12)
  store i32 %13, ptr %5, align 4
  %14 = load i32, ptr %3, align 4
  %15 = load i32, ptr %5, align 4
  %16 = sub nsw i32 %15, 1
  call void @quicksort(i32 noundef %14, i32 noundef %16)
  %17 = load i32, ptr %5, align 4
  %18 = add nsw i32 %17, 1
  %19 = load i32, ptr %4, align 4
  call void @quicksort(i32 noundef %18, i32 noundef %19)
  br label %20

20:                                               ; preds = %10, %9
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 62, ptr @array, align 16
  store i32 83, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 1), align 4
  store i32 4, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 2), align 8
  store i32 89, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 3), align 4
  store i32 36, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 4), align 16
  store i32 21, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 5), align 4
  store i32 74, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 6), align 8
  store i32 37, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 7), align 4
  store i32 65, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 8), align 16
  store i32 33, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 9), align 4
  store i32 96, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 10), align 8
  store i32 38, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 11), align 4
  store i32 53, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 12), align 16
  store i32 16, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 13), align 4
  store i32 74, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 14), align 8
  store i32 55, ptr getelementptr inbounds ([16 x i32], ptr @array, i64 0, i64 15), align 4
  store i32 0, ptr %2, align 4
  br label %3

3:                                                ; preds = %12, %0
  %4 = load i32, ptr %2, align 4
  %5 = icmp slt i32 %4, 16
  br i1 %5, label %6, label %15

6:                                                ; preds = %3
  %7 = load i32, ptr %2, align 4
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %8
  %10 = load i32, ptr %9, align 4
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %10)
  br label %12

12:                                               ; preds = %6
  %13 = load i32, ptr %2, align 4
  %14 = add nsw i32 %13, 1
  store i32 %14, ptr %2, align 4
  br label %3, !llvm.loop !8

15:                                               ; preds = %3
  %16 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  call void @quicksort(i32 noundef 0, i32 noundef 15)
  store i32 0, ptr %2, align 4
  br label %17

17:                                               ; preds = %26, %15
  %18 = load i32, ptr %2, align 4
  %19 = icmp slt i32 %18, 16
  br i1 %19, label %20, label %29

20:                                               ; preds = %17
  %21 = load i32, ptr %2, align 4
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds [16 x i32], ptr @array, i64 0, i64 %22
  %24 = load i32, ptr %23, align 4
  %25 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %24)
  br label %26

26:                                               ; preds = %20
  %27 = load i32, ptr %2, align 4
  %28 = add nsw i32 %27, 1
  store i32 %28, ptr %2, align 4
  br label %17, !llvm.loop !9

29:                                               ; preds = %17
  %30 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
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
!6 = distinct !{!6, !7}
!7 = !{!"llvm.loop.mustprogress"}
!8 = distinct !{!8, !7}
!9 = distinct !{!9, !7}
