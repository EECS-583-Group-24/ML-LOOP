; ModuleID = '../../files/simple/00182.c'
source_filename = "../../files/simple/00182.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@print_led.d = internal global [32 x i32] zeroinitializer, align 16
@.str = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @topline(i32 noundef %0, ptr noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  store i32 %0, ptr %3, align 4
  store ptr %1, ptr %4, align 8
  %5 = load ptr, ptr %4, align 8
  %6 = getelementptr inbounds i8, ptr %5, i32 1
  store ptr %6, ptr %4, align 8
  store i8 32, ptr %5, align 1
  %7 = load i32, ptr %3, align 4
  switch i32 %7, label %11 [
    i32 0, label %8
    i32 2, label %8
    i32 3, label %8
    i32 5, label %8
    i32 7, label %8
    i32 8, label %8
    i32 9, label %8
  ]

8:                                                ; preds = %2, %2, %2, %2, %2, %2, %2
  %9 = load ptr, ptr %4, align 8
  %10 = getelementptr inbounds i8, ptr %9, i32 1
  store ptr %10, ptr %4, align 8
  store i8 95, ptr %9, align 1
  br label %14

11:                                               ; preds = %2
  %12 = load ptr, ptr %4, align 8
  %13 = getelementptr inbounds i8, ptr %12, i32 1
  store ptr %13, ptr %4, align 8
  store i8 32, ptr %12, align 1
  br label %14

14:                                               ; preds = %11, %8
  %15 = load ptr, ptr %4, align 8
  %16 = getelementptr inbounds i8, ptr %15, i32 1
  store ptr %16, ptr %4, align 8
  store i8 32, ptr %15, align 1
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @midline(i32 noundef %0, ptr noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  store i32 %0, ptr %3, align 4
  store ptr %1, ptr %4, align 8
  %5 = load i32, ptr %3, align 4
  switch i32 %5, label %9 [
    i32 0, label %6
    i32 4, label %6
    i32 5, label %6
    i32 6, label %6
    i32 8, label %6
    i32 9, label %6
  ]

6:                                                ; preds = %2, %2, %2, %2, %2, %2
  %7 = load ptr, ptr %4, align 8
  %8 = getelementptr inbounds i8, ptr %7, i32 1
  store ptr %8, ptr %4, align 8
  store i8 124, ptr %7, align 1
  br label %12

9:                                                ; preds = %2
  %10 = load ptr, ptr %4, align 8
  %11 = getelementptr inbounds i8, ptr %10, i32 1
  store ptr %11, ptr %4, align 8
  store i8 32, ptr %10, align 1
  br label %12

12:                                               ; preds = %9, %6
  %13 = load i32, ptr %3, align 4
  switch i32 %13, label %17 [
    i32 2, label %14
    i32 3, label %14
    i32 4, label %14
    i32 5, label %14
    i32 6, label %14
    i32 8, label %14
    i32 9, label %14
  ]

14:                                               ; preds = %12, %12, %12, %12, %12, %12, %12
  %15 = load ptr, ptr %4, align 8
  %16 = getelementptr inbounds i8, ptr %15, i32 1
  store ptr %16, ptr %4, align 8
  store i8 95, ptr %15, align 1
  br label %20

17:                                               ; preds = %12
  %18 = load ptr, ptr %4, align 8
  %19 = getelementptr inbounds i8, ptr %18, i32 1
  store ptr %19, ptr %4, align 8
  store i8 32, ptr %18, align 1
  br label %20

20:                                               ; preds = %17, %14
  %21 = load i32, ptr %3, align 4
  switch i32 %21, label %25 [
    i32 0, label %22
    i32 1, label %22
    i32 2, label %22
    i32 3, label %22
    i32 4, label %22
    i32 7, label %22
    i32 8, label %22
    i32 9, label %22
  ]

22:                                               ; preds = %20, %20, %20, %20, %20, %20, %20, %20
  %23 = load ptr, ptr %4, align 8
  %24 = getelementptr inbounds i8, ptr %23, i32 1
  store ptr %24, ptr %4, align 8
  store i8 124, ptr %23, align 1
  br label %28

25:                                               ; preds = %20
  %26 = load ptr, ptr %4, align 8
  %27 = getelementptr inbounds i8, ptr %26, i32 1
  store ptr %27, ptr %4, align 8
  store i8 32, ptr %26, align 1
  br label %28

28:                                               ; preds = %25, %22
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @botline(i32 noundef %0, ptr noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  store i32 %0, ptr %3, align 4
  store ptr %1, ptr %4, align 8
  %5 = load i32, ptr %3, align 4
  switch i32 %5, label %9 [
    i32 0, label %6
    i32 2, label %6
    i32 6, label %6
    i32 8, label %6
  ]

6:                                                ; preds = %2, %2, %2, %2
  %7 = load ptr, ptr %4, align 8
  %8 = getelementptr inbounds i8, ptr %7, i32 1
  store ptr %8, ptr %4, align 8
  store i8 124, ptr %7, align 1
  br label %12

9:                                                ; preds = %2
  %10 = load ptr, ptr %4, align 8
  %11 = getelementptr inbounds i8, ptr %10, i32 1
  store ptr %11, ptr %4, align 8
  store i8 32, ptr %10, align 1
  br label %12

12:                                               ; preds = %9, %6
  %13 = load i32, ptr %3, align 4
  switch i32 %13, label %17 [
    i32 0, label %14
    i32 2, label %14
    i32 3, label %14
    i32 5, label %14
    i32 6, label %14
    i32 8, label %14
  ]

14:                                               ; preds = %12, %12, %12, %12, %12, %12
  %15 = load ptr, ptr %4, align 8
  %16 = getelementptr inbounds i8, ptr %15, i32 1
  store ptr %16, ptr %4, align 8
  store i8 95, ptr %15, align 1
  br label %20

17:                                               ; preds = %12
  %18 = load ptr, ptr %4, align 8
  %19 = getelementptr inbounds i8, ptr %18, i32 1
  store ptr %19, ptr %4, align 8
  store i8 32, ptr %18, align 1
  br label %20

20:                                               ; preds = %17, %14
  %21 = load i32, ptr %3, align 4
  switch i32 %21, label %25 [
    i32 0, label %22
    i32 1, label %22
    i32 3, label %22
    i32 4, label %22
    i32 5, label %22
    i32 6, label %22
    i32 7, label %22
    i32 8, label %22
    i32 9, label %22
  ]

22:                                               ; preds = %20, %20, %20, %20, %20, %20, %20, %20, %20
  %23 = load ptr, ptr %4, align 8
  %24 = getelementptr inbounds i8, ptr %23, i32 1
  store ptr %24, ptr %4, align 8
  store i8 124, ptr %23, align 1
  br label %28

25:                                               ; preds = %20
  %26 = load ptr, ptr %4, align 8
  %27 = getelementptr inbounds i8, ptr %26, i32 1
  store ptr %27, ptr %4, align 8
  store i8 32, ptr %26, align 1
  br label %28

28:                                               ; preds = %25, %22
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @print_led(i64 noundef %0, ptr noundef %1) #0 {
  %3 = alloca i64, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store i64 %0, ptr %3, align 8
  store ptr %1, ptr %4, align 8
  store i32 0, ptr %5, align 4
  %7 = load i64, ptr %3, align 8
  %8 = icmp eq i64 %7, 0
  %9 = zext i1 %8 to i64
  %10 = select i1 %8, i32 1, i32 0
  store i32 %10, ptr %6, align 4
  br label %11

11:                                               ; preds = %25, %2
  %12 = load i64, ptr %3, align 8
  %13 = icmp ne i64 %12, 0
  br i1 %13, label %14, label %28

14:                                               ; preds = %11
  %15 = load i64, ptr %3, align 8
  %16 = urem i64 %15, 10
  %17 = trunc i64 %16 to i32
  %18 = load i32, ptr %6, align 4
  %19 = add nsw i32 %18, 1
  store i32 %19, ptr %6, align 4
  %20 = sext i32 %18 to i64
  %21 = getelementptr inbounds [32 x i32], ptr @print_led.d, i64 0, i64 %20
  store i32 %17, ptr %21, align 4
  %22 = load i32, ptr %6, align 4
  %23 = icmp sge i32 %22, 32
  br i1 %23, label %24, label %25

24:                                               ; preds = %14
  br label %28

25:                                               ; preds = %14
  %26 = load i64, ptr %3, align 8
  %27 = udiv i64 %26, 10
  store i64 %27, ptr %3, align 8
  br label %11, !llvm.loop !6

28:                                               ; preds = %24, %11
  %29 = load i32, ptr %6, align 4
  %30 = sub nsw i32 %29, 1
  store i32 %30, ptr %5, align 4
  br label %31

31:                                               ; preds = %44, %28
  %32 = load i32, ptr %5, align 4
  %33 = icmp sge i32 %32, 0
  br i1 %33, label %34, label %47

34:                                               ; preds = %31
  %35 = load i32, ptr %5, align 4
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [32 x i32], ptr @print_led.d, i64 0, i64 %36
  %38 = load i32, ptr %37, align 4
  %39 = load ptr, ptr %4, align 8
  call void @topline(i32 noundef %38, ptr noundef %39)
  %40 = load ptr, ptr %4, align 8
  %41 = getelementptr inbounds i8, ptr %40, i64 3
  store ptr %41, ptr %4, align 8
  %42 = load ptr, ptr %4, align 8
  %43 = getelementptr inbounds i8, ptr %42, i32 1
  store ptr %43, ptr %4, align 8
  store i8 32, ptr %42, align 1
  br label %44

44:                                               ; preds = %34
  %45 = load i32, ptr %5, align 4
  %46 = add nsw i32 %45, -1
  store i32 %46, ptr %5, align 4
  br label %31, !llvm.loop !8

47:                                               ; preds = %31
  %48 = load ptr, ptr %4, align 8
  %49 = getelementptr inbounds i8, ptr %48, i32 1
  store ptr %49, ptr %4, align 8
  store i8 10, ptr %48, align 1
  %50 = load i32, ptr %6, align 4
  %51 = sub nsw i32 %50, 1
  store i32 %51, ptr %5, align 4
  br label %52

52:                                               ; preds = %65, %47
  %53 = load i32, ptr %5, align 4
  %54 = icmp sge i32 %53, 0
  br i1 %54, label %55, label %68

55:                                               ; preds = %52
  %56 = load i32, ptr %5, align 4
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds [32 x i32], ptr @print_led.d, i64 0, i64 %57
  %59 = load i32, ptr %58, align 4
  %60 = load ptr, ptr %4, align 8
  call void @midline(i32 noundef %59, ptr noundef %60)
  %61 = load ptr, ptr %4, align 8
  %62 = getelementptr inbounds i8, ptr %61, i64 3
  store ptr %62, ptr %4, align 8
  %63 = load ptr, ptr %4, align 8
  %64 = getelementptr inbounds i8, ptr %63, i32 1
  store ptr %64, ptr %4, align 8
  store i8 32, ptr %63, align 1
  br label %65

65:                                               ; preds = %55
  %66 = load i32, ptr %5, align 4
  %67 = add nsw i32 %66, -1
  store i32 %67, ptr %5, align 4
  br label %52, !llvm.loop !9

68:                                               ; preds = %52
  %69 = load ptr, ptr %4, align 8
  %70 = getelementptr inbounds i8, ptr %69, i32 1
  store ptr %70, ptr %4, align 8
  store i8 10, ptr %69, align 1
  %71 = load i32, ptr %6, align 4
  %72 = sub nsw i32 %71, 1
  store i32 %72, ptr %5, align 4
  br label %73

73:                                               ; preds = %86, %68
  %74 = load i32, ptr %5, align 4
  %75 = icmp sge i32 %74, 0
  br i1 %75, label %76, label %89

76:                                               ; preds = %73
  %77 = load i32, ptr %5, align 4
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds [32 x i32], ptr @print_led.d, i64 0, i64 %78
  %80 = load i32, ptr %79, align 4
  %81 = load ptr, ptr %4, align 8
  call void @botline(i32 noundef %80, ptr noundef %81)
  %82 = load ptr, ptr %4, align 8
  %83 = getelementptr inbounds i8, ptr %82, i64 3
  store ptr %83, ptr %4, align 8
  %84 = load ptr, ptr %4, align 8
  %85 = getelementptr inbounds i8, ptr %84, i32 1
  store ptr %85, ptr %4, align 8
  store i8 32, ptr %84, align 1
  br label %86

86:                                               ; preds = %76
  %87 = load i32, ptr %5, align 4
  %88 = add nsw i32 %87, -1
  store i32 %88, ptr %5, align 4
  br label %73, !llvm.loop !10

89:                                               ; preds = %73
  %90 = load ptr, ptr %4, align 8
  %91 = getelementptr inbounds i8, ptr %90, i32 1
  store ptr %91, ptr %4, align 8
  store i8 10, ptr %90, align 1
  %92 = load ptr, ptr %4, align 8
  store i8 0, ptr %92, align 1
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [160 x i8], align 16
  store i32 0, ptr %1, align 4
  %3 = getelementptr inbounds [160 x i8], ptr %2, i64 0, i64 0
  call void @print_led(i64 noundef 1234567, ptr noundef %3)
  %4 = getelementptr inbounds [160 x i8], ptr %2, i64 0, i64 0
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str, ptr noundef %4)
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
!10 = distinct !{!10, !7}
