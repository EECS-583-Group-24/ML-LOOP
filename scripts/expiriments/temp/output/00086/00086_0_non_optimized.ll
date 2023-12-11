; ModuleID = '../../files/simple/00086.c'
source_filename = "../../files/simple/00086.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i16, align 2
  store i32 0, ptr %1, align 4
  store i16 0, ptr %2, align 2
  %3 = load i16, ptr %2, align 2
  %4 = sext i16 %3 to i32
  %5 = add nsw i32 %4, 1
  %6 = trunc i32 %5 to i16
  store i16 %6, ptr %2, align 2
  %7 = load i16, ptr %2, align 2
  %8 = sext i16 %7 to i32
  %9 = icmp ne i32 %8, 1
  br i1 %9, label %10, label %11

10:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %12

11:                                               ; preds = %0
  store i32 0, ptr %1, align 4
  br label %12

12:                                               ; preds = %11, %10
  %13 = load i32, ptr %1, align 4
  ret i32 %13
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
