; ModuleID = '../../files/simple/00126.c'
source_filename = "../../files/simple/00126.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 3, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = icmp ne i32 %3, 0
  %5 = xor i1 %4, true
  %6 = zext i1 %5 to i32
  store i32 %6, ptr %2, align 4
  %7 = load i32, ptr %2, align 4
  %8 = icmp ne i32 %7, 0
  %9 = xor i1 %8, true
  %10 = zext i1 %9 to i32
  store i32 %10, ptr %2, align 4
  %11 = load i32, ptr %2, align 4
  %12 = xor i32 %11, -1
  store i32 %12, ptr %2, align 4
  %13 = load i32, ptr %2, align 4
  %14 = sub nsw i32 0, %13
  store i32 %14, ptr %2, align 4
  %15 = load i32, ptr %2, align 4
  %16 = icmp ne i32 %15, 2
  br i1 %16, label %17, label %18

17:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %19

18:                                               ; preds = %0
  store i32 0, ptr %1, align 4
  br label %19

19:                                               ; preds = %18, %17
  %20 = load i32, ptr %1, align 4
  ret i32 %20
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
