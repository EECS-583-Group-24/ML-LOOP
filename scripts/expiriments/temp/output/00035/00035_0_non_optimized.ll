; ModuleID = '../../files/simple/00035.c'
source_filename = "../../files/simple/00035.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 4, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = icmp ne i32 %3, 0
  %5 = xor i1 %4, true
  %6 = zext i1 %5 to i32
  %7 = icmp ne i32 %6, 0
  br i1 %7, label %8, label %9

8:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %23

9:                                                ; preds = %0
  %10 = load i32, ptr %2, align 4
  %11 = icmp ne i32 %10, 0
  %12 = xor i1 %11, true
  %13 = xor i1 %12, true
  %14 = zext i1 %13 to i32
  %15 = icmp ne i32 %14, 1
  br i1 %15, label %16, label %17

16:                                               ; preds = %9
  store i32 1, ptr %1, align 4
  br label %23

17:                                               ; preds = %9
  %18 = load i32, ptr %2, align 4
  %19 = sub nsw i32 0, %18
  %20 = icmp ne i32 %19, -4
  br i1 %20, label %21, label %22

21:                                               ; preds = %17
  store i32 1, ptr %1, align 4
  br label %23

22:                                               ; preds = %17
  store i32 0, ptr %1, align 4
  br label %23

23:                                               ; preds = %22, %21, %16, %8
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
