; ModuleID = '../../files/simple/simple.c'
source_filename = "../../files/simple/simple.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@stdout = external global ptr, align 8
@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [1500 x i32], align 16
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %3, align 4
  br label %5

5:                                                ; preds = %12, %0
  %6 = load i32, ptr %3, align 4
  %7 = icmp slt i32 %6, 1500
  br i1 %7, label %8, label %15

8:                                                ; preds = %5
  %9 = load i32, ptr %3, align 4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds [1500 x i32], ptr %2, i64 0, i64 %10
  store i32 0, ptr %11, align 4
  br label %12

12:                                               ; preds = %8
  %13 = load i32, ptr %3, align 4
  %14 = add nsw i32 %13, 1
  store i32 %14, ptr %3, align 4
  br label %5, !llvm.loop !6

15:                                               ; preds = %5
  store i32 100, ptr %4, align 4
  br label %16

16:                                               ; preds = %25, %15
  %17 = load i32, ptr %4, align 4
  %18 = icmp slt i32 %17, 1500
  br i1 %18, label %19, label %28

19:                                               ; preds = %16
  %20 = load i32, ptr %4, align 4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds [1500 x i32], ptr %2, i64 0, i64 %21
  %23 = load i32, ptr %22, align 4
  %24 = add nsw i32 %23, 10
  store i32 %24, ptr %22, align 4
  br label %25

25:                                               ; preds = %19
  %26 = load i32, ptr %4, align 4
  %27 = add nsw i32 %26, 1
  store i32 %27, ptr %4, align 4
  br label %16, !llvm.loop !8

28:                                               ; preds = %16
  store i32 0, ptr %3, align 4
  br label %29

29:                                               ; preds = %39, %28
  %30 = load i32, ptr %3, align 4
  %31 = icmp slt i32 %30, 1500
  br i1 %31, label %32, label %42

32:                                               ; preds = %29
  %33 = load i32, ptr %3, align 4
  %34 = load i32, ptr %3, align 4
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds [1500 x i32], ptr %2, i64 0, i64 %35
  %37 = load i32, ptr %36, align 4
  %38 = mul nsw i32 %37, %33
  store i32 %38, ptr %36, align 4
  br label %39

39:                                               ; preds = %32
  %40 = load i32, ptr %3, align 4
  %41 = add nsw i32 %40, 1
  store i32 %41, ptr %3, align 4
  br label %29, !llvm.loop !9

42:                                               ; preds = %29
  store i32 0, ptr %4, align 4
  br label %43

43:                                               ; preds = %53, %42
  %44 = load i32, ptr %4, align 4
  %45 = icmp slt i32 %44, 1500
  br i1 %45, label %46, label %56

46:                                               ; preds = %43
  %47 = load ptr, ptr @stdout, align 8
  %48 = load i32, ptr %4, align 4
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds [1500 x i32], ptr %2, i64 0, i64 %49
  %51 = load i32, ptr %50, align 4
  %52 = call i32 (ptr, ptr, ...) @fprintf(ptr noundef %47, ptr noundef @.str, i32 noundef %51)
  br label %53

53:                                               ; preds = %46
  %54 = load i32, ptr %4, align 4
  %55 = add nsw i32 %54, 1
  store i32 %55, ptr %4, align 4
  br label %43, !llvm.loop !10

56:                                               ; preds = %43
  ret i32 1
}

declare i32 @fprintf(ptr noundef, ptr noundef, ...) #1

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
