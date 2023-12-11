; ModuleID = '../../files/simple/00169.c'
source_filename = "../../files/simple/00169.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [10 x i8] c"%d %d %d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %2, align 4
  br label %5

5:                                                ; preds = %29, %0
  %6 = load i32, ptr %2, align 4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %32

8:                                                ; preds = %5
  store i32 0, ptr %3, align 4
  br label %9

9:                                                ; preds = %25, %8
  %10 = load i32, ptr %3, align 4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %28

12:                                               ; preds = %9
  store i32 0, ptr %4, align 4
  br label %13

13:                                               ; preds = %21, %12
  %14 = load i32, ptr %4, align 4
  %15 = icmp slt i32 %14, 3
  br i1 %15, label %16, label %24

16:                                               ; preds = %13
  %17 = load i32, ptr %2, align 4
  %18 = load i32, ptr %3, align 4
  %19 = load i32, ptr %4, align 4
  %20 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %17, i32 noundef %18, i32 noundef %19)
  br label %21

21:                                               ; preds = %16
  %22 = load i32, ptr %4, align 4
  %23 = add nsw i32 %22, 1
  store i32 %23, ptr %4, align 4
  br label %13, !llvm.loop !6

24:                                               ; preds = %13
  br label %25

25:                                               ; preds = %24
  %26 = load i32, ptr %3, align 4
  %27 = add nsw i32 %26, 1
  store i32 %27, ptr %3, align 4
  br label %9, !llvm.loop !8

28:                                               ; preds = %9
  br label %29

29:                                               ; preds = %28
  %30 = load i32, ptr %2, align 4
  %31 = add nsw i32 %30, 1
  store i32 %31, ptr %2, align 4
  br label %5, !llvm.loop !9

32:                                               ; preds = %5
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
