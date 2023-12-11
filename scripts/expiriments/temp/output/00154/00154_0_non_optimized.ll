; ModuleID = '../../files/simple/00154.c'
source_filename = "../../files/simple/00154.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.fred = type { i32, i32 }

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca %struct.fred, align 4
  %3 = alloca [2 x %struct.fred], align 16
  store i32 0, ptr %1, align 4
  %4 = getelementptr inbounds %struct.fred, ptr %2, i32 0, i32 0
  store i32 12, ptr %4, align 4
  %5 = getelementptr inbounds %struct.fred, ptr %2, i32 0, i32 1
  store i32 34, ptr %5, align 4
  %6 = getelementptr inbounds %struct.fred, ptr %2, i32 0, i32 0
  %7 = load i32, ptr %6, align 4
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %7)
  %9 = getelementptr inbounds %struct.fred, ptr %2, i32 0, i32 1
  %10 = load i32, ptr %9, align 4
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %10)
  %12 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 0
  %13 = getelementptr inbounds %struct.fred, ptr %12, i32 0, i32 0
  store i32 12, ptr %13, align 16
  %14 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 0
  %15 = getelementptr inbounds %struct.fred, ptr %14, i32 0, i32 1
  store i32 34, ptr %15, align 4
  %16 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 1
  %17 = getelementptr inbounds %struct.fred, ptr %16, i32 0, i32 0
  store i32 56, ptr %17, align 8
  %18 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 1
  %19 = getelementptr inbounds %struct.fred, ptr %18, i32 0, i32 1
  store i32 78, ptr %19, align 4
  %20 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 0
  %21 = getelementptr inbounds %struct.fred, ptr %20, i32 0, i32 0
  %22 = load i32, ptr %21, align 16
  %23 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %22)
  %24 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 0
  %25 = getelementptr inbounds %struct.fred, ptr %24, i32 0, i32 1
  %26 = load i32, ptr %25, align 4
  %27 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %26)
  %28 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 1
  %29 = getelementptr inbounds %struct.fred, ptr %28, i32 0, i32 0
  %30 = load i32, ptr %29, align 8
  %31 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %30)
  %32 = getelementptr inbounds [2 x %struct.fred], ptr %3, i64 0, i64 1
  %33 = getelementptr inbounds %struct.fred, ptr %32, i32 0, i32 1
  %34 = load i32, ptr %33, align 4
  %35 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %34)
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
