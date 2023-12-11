; ModuleID = '../../files/simple/train2.c'
source_filename = "../../files/simple/train2.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @f(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = icmp eq i32 %3, 1
  br i1 %4, label %5, label %6

5:                                                ; preds = %1
  store i32 1, ptr %2, align 4
  br label %7

6:                                                ; preds = %1
  store i32 9, ptr %2, align 4
  br label %7

7:                                                ; preds = %6, %5
  %8 = phi i32 [ 1, %5 ], [ 9, %6 ]
  %9 = load i32, ptr %2, align 4
  ret i32 %9
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 583, ptr %2, align 4
  %6 = load i32, ptr %2, align 4
  %7 = sdiv i32 %6, 100
  store i32 %7, ptr %3, align 4
  %8 = load i32, ptr %2, align 4
  %9 = srem i32 %8, 10
  store i32 %9, ptr %5, align 4
  %10 = load i32, ptr %2, align 4
  %11 = load i32, ptr %3, align 4
  %12 = mul nsw i32 %11, 100
  %13 = sub nsw i32 %10, %12
  %14 = load i32, ptr %5, align 4
  %15 = sub nsw i32 %13, %14
  store i32 %15, ptr %4, align 4
  %16 = load i32, ptr %3, align 4
  %17 = call i32 @f(i32 noundef %16)
  %18 = mul nsw i32 %17, 100
  %19 = load i32, ptr %4, align 4
  %20 = call i32 @f(i32 noundef %19)
  %21 = mul nsw i32 %20, 10
  %22 = add nsw i32 %18, %21
  %23 = load i32, ptr %5, align 4
  %24 = call i32 @f(i32 noundef %23)
  %25 = add nsw i32 %22, %24
  %26 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %25)
  ret i32 0
}

declare i32 @printf(ptr noundef, ...) #1

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!llvm.ident = !{!5}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 2}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{!"clang version 16.0.6 (https://github.com/llvm/llvm-project.git 7cbf1a2591520c2491aa35339f227775f4d3adf6)"}
