; ModuleID = '../../files/simple/00173.c'
source_filename = "../../files/simple/00173.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [6 x i8] c"hello\00", align 1
@.str.1 = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@.str.2 = private unnamed_addr constant [8 x i8] c"%c: %d\0A\00", align 1
@.str.3 = private unnamed_addr constant [21 x i8] c"copied string is %s\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i8, align 1
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca ptr, align 8
  %7 = alloca [10 x i8], align 1
  %8 = alloca ptr, align 8
  %9 = alloca ptr, align 8
  store i32 0, ptr %1, align 4
  store i32 97, ptr %2, align 4
  %10 = load i32, ptr %2, align 4
  %11 = trunc i32 %10 to i8
  store i8 %11, ptr %3, align 1
  store ptr @.str, ptr %4, align 8
  %12 = load ptr, ptr %4, align 8
  %13 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, ptr noundef %12)
  %14 = load ptr, ptr %4, align 8
  %15 = load i8, ptr %14, align 1
  %16 = sext i8 %15 to i32
  store i32 %16, ptr %5, align 4
  %17 = load ptr, ptr %4, align 8
  store ptr %17, ptr %6, align 8
  br label %18

18:                                               ; preds = %31, %0
  %19 = load ptr, ptr %6, align 8
  %20 = load i8, ptr %19, align 1
  %21 = sext i8 %20 to i32
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %34

23:                                               ; preds = %18
  %24 = load ptr, ptr %6, align 8
  %25 = load i8, ptr %24, align 1
  %26 = sext i8 %25 to i32
  %27 = load ptr, ptr %6, align 8
  %28 = load i8, ptr %27, align 1
  %29 = sext i8 %28 to i32
  %30 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %26, i32 noundef %29)
  br label %31

31:                                               ; preds = %23
  %32 = load ptr, ptr %6, align 8
  %33 = getelementptr inbounds i8, ptr %32, i32 1
  store ptr %33, ptr %6, align 8
  br label %18, !llvm.loop !6

34:                                               ; preds = %18
  %35 = getelementptr inbounds [10 x i8], ptr %7, i64 0, i64 0
  store ptr %35, ptr %8, align 8
  %36 = load ptr, ptr %4, align 8
  store ptr %36, ptr %9, align 8
  br label %37

37:                                               ; preds = %42, %34
  %38 = load ptr, ptr %9, align 8
  %39 = load i8, ptr %38, align 1
  %40 = sext i8 %39 to i32
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %42, label %48

42:                                               ; preds = %37
  %43 = load ptr, ptr %9, align 8
  %44 = getelementptr inbounds i8, ptr %43, i32 1
  store ptr %44, ptr %9, align 8
  %45 = load i8, ptr %43, align 1
  %46 = load ptr, ptr %8, align 8
  %47 = getelementptr inbounds i8, ptr %46, i32 1
  store ptr %47, ptr %8, align 8
  store i8 %45, ptr %46, align 1
  br label %37, !llvm.loop !8

48:                                               ; preds = %37
  %49 = load ptr, ptr %8, align 8
  store i8 0, ptr %49, align 1
  %50 = getelementptr inbounds [10 x i8], ptr %7, i64 0, i64 0
  %51 = call i32 (ptr, ...) @printf(ptr noundef @.str.3, ptr noundef %50)
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
!8 = distinct !{!8, !7}
