; ModuleID = '../../files/simple/00175.c'
source_filename = "../../files/simple/00175.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [10 x i8] c"char: %c\0A\00", align 1
@.str.1 = private unnamed_addr constant [9 x i8] c"int: %d\0A\00", align 1
@.str.2 = private unnamed_addr constant [11 x i8] c"float: %f\0A\00", align 1
@.str.3 = private unnamed_addr constant [7 x i8] c"%d %d\0A\00", align 1
@.str.4 = private unnamed_addr constant [7 x i8] c"%f %f\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @charfunc(i8 noundef signext %0) #0 {
  %2 = alloca i8, align 1
  store i8 %0, ptr %2, align 1
  %3 = load i8, ptr %2, align 1
  %4 = sext i8 %3 to i32
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %4)
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @intfunc(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  %4 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %3)
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @floatfunc(float noundef %0) #0 {
  %2 = alloca float, align 4
  store float %0, ptr %2, align 4
  %3 = load float, ptr %2, align 4
  %4 = fpext float %3 to double
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, double noundef %4)
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i8, align 1
  %3 = alloca i8, align 1
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca float, align 4
  %7 = alloca float, align 4
  store i32 0, ptr %1, align 4
  call void @charfunc(i8 noundef signext 97)
  call void @charfunc(i8 noundef signext 98)
  call void @charfunc(i8 noundef signext 99)
  call void @intfunc(i32 noundef 97)
  call void @intfunc(i32 noundef 98)
  call void @intfunc(i32 noundef 99)
  call void @floatfunc(float noundef 9.700000e+01)
  call void @floatfunc(float noundef 9.800000e+01)
  call void @floatfunc(float noundef 9.900000e+01)
  store i8 97, ptr %2, align 1
  store i8 97, ptr %3, align 1
  %8 = load i8, ptr %2, align 1
  %9 = sext i8 %8 to i32
  %10 = load i8, ptr %3, align 1
  %11 = sext i8 %10 to i32
  %12 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %9, i32 noundef %11)
  store i32 97, ptr %4, align 4
  store i32 97, ptr %5, align 4
  %13 = load i32, ptr %4, align 4
  %14 = load i32, ptr %5, align 4
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %13, i32 noundef %14)
  store float 9.700000e+01, ptr %6, align 4
  store float 9.700000e+01, ptr %7, align 4
  %16 = load float, ptr %6, align 4
  %17 = fpext float %16 to double
  %18 = load float, ptr %7, align 4
  %19 = fpext float %18 to double
  %20 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, double noundef %17, double noundef %19)
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
