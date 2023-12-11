; ModuleID = '../../files/simple/00193.c'
source_filename = "../../files/simple/00193.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [3 x i8] c"1\0A\00", align 1
@.str.1 = private unnamed_addr constant [3 x i8] c"2\0A\00", align 1
@.str.2 = private unnamed_addr constant [3 x i8] c"3\0A\00", align 1
@.str.3 = private unnamed_addr constant [5 x i8] c"out\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @fred(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  switch i32 %3, label %10 [
    i32 1, label %4
    i32 2, label %6
    i32 3, label %8
  ]

4:                                                ; preds = %1
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str)
  br label %12

6:                                                ; preds = %1
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  br label %10

8:                                                ; preds = %1
  %9 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  br label %12

10:                                               ; preds = %1, %6
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str.3)
  br label %12

12:                                               ; preds = %10, %8, %4
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  call void @fred(i32 noundef 1)
  call void @fred(i32 noundef 2)
  call void @fred(i32 noundef 3)
  ret i32 0
}

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
