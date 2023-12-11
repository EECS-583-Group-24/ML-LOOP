; ModuleID = '../../files/simple/00157.c'
source_filename = "../../files/simple/00157.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca [10 x i32], align 16
  store i32 0, ptr %1, align 4
  store i32 1, ptr %2, align 4
  br label %4

4:                                                ; preds = %15, %0
  %5 = load i32, ptr %2, align 4
  %6 = icmp sle i32 %5, 10
  br i1 %6, label %7, label %18

7:                                                ; preds = %4
  %8 = load i32, ptr %2, align 4
  %9 = load i32, ptr %2, align 4
  %10 = mul nsw i32 %8, %9
  %11 = load i32, ptr %2, align 4
  %12 = sub nsw i32 %11, 1
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds [10 x i32], ptr %3, i64 0, i64 %13
  store i32 %10, ptr %14, align 4
  br label %15

15:                                               ; preds = %7
  %16 = load i32, ptr %2, align 4
  %17 = add nsw i32 %16, 1
  store i32 %17, ptr %2, align 4
  br label %4, !llvm.loop !6

18:                                               ; preds = %4
  store i32 0, ptr %2, align 4
  br label %19

19:                                               ; preds = %28, %18
  %20 = load i32, ptr %2, align 4
  %21 = icmp slt i32 %20, 10
  br i1 %21, label %22, label %31

22:                                               ; preds = %19
  %23 = load i32, ptr %2, align 4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [10 x i32], ptr %3, i64 0, i64 %24
  %26 = load i32, ptr %25, align 4
  %27 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %26)
  br label %28

28:                                               ; preds = %22
  %29 = load i32, ptr %2, align 4
  %30 = add nsw i32 %29, 1
  store i32 %30, ptr %2, align 4
  br label %19, !llvm.loop !8

31:                                               ; preds = %19
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
