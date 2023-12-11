; ModuleID = '../../files/simple/00170.c'
source_filename = "../../files/simple/00170.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.S2 = type { ptr }

@.str = private unnamed_addr constant [25 x i8] c"%d %d %d %d %d %d %d %d\0A\00", align 1
@.str.1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@.str.2 = private unnamed_addr constant [17 x i8] c"enum to int: %u\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @should_compile(ptr noundef %0) #0 {
  %2 = alloca ptr, align 8
  store ptr %0, ptr %2, align 8
  %3 = load ptr, ptr %2, align 8
  %4 = getelementptr inbounds %struct.S2, ptr %3, i32 0, i32 0
  store ptr @it_real_fn, ptr %4, align 8
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @it_real_fn() #0 {
  ret i32 1
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 1, ptr %3, align 4
  %4 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 0, i32 noundef 1, i32 noundef 2, i32 noundef 3, i32 noundef 54, i32 noundef 73, i32 noundef 74, i32 noundef 75)
  store i32 12, ptr %2, align 4
  %5 = load i32, ptr %2, align 4
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %5)
  store i32 54, ptr %2, align 4
  %7 = load i32, ptr %2, align 4
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %7)
  %9 = call i32 @deref_uintptr(ptr noundef %3)
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %9)
  ret i32 0
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define internal i32 @deref_uintptr(ptr noundef %0) #0 {
  %2 = alloca ptr, align 8
  store ptr %0, ptr %2, align 8
  %3 = load ptr, ptr %2, align 8
  %4 = load i32, ptr %3, align 4
  ret i32 %4
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
