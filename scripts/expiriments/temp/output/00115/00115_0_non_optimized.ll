; ModuleID = '../../files/simple/00115.c'
source_filename = "../../files/simple/00115.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@s = dso_local global [4 x i8] c"abc\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i8, ptr @s, align 1
  %3 = sext i8 %2 to i32
  %4 = icmp ne i32 %3, 97
  br i1 %4, label %5, label %6

5:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %22

6:                                                ; preds = %0
  %7 = load i8, ptr getelementptr inbounds ([4 x i8], ptr @s, i64 0, i64 1), align 1
  %8 = sext i8 %7 to i32
  %9 = icmp ne i32 %8, 98
  br i1 %9, label %10, label %11

10:                                               ; preds = %6
  store i32 2, ptr %1, align 4
  br label %22

11:                                               ; preds = %6
  %12 = load i8, ptr getelementptr inbounds ([4 x i8], ptr @s, i64 0, i64 2), align 1
  %13 = sext i8 %12 to i32
  %14 = icmp ne i32 %13, 99
  br i1 %14, label %15, label %16

15:                                               ; preds = %11
  store i32 3, ptr %1, align 4
  br label %22

16:                                               ; preds = %11
  %17 = load i8, ptr getelementptr inbounds ([4 x i8], ptr @s, i64 0, i64 3), align 1
  %18 = sext i8 %17 to i32
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %21

20:                                               ; preds = %16
  store i32 4, ptr %1, align 4
  br label %22

21:                                               ; preds = %16
  store i32 0, ptr %1, align 4
  br label %22

22:                                               ; preds = %21, %20, %15, %10, %5
  %23 = load i32, ptr %1, align 4
  ret i32 %23
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
