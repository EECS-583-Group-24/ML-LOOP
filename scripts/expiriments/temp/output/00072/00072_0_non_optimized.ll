; ModuleID = '../../files/simple/00072.c'
source_filename = "../../files/simple/00072.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [2 x i32], align 4
  %3 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  %4 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 0
  store ptr %4, ptr %3, align 8
  %5 = load ptr, ptr %3, align 8
  %6 = getelementptr inbounds i32, ptr %5, i64 1
  store ptr %6, ptr %3, align 8
  %7 = load ptr, ptr %3, align 8
  store i32 123, ptr %7, align 4
  %8 = getelementptr inbounds [2 x i32], ptr %2, i64 0, i64 1
  %9 = load i32, ptr %8, align 4
  %10 = icmp ne i32 %9, 123
  br i1 %10, label %11, label %12

11:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %13

12:                                               ; preds = %0
  store i32 0, ptr %1, align 4
  br label %13

13:                                               ; preds = %12, %11
  %14 = load i32, ptr %1, align 4
  ret i32 %14
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
