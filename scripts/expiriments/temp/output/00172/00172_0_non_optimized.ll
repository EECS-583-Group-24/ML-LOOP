; ModuleID = '../../files/simple/00172.c'
source_filename = "../../files/simple/00172.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  store ptr %2, ptr %4, align 8
  store ptr %3, ptr %5, align 8
  store i32 12, ptr %2, align 4
  store i32 34, ptr %3, align 4
  %6 = load ptr, ptr %4, align 8
  %7 = load i32, ptr %6, align 4
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %7)
  %9 = load ptr, ptr %5, align 8
  %10 = load i32, ptr %9, align 4
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %10)
  %12 = load ptr, ptr %4, align 8
  %13 = load ptr, ptr %5, align 8
  %14 = icmp eq ptr %12, %13
  %15 = zext i1 %14 to i32
  %16 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %15)
  %17 = load ptr, ptr %4, align 8
  %18 = load ptr, ptr %5, align 8
  %19 = icmp ne ptr %17, %18
  %20 = zext i1 %19 to i32
  %21 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %20)
  %22 = load ptr, ptr %5, align 8
  store ptr %22, ptr %4, align 8
  %23 = load ptr, ptr %4, align 8
  %24 = load ptr, ptr %5, align 8
  %25 = icmp eq ptr %23, %24
  %26 = zext i1 %25 to i32
  %27 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %26)
  %28 = load ptr, ptr %4, align 8
  %29 = load ptr, ptr %5, align 8
  %30 = icmp ne ptr %28, %29
  %31 = zext i1 %30 to i32
  %32 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %31)
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
