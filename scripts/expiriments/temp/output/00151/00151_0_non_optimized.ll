; ModuleID = '../../files/simple/00151.c'
source_filename = "../../files/simple/00151.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@arr = dso_local global [2 x [3 x [5 x i32]]] [[3 x [5 x i32]] [[5 x i32] [i32 0, i32 0, i32 3, i32 5, i32 0], [5 x i32] [i32 1, i32 0, i32 0, i32 6, i32 7], [5 x i32] zeroinitializer], [3 x [5 x i32]] [[5 x i32] [i32 1, i32 2, i32 0, i32 0, i32 0], [5 x i32] [i32 0, i32 0, i32 0, i32 0, i32 7], [5 x i32] zeroinitializer]], align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i32, ptr getelementptr inbounds ([3 x [5 x i32]], ptr @arr, i64 0, i64 1, i64 4), align 4
  %3 = load i32, ptr getelementptr inbounds ([2 x [3 x [5 x i32]]], ptr @arr, i64 0, i64 1, i64 1, i64 4), align 4
  %4 = icmp eq i32 %2, %3
  %5 = xor i1 %4, true
  %6 = zext i1 %5 to i32
  ret i32 %6
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
