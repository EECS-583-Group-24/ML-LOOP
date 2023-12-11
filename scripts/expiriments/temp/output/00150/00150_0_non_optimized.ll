; ModuleID = '../../files/simple/00150.c'
source_filename = "../../files/simple/00150.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.S1 = type { i32, i32 }
%struct.S2 = type { %struct.S1, ptr, [2 x i32] }

@gs1 = dso_local global %struct.S1 { i32 1, i32 2 }, align 4
@.compoundliteral = internal global %struct.S2 { %struct.S1 { i32 1, i32 2 }, ptr @gs1, [2 x i32] [i32 1, i32 2] }, align 8
@s = dso_local global ptr @.compoundliteral, align 8

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load ptr, ptr @s, align 8
  %3 = getelementptr inbounds %struct.S2, ptr %2, i32 0, i32 0
  %4 = getelementptr inbounds %struct.S1, ptr %3, i32 0, i32 0
  %5 = load i32, ptr %4, align 8
  %6 = icmp ne i32 %5, 1
  br i1 %6, label %7, label %8

7:                                                ; preds = %0
  store i32 1, ptr %1, align 4
  br label %46

8:                                                ; preds = %0
  %9 = load ptr, ptr @s, align 8
  %10 = getelementptr inbounds %struct.S2, ptr %9, i32 0, i32 0
  %11 = getelementptr inbounds %struct.S1, ptr %10, i32 0, i32 1
  %12 = load i32, ptr %11, align 4
  %13 = icmp ne i32 %12, 2
  br i1 %13, label %14, label %15

14:                                               ; preds = %8
  store i32 2, ptr %1, align 4
  br label %46

15:                                               ; preds = %8
  %16 = load ptr, ptr @s, align 8
  %17 = getelementptr inbounds %struct.S2, ptr %16, i32 0, i32 1
  %18 = load ptr, ptr %17, align 8
  %19 = getelementptr inbounds %struct.S1, ptr %18, i32 0, i32 0
  %20 = load i32, ptr %19, align 4
  %21 = icmp ne i32 %20, 1
  br i1 %21, label %22, label %23

22:                                               ; preds = %15
  store i32 3, ptr %1, align 4
  br label %46

23:                                               ; preds = %15
  %24 = load ptr, ptr @s, align 8
  %25 = getelementptr inbounds %struct.S2, ptr %24, i32 0, i32 1
  %26 = load ptr, ptr %25, align 8
  %27 = getelementptr inbounds %struct.S1, ptr %26, i32 0, i32 1
  %28 = load i32, ptr %27, align 4
  %29 = icmp ne i32 %28, 2
  br i1 %29, label %30, label %31

30:                                               ; preds = %23
  store i32 4, ptr %1, align 4
  br label %46

31:                                               ; preds = %23
  %32 = load ptr, ptr @s, align 8
  %33 = getelementptr inbounds %struct.S2, ptr %32, i32 0, i32 2
  %34 = getelementptr inbounds [2 x i32], ptr %33, i64 0, i64 0
  %35 = load i32, ptr %34, align 8
  %36 = icmp ne i32 %35, 1
  br i1 %36, label %37, label %38

37:                                               ; preds = %31
  store i32 5, ptr %1, align 4
  br label %46

38:                                               ; preds = %31
  %39 = load ptr, ptr @s, align 8
  %40 = getelementptr inbounds %struct.S2, ptr %39, i32 0, i32 2
  %41 = getelementptr inbounds [2 x i32], ptr %40, i64 0, i64 1
  %42 = load i32, ptr %41, align 4
  %43 = icmp ne i32 %42, 2
  br i1 %43, label %44, label %45

44:                                               ; preds = %38
  store i32 6, ptr %1, align 4
  br label %46

45:                                               ; preds = %38
  store i32 0, ptr %1, align 4
  br label %46

46:                                               ; preds = %45, %44, %37, %30, %22, %14, %7
  %47 = load i32, ptr %1, align 4
  ret i32 %47
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
