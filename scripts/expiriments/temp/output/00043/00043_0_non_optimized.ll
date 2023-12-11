; ModuleID = '../../files/simple/00043.c'
source_filename = "../../files/simple/00043.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.s = type { i32, %struct.anon }
%struct.anon = type { i32, i32 }

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca %struct.s, align 4
  store i32 0, ptr %1, align 4
  %3 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 0
  store i32 1, ptr %3, align 4
  %4 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  %5 = getelementptr inbounds %struct.anon, ptr %4, i32 0, i32 0
  store i32 2, ptr %5, align 4
  %6 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  %7 = getelementptr inbounds %struct.anon, ptr %6, i32 0, i32 1
  store i32 3, ptr %7, align 4
  %8 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 0
  %9 = load i32, ptr %8, align 4
  %10 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  %11 = getelementptr inbounds %struct.anon, ptr %10, i32 0, i32 0
  %12 = load i32, ptr %11, align 4
  %13 = add nsw i32 %9, %12
  %14 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  %15 = getelementptr inbounds %struct.anon, ptr %14, i32 0, i32 1
  %16 = load i32, ptr %15, align 4
  %17 = add nsw i32 %13, %16
  %18 = icmp ne i32 %17, 6
  br i1 %18, label %19, label %20

19:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %21

20:                                               ; preds = %0
  store i32 0, ptr %1, align 4
  br label %21

21:                                               ; preds = %20, %19
  %22 = load i32, ptr %1, align 4
  ret i32 %22
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
