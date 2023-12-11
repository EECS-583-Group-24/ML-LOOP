; ModuleID = '../../files/simple/00171.c'
source_filename = "../../files/simple/00171.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@.str.1 = private unnamed_addr constant [11 x i8] c"b is NULL\0A\00", align 1
@.str.2 = private unnamed_addr constant [15 x i8] c"b is not NULL\0A\00", align 1
@.str.3 = private unnamed_addr constant [11 x i8] c"c is NULL\0A\00", align 1
@.str.4 = private unnamed_addr constant [15 x i8] c"c is not NULL\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  store i32 42, ptr %2, align 4
  store ptr %2, ptr %3, align 8
  store ptr null, ptr %4, align 8
  %5 = load ptr, ptr %3, align 8
  %6 = load i32, ptr %5, align 4
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %6)
  %8 = load ptr, ptr %3, align 8
  %9 = icmp eq ptr %8, null
  br i1 %9, label %10, label %12

10:                                               ; preds = %0
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  br label %14

12:                                               ; preds = %0
  %13 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  br label %14

14:                                               ; preds = %12, %10
  %15 = load ptr, ptr %4, align 8
  %16 = icmp eq ptr %15, null
  br i1 %16, label %17, label %19

17:                                               ; preds = %14
  %18 = call i32 (ptr, ...) @printf(ptr noundef @.str.3)
  br label %21

19:                                               ; preds = %14
  %20 = call i32 (ptr, ...) @printf(ptr noundef @.str.4)
  br label %21

21:                                               ; preds = %19, %17
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
