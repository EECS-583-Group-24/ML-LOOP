; ModuleID = '../../files/simple/00163.c'
source_filename = "../../files/simple/00163.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.ziggy = type { i32, i32, i32 }

@.str = private unnamed_addr constant [8 x i8] c"a = %d\0A\00", align 1
@bolshevic = dso_local global %struct.ziggy zeroinitializer, align 4
@.str.1 = private unnamed_addr constant [18 x i8] c"bolshevic.a = %d\0A\00", align 1
@.str.2 = private unnamed_addr constant [18 x i8] c"bolshevic.b = %d\0A\00", align 1
@.str.3 = private unnamed_addr constant [18 x i8] c"bolshevic.c = %d\0A\00", align 1
@.str.4 = private unnamed_addr constant [14 x i8] c"tsar->a = %d\0A\00", align 1
@.str.5 = private unnamed_addr constant [14 x i8] c"tsar->b = %d\0A\00", align 1
@.str.6 = private unnamed_addr constant [14 x i8] c"tsar->c = %d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca ptr, align 8
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  store i32 42, ptr %2, align 4
  store ptr %2, ptr %3, align 8
  %6 = load ptr, ptr %3, align 8
  %7 = load i32, ptr %6, align 4
  %8 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %7)
  store i32 12, ptr @bolshevic, align 4
  store i32 34, ptr getelementptr inbounds (%struct.ziggy, ptr @bolshevic, i32 0, i32 1), align 4
  store i32 56, ptr getelementptr inbounds (%struct.ziggy, ptr @bolshevic, i32 0, i32 2), align 4
  %9 = load i32, ptr @bolshevic, align 4
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %9)
  %11 = load i32, ptr getelementptr inbounds (%struct.ziggy, ptr @bolshevic, i32 0, i32 1), align 4
  %12 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %11)
  %13 = load i32, ptr getelementptr inbounds (%struct.ziggy, ptr @bolshevic, i32 0, i32 2), align 4
  %14 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, i32 noundef %13)
  store ptr @bolshevic, ptr %5, align 8
  %15 = load ptr, ptr %5, align 8
  %16 = getelementptr inbounds %struct.ziggy, ptr %15, i32 0, i32 0
  %17 = load i32, ptr %16, align 4
  %18 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, i32 noundef %17)
  %19 = load ptr, ptr %5, align 8
  %20 = getelementptr inbounds %struct.ziggy, ptr %19, i32 0, i32 1
  %21 = load i32, ptr %20, align 4
  %22 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, i32 noundef %21)
  %23 = load ptr, ptr %5, align 8
  %24 = getelementptr inbounds %struct.ziggy, ptr %23, i32 0, i32 2
  %25 = load i32, ptr %24, align 4
  %26 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef %25)
  store ptr getelementptr inbounds (%struct.ziggy, ptr @bolshevic, i32 0, i32 1), ptr %3, align 8
  %27 = load ptr, ptr %3, align 8
  %28 = load i32, ptr %27, align 4
  %29 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %28)
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