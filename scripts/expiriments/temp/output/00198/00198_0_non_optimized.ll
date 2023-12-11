; ModuleID = '../../files/simple/00198.c'
source_filename = "../../files/simple/00198.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [6 x i8] c"a=%d\0A\00", align 1
@.str.1 = private unnamed_addr constant [6 x i8] c"b=%d\0A\00", align 1
@.str.2 = private unnamed_addr constant [6 x i8] c"c=%d\0A\00", align 1
@.str.3 = private unnamed_addr constant [6 x i8] c"e=%d\0A\00", align 1
@.str.4 = private unnamed_addr constant [6 x i8] c"f=%d\0A\00", align 1
@.str.5 = private unnamed_addr constant [6 x i8] c"g=%d\0A\00", align 1
@.str.6 = private unnamed_addr constant [6 x i8] c"i=%d\0A\00", align 1
@.str.7 = private unnamed_addr constant [6 x i8] c"j=%d\0A\00", align 1
@.str.8 = private unnamed_addr constant [6 x i8] c"k=%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %3 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 0)
  %4 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef 1)
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef 2)
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef 0)
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, i32 noundef 1)
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, i32 noundef 2)
  %9 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef 0)
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str.7, i32 noundef 1)
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str.8, i32 noundef 2)
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
