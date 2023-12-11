; ModuleID = '../../files/simple/00104.c'
source_filename = "../../files/simple/00104.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i64, align 8
  store i32 0, ptr %1, align 4
  store i32 0, ptr %2, align 4
  store i64 0, ptr %3, align 8
  %4 = load i32, ptr %2, align 4
  %5 = xor i32 %4, -1
  store i32 %5, ptr %2, align 4
  %6 = load i32, ptr %2, align 4
  %7 = icmp ne i32 %6, -1
  br i1 %7, label %8, label %9

8:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %17

9:                                                ; preds = %0
  %10 = load i64, ptr %3, align 8
  %11 = xor i64 %10, -1
  store i64 %11, ptr %3, align 8
  %12 = load i32, ptr %2, align 4
  %13 = sext i32 %12 to i64
  %14 = icmp ne i64 %13, -1
  br i1 %14, label %15, label %16

15:                                               ; preds = %9
  store i32 2, ptr %1, align 4
  br label %17

16:                                               ; preds = %9
  store i32 0, ptr %1, align 4
  br label %17

17:                                               ; preds = %16, %15, %8
  %18 = load i32, ptr %1, align 4
  ret i32 %18
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
