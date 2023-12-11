; ModuleID = '../../files/simple/00047.c'
source_filename = "../../files/simple/00047.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.anon = type { i32, i32, i32 }

@s = dso_local global %struct.anon { i32 1, i32 2, i32 3 }, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i32, ptr @s, align 4
  %3 = icmp ne i32 %2, 1
  br i1 %3, label %4, label %5

4:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %14

5:                                                ; preds = %0
  %6 = load i32, ptr getelementptr inbounds (%struct.anon, ptr @s, i32 0, i32 1), align 4
  %7 = icmp ne i32 %6, 2
  br i1 %7, label %8, label %9

8:                                                ; preds = %5
  store i32 2, ptr %1, align 4
  br label %14

9:                                                ; preds = %5
  %10 = load i32, ptr getelementptr inbounds (%struct.anon, ptr @s, i32 0, i32 2), align 4
  %11 = icmp ne i32 %10, 3
  br i1 %11, label %12, label %13

12:                                               ; preds = %9
  store i32 3, ptr %1, align 4
  br label %14

13:                                               ; preds = %9
  store i32 0, ptr %1, align 4
  br label %14

14:                                               ; preds = %13, %12, %8, %4
  %15 = load i32, ptr %1, align 4
  ret i32 %15
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
