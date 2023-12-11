; ModuleID = '../../files/simple/00045.c'
source_filename = "../../files/simple/00045.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@x = dso_local global i32 5, align 4
@y = dso_local global i64 6, align 8
@p = dso_local global ptr @x, align 8

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i32, ptr @x, align 4
  %3 = icmp ne i32 %2, 5
  br i1 %3, label %4, label %5

4:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %15

5:                                                ; preds = %0
  %6 = load i64, ptr @y, align 8
  %7 = icmp ne i64 %6, 6
  br i1 %7, label %8, label %9

8:                                                ; preds = %5
  store i32 2, ptr %1, align 4
  br label %15

9:                                                ; preds = %5
  %10 = load ptr, ptr @p, align 8
  %11 = load i32, ptr %10, align 4
  %12 = icmp ne i32 %11, 5
  br i1 %12, label %13, label %14

13:                                               ; preds = %9
  store i32 3, ptr %1, align 4
  br label %15

14:                                               ; preds = %9
  store i32 0, ptr %1, align 4
  br label %15

15:                                               ; preds = %14, %13, %8, %4
  %16 = load i32, ptr %1, align 4
  ret i32 %16
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
