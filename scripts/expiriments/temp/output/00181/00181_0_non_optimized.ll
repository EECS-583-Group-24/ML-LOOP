; ModuleID = '../../files/simple/00181.c'
source_filename = "../../files/simple/00181.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"A: \00", align 1
@.str.1 = private unnamed_addr constant [5 x i8] c" %d \00", align 1
@A = dso_local global [4 x i32] zeroinitializer, align 16
@.str.2 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1
@.str.3 = private unnamed_addr constant [4 x i8] c"B: \00", align 1
@B = dso_local global [4 x i32] zeroinitializer, align 16
@.str.4 = private unnamed_addr constant [4 x i8] c"C: \00", align 1
@C = dso_local global [4 x i32] zeroinitializer, align 16
@.str.5 = private unnamed_addr constant [44 x i8] c"------------------------------------------\0A\00", align 1
@.str.6 = private unnamed_addr constant [51 x i8] c"Solution of Tower of Hanoi Problem with %d Disks\0A\0A\00", align 1
@.str.7 = private unnamed_addr constant [17 x i8] c"Starting state:\0A\00", align 1
@.str.8 = private unnamed_addr constant [23 x i8] c"\0A\0ASubsequent states:\0A\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @PrintAll() #0 {
  %1 = alloca i32, align 4
  %2 = call i32 (ptr, ...) @printf(ptr noundef @.str)
  store i32 0, ptr %1, align 4
  br label %3

3:                                                ; preds = %12, %0
  %4 = load i32, ptr %1, align 4
  %5 = icmp slt i32 %4, 4
  br i1 %5, label %6, label %15

6:                                                ; preds = %3
  %7 = load i32, ptr %1, align 4
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds [4 x i32], ptr @A, i64 0, i64 %8
  %10 = load i32, ptr %9, align 4
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %10)
  br label %12

12:                                               ; preds = %6
  %13 = load i32, ptr %1, align 4
  %14 = add nsw i32 %13, 1
  store i32 %14, ptr %1, align 4
  br label %3, !llvm.loop !6

15:                                               ; preds = %3
  %16 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  %17 = call i32 (ptr, ...) @printf(ptr noundef @.str.3)
  store i32 0, ptr %1, align 4
  br label %18

18:                                               ; preds = %27, %15
  %19 = load i32, ptr %1, align 4
  %20 = icmp slt i32 %19, 4
  br i1 %20, label %21, label %30

21:                                               ; preds = %18
  %22 = load i32, ptr %1, align 4
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds [4 x i32], ptr @B, i64 0, i64 %23
  %25 = load i32, ptr %24, align 4
  %26 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %25)
  br label %27

27:                                               ; preds = %21
  %28 = load i32, ptr %1, align 4
  %29 = add nsw i32 %28, 1
  store i32 %29, ptr %1, align 4
  br label %18, !llvm.loop !8

30:                                               ; preds = %18
  %31 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  %32 = call i32 (ptr, ...) @printf(ptr noundef @.str.4)
  store i32 0, ptr %1, align 4
  br label %33

33:                                               ; preds = %42, %30
  %34 = load i32, ptr %1, align 4
  %35 = icmp slt i32 %34, 4
  br i1 %35, label %36, label %45

36:                                               ; preds = %33
  %37 = load i32, ptr %1, align 4
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds [4 x i32], ptr @C, i64 0, i64 %38
  %40 = load i32, ptr %39, align 4
  %41 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %40)
  br label %42

42:                                               ; preds = %36
  %43 = load i32, ptr %1, align 4
  %44 = add nsw i32 %43, 1
  store i32 %44, ptr %1, align 4
  br label %33, !llvm.loop !9

45:                                               ; preds = %33
  %46 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  %47 = call i32 (ptr, ...) @printf(ptr noundef @.str.5)
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @Move(ptr noundef %0, ptr noundef %1) #0 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store ptr %0, ptr %3, align 8
  store ptr %1, ptr %4, align 8
  store i32 0, ptr %5, align 4
  store i32 0, ptr %6, align 4
  br label %7

7:                                                ; preds = %19, %2
  %8 = load i32, ptr %5, align 4
  %9 = icmp slt i32 %8, 4
  br i1 %9, label %10, label %17

10:                                               ; preds = %7
  %11 = load ptr, ptr %3, align 8
  %12 = load i32, ptr %5, align 4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i32, ptr %11, i64 %13
  %15 = load i32, ptr %14, align 4
  %16 = icmp eq i32 %15, 0
  br label %17

17:                                               ; preds = %10, %7
  %18 = phi i1 [ false, %7 ], [ %16, %10 ]
  br i1 %18, label %19, label %22

19:                                               ; preds = %17
  %20 = load i32, ptr %5, align 4
  %21 = add nsw i32 %20, 1
  store i32 %21, ptr %5, align 4
  br label %7, !llvm.loop !10

22:                                               ; preds = %17
  br label %23

23:                                               ; preds = %35, %22
  %24 = load i32, ptr %6, align 4
  %25 = icmp slt i32 %24, 4
  br i1 %25, label %26, label %33

26:                                               ; preds = %23
  %27 = load ptr, ptr %4, align 8
  %28 = load i32, ptr %6, align 4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, ptr %27, i64 %29
  %31 = load i32, ptr %30, align 4
  %32 = icmp eq i32 %31, 0
  br label %33

33:                                               ; preds = %26, %23
  %34 = phi i1 [ false, %23 ], [ %32, %26 ]
  br i1 %34, label %35, label %38

