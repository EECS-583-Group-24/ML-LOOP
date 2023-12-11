; ModuleID = '../../files/simple/00007.c'
source_filename = "../../files/simple/00007.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 1, ptr %2, align 4
  store i32 10, ptr %2, align 4
  br label %3

3:                                                ; preds = %7, %0
  %4 = load i32, ptr %2, align 4
  %5 = icmp ne i32 %4, 0
  br i1 %5, label %6, label %10

6:                                                ; preds = %3
  br label %7

7:                                                ; preds = %6
  %8 = load i32, ptr %2, align 4
  %9 = sub nsw i32 %8, 1
  store i32 %9, ptr %2, align 4
  br label %3, !llvm.loop !6

10:                                               ; preds = %3
  %11 = load i32, ptr %2, align 4
  %12 = icmp ne i32 %11, 0
  br i1 %12, label %13, label %14

13:                                               ; preds = %10
  store i32 1, ptr %1, align 4
  br label %23

14:                                               ; preds = %10
  store i32 10, ptr %2, align 4
  br label %15

15:                                               ; preds = %18, %14
  %16 = load i32, ptr %2, align 4
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %21

18:                                               ; preds = %15
  %19 = load i32, ptr %2, align 4
  %20 = sub nsw i32 %19, 1
  store i32 %20, ptr %2, align 4
  br label %15, !llvm.loop !8

21:                                               ; preds = %15
  %22 = load i32, ptr %2, align 4
  store i32 %22, ptr %1, align 4
  br label %23

23:                                               ; preds = %21, %13
  %24 = load i32, ptr %1, align 4
  ret i32 %24
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
