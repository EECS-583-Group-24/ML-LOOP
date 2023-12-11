; ModuleID = '../../files/simple/00077.c'
source_filename = "../../files/simple/00077.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @foo(ptr noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca ptr, align 8
  %4 = alloca [100 x i32], align 16
  %5 = alloca ptr, align 8
  store ptr %0, ptr %3, align 8
  %6 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 0
  store i32 2000, ptr %6, align 16
  %7 = load ptr, ptr %3, align 8
  %8 = getelementptr inbounds i32, ptr %7, i64 0
  %9 = load i32, ptr %8, align 4
  %10 = icmp ne i32 %9, 1000
  br i1 %10, label %11, label %12

11:                                               ; preds = %1
  store i32 1, ptr %2, align 4
  br label %27

12:                                               ; preds = %1
  %13 = load ptr, ptr %3, align 8
  store ptr %13, ptr %5, align 8
  %14 = load ptr, ptr %5, align 8
  %15 = getelementptr inbounds i32, ptr %14, i64 0
  %16 = load i32, ptr %15, align 4
  %17 = icmp ne i32 %16, 1000
  br i1 %17, label %18, label %19

18:                                               ; preds = %12
  store i32 2, ptr %2, align 4
  br label %27

19:                                               ; preds = %12
  %20 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 0
  store ptr %20, ptr %5, align 8
  %21 = load ptr, ptr %5, align 8
  %22 = getelementptr inbounds i32, ptr %21, i64 0
  %23 = load i32, ptr %22, align 4
  %24 = icmp ne i32 %23, 2000
  br i1 %24, label %25, label %26

25:                                               ; preds = %19
  store i32 3, ptr %2, align 4
  br label %27

26:                                               ; preds = %19
  store i32 0, ptr %2, align 4
  br label %27

27:                                               ; preds = %26, %25, %18, %11
  %28 = load i32, ptr %2, align 4
  ret i32 %28
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [100 x i32], align 16
  store i32 0, ptr %1, align 4
  %3 = getelementptr inbounds [100 x i32], ptr %2, i64 0, i64 0
  store i32 1000, ptr %3, align 16
  %4 = getelementptr inbounds [100 x i32], ptr %2, i64 0, i64 0
  %5 = call i32 @foo(ptr noundef %4)
  ret i32 %5
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
