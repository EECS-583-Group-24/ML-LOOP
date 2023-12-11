; ModuleID = '../../files/simple/00199.c'
source_filename = "../../files/simple/00199.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [11 x i8] c"In fred()\0A\00", align 1
@.str.1 = private unnamed_addr constant [8 x i8] c"At end\0A\00", align 1
@.str.2 = private unnamed_addr constant [10 x i8] c"In joe()\0A\00", align 1
@.str.3 = private unnamed_addr constant [8 x i8] c"c = %d\0A\00", align 1
@.str.4 = private unnamed_addr constant [6 x i8] c"done\0A\00", align 1
@.str.5 = private unnamed_addr constant [12 x i8] c"In henry()\0A\00", align 1
@.str.6 = private unnamed_addr constant [8 x i8] c"b = %d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @fred() #0 {
  %1 = call i32 (ptr, ...) @printf(ptr noundef @.str)
  br label %2

2:                                                ; preds = %0
  %3 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @joe() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 5678, ptr %1, align 4
  %3 = call i32 (ptr, ...) @printf(ptr noundef @.str.2)
  store i32 1234, ptr %2, align 4
  %4 = load i32, ptr %2, align 4
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %4)
  br label %6

6:                                                ; preds = %0
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str.4)
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @henry() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = call i32 (ptr, ...) @printf(ptr noundef @.str.5)
  br label %4

4:                                                ; preds = %0
  store i32 1234, ptr %2, align 4
  %5 = load i32, ptr %2, align 4
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef %5)
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str.4)
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  call void @fred()
  call void @joe()
  call void @henry()
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
