; ModuleID = '../../files/simple/bs.c'
source_filename = "../../files/simple/bs.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.DATA = type { i32, i32 }

@data = dso_local global [15 x %struct.DATA] [%struct.DATA { i32 1, i32 100 }, %struct.DATA { i32 5, i32 200 }, %struct.DATA { i32 6, i32 300 }, %struct.DATA { i32 7, i32 700 }, %struct.DATA { i32 8, i32 900 }, %struct.DATA { i32 9, i32 250 }, %struct.DATA { i32 10, i32 400 }, %struct.DATA { i32 11, i32 600 }, %struct.DATA { i32 12, i32 800 }, %struct.DATA { i32 13, i32 1500 }, %struct.DATA { i32 14, i32 1200 }, %struct.DATA { i32 15, i32 110 }, %struct.DATA { i32 16, i32 140 }, %struct.DATA { i32 17, i32 133 }, %struct.DATA { i32 18, i32 10 }], align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = call i32 @binary_search(i32 noundef 8)
  ret i32 0
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @binary_search(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  store i32 0, ptr %6, align 4
  store i32 14, ptr %5, align 4
  store i32 -1, ptr %3, align 4
  br label %7

7:                                                ; preds = %46, %1
  %8 = load i32, ptr %6, align 4
  %9 = load i32, ptr %5, align 4
  %10 = icmp sle i32 %8, %9
  br i1 %10, label %11, label %47

11:                                               ; preds = %7
  %12 = load i32, ptr %6, align 4
  %13 = load i32, ptr %5, align 4
  %14 = add nsw i32 %12, %13
  %15 = ashr i32 %14, 1
  store i32 %15, ptr %4, align 4
  %16 = load i32, ptr %4, align 4
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [15 x %struct.DATA], ptr @data, i64 0, i64 %17
  %19 = getelementptr inbounds %struct.DATA, ptr %18, i32 0, i32 0
  %20 = load i32, ptr %19, align 8
  %21 = load i32, ptr %2, align 4
  %22 = icmp eq i32 %20, %21
  br i1 %22, label %23, label %31

23:                                               ; preds = %11
  %24 = load i32, ptr %6, align 4
  %25 = sub nsw i32 %24, 1
  store i32 %25, ptr %5, align 4
  %26 = load i32, ptr %4, align 4
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds [15 x %struct.DATA], ptr @data, i64 0, i64 %27
  %29 = getelementptr inbounds %struct.DATA, ptr %28, i32 0, i32 1
  %30 = load i32, ptr %29, align 4
  store i32 %30, ptr %3, align 4
  br label %46

31:                                               ; preds = %11
  %32 = load i32, ptr %4, align 4
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds [15 x %struct.DATA], ptr @data, i64 0, i64 %33
  %35 = getelementptr inbounds %struct.DATA, ptr %34, i32 0, i32 0
  %36 = load i32, ptr %35, align 8
  %37 = load i32, ptr %2, align 4
  %38 = icmp sgt i32 %36, %37
  br i1 %38, label %39, label %42

39:                                               ; preds = %31
  %40 = load i32, ptr %4, align 4
  %41 = sub nsw i32 %40, 1
  store i32 %41, ptr %5, align 4
  br label %45

42:                                               ; preds = %31
  %43 = load i32, ptr %4, align 4
  %44 = add nsw i32 %43, 1
  store i32 %44, ptr %6, align 4
  br label %45

45:                                               ; preds = %42, %39
  br label %46

46:                                               ; preds = %45, %23
  br label %7, !llvm.loop !6

47:                                               ; preds = %7
  %48 = load i32, ptr %3, align 4
  ret i32 %48
}

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

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
