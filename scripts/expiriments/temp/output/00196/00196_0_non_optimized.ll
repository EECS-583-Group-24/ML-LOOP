; ModuleID = '../../files/simple/00196.c'
source_filename = "../../files/simple/00196.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [6 x i8] c"fred\0A\00", align 1
@.str.1 = private unnamed_addr constant [5 x i8] c"joe\0A\00", align 1
@.str.2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @fred() #0 {
  %1 = call i32 (ptr, ...) @printf(ptr noundef @.str)
  ret i32 0
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @joe() #0 {
  %1 = call i32 (ptr, ...) @printf(ptr noundef @.str.1)
  ret i32 1
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = call i32 @fred()
  %3 = icmp ne i32 %2, 0
  br i1 %3, label %4, label %7

4:                                                ; preds = %0
  %5 = call i32 @joe()
  %6 = icmp ne i32 %5, 0
  br label %7

7:                                                ; preds = %4, %0
  %8 = phi i1 [ false, %0 ], [ %6, %4 ]
  %9 = zext i1 %8 to i32
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %9)
  %11 = call i32 @fred()
  %12 = icmp ne i32 %11, 0
  br i1 %12, label %16, label %13

13:                                               ; preds = %7
  %14 = call i32 @joe()
  %15 = icmp ne i32 %14, 0
  br label %16

16:                                               ; preds = %13, %7
  %17 = phi i1 [ true, %7 ], [ %15, %13 ]
  %18 = zext i1 %17 to i32
  %19 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %18)
  %20 = call i32 @joe()
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %25

22:                                               ; preds = %16
  %23 = call i32 @fred()
  %24 = icmp ne i32 %23, 0
  br label %25

25:                                               ; preds = %22, %16
  %26 = phi i1 [ false, %16 ], [ %24, %22 ]
  %27 = zext i1 %26 to i32
  %28 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %27)
  %29 = call i32 @joe()
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %34, label %31

31:                                               ; preds = %25
  %32 = call i32 @fred()
  %33 = icmp ne i32 %32, 0
  br label %34

34:                                               ; preds = %31, %25
  %35 = phi i1 [ true, %25 ], [ %33, %31 ]
  %36 = zext i1 %35 to i32
  %37 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %36)
  %38 = call i32 @fred()
  %39 = icmp ne i32 %38, 0
  br i1 %39, label %40, label %44

40:                                               ; preds = %34
  %41 = call i32 @joe()
  %42 = add nsw i32 1, %41
  %43 = icmp ne i32 %42, 0
  br label %44

44:                                               ; preds = %40, %34
  %45 = phi i1 [ false, %34 ], [ %43, %40 ]
  %46 = zext i1 %45 to i32
  %47 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %46)
  %48 = call i32 @fred()
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %54, label %50

50:                                               ; preds = %44
  %51 = call i32 @joe()
  %52 = add nsw i32 0, %51
  %53 = icmp ne i32 %52, 0
  br label %54

54:                                               ; preds = %50, %44
  %55 = phi i1 [ true, %44 ], [ %53, %50 ]
  %56 = zext i1 %55 to i32
  %57 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %56)
  %58 = call i32 @joe()
  %59 = icmp ne i32 %58, 0
  br i1 %59, label %60, label %64

60:                                               ; preds = %54
  %61 = call i32 @fred()
  %62 = add nsw i32 0, %61
  %63 = icmp ne i32 %62, 0
  br label %64

64:                                               ; preds = %60, %54
  %65 = phi i1 [ false, %54 ], [ %63, %60 ]
  %66 = zext i1 %65 to i32
  %67 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %66)
  %68 = call i32 @joe()
  %69 = icmp ne i32 %68, 0
  br i1 %69, label %74, label %70

70:                                               ; preds = %64
  %71 = call i32 @fred()
  %72 = add nsw i32 1, %71
  %73 = icmp ne i32 %72, 0
  br label %74

74:                                               ; preds = %70, %64
  %75 = phi i1 [ true, %64 ], [ %73, %70 ]
  %76 = zext i1 %75 to i32
  %77 = call i32 (ptr, ...) @printf(ptr noundef @.str.2, i32 noundef %76)
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