35:                                               ; preds = %33
  %36 = load i32, ptr %6, align 4
  %37 = add nsw i32 %36, 1
  store i32 %37, ptr %6, align 4
  br label %23, !llvm.loop !11

38:                                               ; preds = %33
  %39 = load ptr, ptr %3, align 8
  %40 = load i32, ptr %5, align 4
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, ptr %39, i64 %41
  %43 = load i32, ptr %42, align 4
  %44 = load ptr, ptr %4, align 8
  %45 = load i32, ptr %6, align 4
  %46 = sub nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, ptr %44, i64 %47
  store i32 %43, ptr %48, align 4
  %49 = load ptr, ptr %3, align 8
  %50 = load i32, ptr %5, align 4
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, ptr %49, i64 %51
  store i32 0, ptr %52, align 4
  call void @PrintAll()
  %53 = load ptr, ptr %4, align 8
  %54 = load i32, ptr %6, align 4
  %55 = sub nsw i32 %54, 1
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, ptr %53, i64 %56
  %58 = load i32, ptr %57, align 4
  ret i32 %58
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @Hanoi(i32 noundef %0, ptr noundef %1, ptr noundef %2, ptr noundef %3) #0 {
  %5 = alloca i32, align 4
  %6 = alloca ptr, align 8
  %7 = alloca ptr, align 8
  %8 = alloca ptr, align 8
  %9 = alloca i32, align 4
  store i32 %0, ptr %5, align 4
  store ptr %1, ptr %6, align 8
  store ptr %2, ptr %7, align 8
  store ptr %3, ptr %8, align 8
  %10 = load i32, ptr %5, align 4
  %11 = icmp eq i32 %10, 1
  br i1 %11, label %12, label %16

12:                                               ; preds = %4
  %13 = load ptr, ptr %6, align 8
  %14 = load ptr, ptr %7, align 8
  %15 = call i32 @Move(ptr noundef %13, ptr noundef %14)
  br label %30

16:                                               ; preds = %4
  %17 = load i32, ptr %5, align 4
  %18 = sub nsw i32 %17, 1
  %19 = load ptr, ptr %6, align 8
  %20 = load ptr, ptr %8, align 8
  %21 = load ptr, ptr %7, align 8
  call void @Hanoi(i32 noundef %18, ptr noundef %19, ptr noundef %20, ptr noundef %21)
  %22 = load ptr, ptr %6, align 8
  %23 = load ptr, ptr %7, align 8
  %24 = call i32 @Move(ptr noundef %22, ptr noundef %23)
  %25 = load i32, ptr %5, align 4
  %26 = sub nsw i32 %25, 1
  %27 = load ptr, ptr %8, align 8
  %28 = load ptr, ptr %7, align 8
  %29 = load ptr, ptr %6, align 8
  call void @Hanoi(i32 noundef %26, ptr noundef %27, ptr noundef %28, ptr noundef %29)
  br label %30

30:                                               ; preds = %16, %12
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %2, align 4
  br label %3

3:                                                ; preds = %12, %0
  %4 = load i32, ptr %2, align 4
  %5 = icmp slt i32 %4, 4
  br i1 %5, label %6, label %15

6:                                                ; preds = %3
  %7 = load i32, ptr %2, align 4
  %8 = add nsw i32 %7, 1
  %9 = load i32, ptr %2, align 4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds [4 x i32], ptr @A, i64 0, i64 %10
  store i32 %8, ptr %11, align 4
  br label %12

12:                                               ; preds = %6
  %13 = load i32, ptr %2, align 4
  %14 = add nsw i32 %13, 1
  store i32 %14, ptr %2, align 4
  br label %3, !llvm.loop !12

15:                                               ; preds = %3
  store i32 0, ptr %2, align 4
  br label %16

16:                                               ; preds = %23, %15
  %17 = load i32, ptr %2, align 4
  %18 = icmp slt i32 %17, 4
  br i1 %18, label %19, label %26

19:                                               ; preds = %16
  %20 = load i32, ptr %2, align 4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds [4 x i32], ptr @B, i64 0, i64 %21
  store i32 0, ptr %22, align 4
  br label %23

23:                                               ; preds = %19
  %24 = load i32, ptr %2, align 4
  %25 = add nsw i32 %24, 1
  store i32 %25, ptr %2, align 4
  br label %16, !llvm.loop !13

26:                                               ; preds = %16
  store i32 0, ptr %2, align 4
  br label %27

27:                                               ; preds = %34, %26
  %28 = load i32, ptr %2, align 4
  %29 = icmp slt i32 %28, 4
  br i1 %29, label %30, label %37

30:                                               ; preds = %27
  %31 = load i32, ptr %2, align 4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds [4 x i32], ptr @C, i64 0, i64 %32
  store i32 0, ptr %33, align 4
  br label %34

34:                                               ; preds = %30
  %35 = load i32, ptr %2, align 4
  %36 = add nsw i32 %35, 1
  store i32 %36, ptr %2, align 4
  br label %27, !llvm.loop !14

37:                                               ; preds = %27
  %38 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef 4)
  %39 = call i32 (ptr, ...) @printf(ptr noundef @.str.7)
  call void @PrintAll()
  %40 = call i32 (ptr, ...) @printf(ptr noundef @.str.8)
  call void @Hanoi(i32 noundef 4, ptr noundef @A, ptr noundef @B, ptr noundef @C)
  ret i32 0
}

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
!11 = distinct !{!11, !7}
!12 = distinct !{!12, !7}
!13 = distinct !{!13, !7}
!14 = distinct !{!14, !7}
