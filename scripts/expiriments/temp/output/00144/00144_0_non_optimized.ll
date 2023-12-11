; ModuleID = '../../files/simple/00144.c'
source_filename = "../../files/simple/00144.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  %5 = load i32, ptr %2, align 4
  %6 = icmp ne i32 %5, 0
  %7 = zext i1 %6 to i64
  %8 = select i1 %6, i64 0, i64 0
  %9 = trunc i64 %8 to i32
  store i32 %9, ptr %2, align 4
  %10 = load i32, ptr %2, align 4
  %11 = icmp ne i32 %10, 0
  %12 = zext i1 %11 to i64
  %13 = select i1 %11, ptr null, ptr null
  store ptr %13, ptr %4, align 8
  %14 = load i32, ptr %2, align 4
  %15 = icmp ne i32 %14, 0
  %16 = zext i1 %15 to i64
  %17 = select i1 %15, ptr null, ptr null
  store ptr %17, ptr %4, align 8
  %18 = load i32, ptr %2, align 4
  %19 = icmp ne i32 %18, 0
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, ptr null, ptr null
  store ptr %21, ptr %4, align 8
  %22 = load i32, ptr %2, align 4
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %25

24:                                               ; preds = %0
  br label %27

25:                                               ; preds = %0
  %26 = load ptr, ptr %4, align 8
  br label %27

27:                                               ; preds = %25, %24
  %28 = phi ptr [ null, %24 ], [ %26, %25 ]
  store ptr %28, ptr %3, align 8
  %29 = load i32, ptr %2, align 4
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %33

31:                                               ; preds = %27
  %32 = load ptr, ptr %4, align 8
  br label %34

33:                                               ; preds = %27
  br label %34

34:                                               ; preds = %33, %31
  %35 = phi ptr [ %32, %31 ], [ null, %33 ]
  store ptr %35, ptr %3, align 8
  %36 = load i32, ptr %2, align 4
  %37 = icmp ne i32 %36, 0
  br i1 %37, label %38, label %40

38:                                               ; preds = %34
  %39 = load ptr, ptr %3, align 8
  br label %41

40:                                               ; preds = %34
  br label %41

41:                                               ; preds = %40, %38
  %42 = phi ptr [ %39, %38 ], [ null, %40 ]
  store ptr %42, ptr %3, align 8
  %43 = load i32, ptr %2, align 4
  %44 = icmp ne i32 %43, 0
  br i1 %44, label %45, label %46

45:                                               ; preds = %41
  br label %48

46:                                               ; preds = %41
  %47 = load ptr, ptr %3, align 8
  br label %48

48:                                               ; preds = %46, %45
  %49 = phi ptr [ null, %45 ], [ %47, %46 ]
  store ptr %49, ptr %3, align 8
  %50 = load ptr, ptr %3, align 8
  %51 = ptrtoint ptr %50 to i32
  ret i32 %51
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
