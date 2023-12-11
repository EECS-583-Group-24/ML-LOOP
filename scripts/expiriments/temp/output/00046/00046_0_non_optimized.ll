; ModuleID = '../../files/simple/00046.c'
source_filename = "../../files/simple/00046.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.s = type { i32, %union.anon, %struct.anon, %struct.anon.2 }
%union.anon = type { i32 }
%struct.anon = type { %union.anon.0 }
%union.anon.0 = type { %struct.anon.1 }
%struct.anon.1 = type { i32 }
%struct.anon.2 = type { i32 }

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca %struct.s, align 4
  store i32 0, ptr %1, align 4
  %3 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 0
  store i32 1, ptr %3, align 4
  %4 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  store i32 2, ptr %4, align 4
  %5 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 2
  %6 = getelementptr inbounds %struct.anon, ptr %5, i32 0, i32 0
  %7 = getelementptr inbounds %struct.anon.1, ptr %6, i32 0, i32 0
  store i32 3, ptr %7, align 4
  %8 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 3
  %9 = getelementptr inbounds %struct.anon.2, ptr %8, i32 0, i32 0
  store i32 4, ptr %9, align 4
  %10 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 0
  %11 = load i32, ptr %10, align 4
  %12 = icmp ne i32 %11, 1
  br i1 %12, label %13, label %14

13:                                               ; preds = %0
  store i32 1, ptr %1, align 4
  br label %37

14:                                               ; preds = %0
  %15 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  %16 = load i32, ptr %15, align 4
  %17 = icmp ne i32 %16, 2
  br i1 %17, label %18, label %23

18:                                               ; preds = %14
  %19 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 1
  %20 = load i32, ptr %19, align 4
  %21 = icmp ne i32 %20, 2
  br i1 %21, label %22, label %23

22:                                               ; preds = %18
  store i32 2, ptr %1, align 4
  br label %37

23:                                               ; preds = %18, %14
  %24 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 2
  %25 = getelementptr inbounds %struct.anon, ptr %24, i32 0, i32 0
  %26 = getelementptr inbounds %struct.anon.1, ptr %25, i32 0, i32 0
  %27 = load i32, ptr %26, align 4
  %28 = icmp ne i32 %27, 3
  br i1 %28, label %29, label %30

29:                                               ; preds = %23
  store i32 3, ptr %1, align 4
  br label %37

30:                                               ; preds = %23
  %31 = getelementptr inbounds %struct.s, ptr %2, i32 0, i32 3
  %32 = getelementptr inbounds %struct.anon.2, ptr %31, i32 0, i32 0
  %33 = load i32, ptr %32, align 4
  %34 = icmp ne i32 %33, 4
  br i1 %34, label %35, label %36

35:                                               ; preds = %30
  store i32 4, ptr %1, align 4
  br label %37

36:                                               ; preds = %30
  store i32 0, ptr %1, align 4
  br label %37

37:                                               ; preds = %36, %35, %29, %22, %13
  %38 = load i32, ptr %1, align 4
  ret i32 %38
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
