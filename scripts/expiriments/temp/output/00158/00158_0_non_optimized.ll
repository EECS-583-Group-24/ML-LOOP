; ModuleID = '../../files/simple/00158.c'
source_filename = "../../files/simple/00158.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 0, ptr %2, align 4
  br label %3

3:                                                ; preds = %17, %0
  %4 = load i32, ptr %2, align 4
  %5 = icmp slt i32 %4, 4
  br i1 %5, label %6, label %20

6:                                                ; preds = %3
  %7 = load i32, ptr %2, align 4
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %7)
  %9 = load i32, ptr %2, align 4
  switch i32 %9, label %14 [
    i32 1, label %10
    i32 2, label %12
  ]

10:                                               ; preds = %6
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 1)
  br label %16

12:                                               ; preds = %6
  %13 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 2)
  br label %16

14:                                               ; preds = %6
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 0)
  br label %16

16:                                               ; preds = %14, %12, %10
  br label %17

17:                                               ; preds = %16
  %18 = load i32, ptr %2, align 4
  %19 = add nsw i32 %18, 1
  store i32 %19, ptr %2, align 4
  br label %3, !llvm.loop !6

20:                                               ; preds = %3
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
