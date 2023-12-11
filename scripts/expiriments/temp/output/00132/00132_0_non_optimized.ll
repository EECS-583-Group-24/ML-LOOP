; ModuleID = '../../files/simple/00132.c'
source_filename = "../../files/simple/00132.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [13 x i8] c"Hello world\0A\00", align 1
@.str.1 = private unnamed_addr constant [12 x i8] c"Count = %d\0A\00", align 1
@.str.2 = private unnamed_addr constant [39 x i8] c"String 'hello', 'there' is '%s', '%s'\0A\00", align 1
@.str.3 = private unnamed_addr constant [6 x i8] c"hello\00", align 1
@.str.4 = private unnamed_addr constant [6 x i8] c"there\00", align 1
@.str.5 = private unnamed_addr constant [23 x i8] c"Character 'A' is '%c'\0A\00", align 1
@.str.6 = private unnamed_addr constant [23 x i8] c"Character 'a' is '%c'\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %3 = call i32 (ptr, ...) @printf(ptr noundef @.str)
  store i32 -5, ptr %2, align 4
  br label %4

4:                                                ; preds = %10, %0
  %5 = load i32, ptr %2, align 4
  %6 = icmp sle i32 %5, 5
  br i1 %6, label %7, label %13

7:                                                ; preds = %4
  %8 = load i32, ptr %2, align 4
  %9 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %8)
  br label %10

10:                                               ; preds = %7
  %11 = load i32, ptr %2, align 4
  %12 = add nsw i32 %11, 1
  store i32 %12, ptr %2, align 4
  br label %4, !llvm.loop !6

13:                                               ; preds = %4
  %14 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, ptr noundef @.str.3, ptr noundef @.str.4)
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, i32 noundef 65)
  %16 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef 97)
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
!6 = distinct !{!6, !7}
!7 = !{!"llvm.loop.mustprogress"}
