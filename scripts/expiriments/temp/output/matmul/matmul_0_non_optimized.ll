; ModuleID = '../../files/simple/matmul.c'
source_filename = "../../files/simple/matmul.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@a = dso_local global [6 x [6 x i32]] [[6 x i32] zeroinitializer, [6 x i32] [i32 0, i32 0, i32 9, i32 4, i32 7, i32 9], [6 x i32] [i32 0, i32 12, i32 14, i32 15, i32 16, i32 11], [6 x i32] [i32 0, i32 2, i32 3, i32 4, i32 5, i32 6], [6 x i32] [i32 0, i32 4, i32 3, i32 2, i32 1, i32 2], [6 x i32] [i32 0, i32 2, i32 7, i32 6, i32 4, i32 9]], align 16
@b = dso_local global [6 x [6 x i32]] [[6 x i32] zeroinitializer, [6 x i32] [i32 0, i32 0, i32 9, i32 4, i32 7, i32 9], [6 x i32] [i32 0, i32 12, i32 14, i32 15, i32 16, i32 11], [6 x i32] [i32 0, i32 2, i32 3, i32 4, i32 5, i32 6], [6 x i32] [i32 0, i32 4, i32 3, i32 2, i32 1, i32 2], [6 x i32] [i32 0, i32 2, i32 7, i32 6, i32 4, i32 9]], align 16
@c = dso_local global [6 x [6 x i32]] zeroinitializer, align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @matmul(ptr noundef %0, ptr noundef %1, ptr noundef %2) #0 {
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  %6 = alloca ptr, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  store ptr %1, ptr %5, align 8
  store ptr %2, ptr %6, align 8
  br label %10

10:                                               ; preds = %3
  store i32 1, ptr %7, align 4
  br label %11

11:                                               ; preds = %31, %10
  %12 = load i32, ptr %7, align 4
  %13 = icmp sle i32 %12, 5
  br i1 %13, label %14, label %34

14:                                               ; preds = %11
  br label %15

15:                                               ; preds = %14
  store i32 1, ptr %8, align 4
  br label %16

16:                                               ; preds = %27, %15
  %17 = load i32, ptr %8, align 4
  %18 = icmp sle i32 %17, 5
  br i1 %18, label %19, label %30

19:                                               ; preds = %16
  %20 = load ptr, ptr %6, align 8
  %21 = load i32, ptr %7, align 4
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds [6 x i32], ptr %20, i64 %22
  %24 = load i32, ptr %8, align 4
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [6 x i32], ptr %23, i64 0, i64 %25
  store i32 0, ptr %26, align 4
  br label %27

27:                                               ; preds = %19
  %28 = load i32, ptr %8, align 4
  %29 = add nsw i32 %28, 1
  store i32 %29, ptr %8, align 4
  br label %16, !llvm.loop !6

30:                                               ; preds = %16
  br label %31

31:                                               ; preds = %30
  %32 = load i32, ptr %7, align 4
  %33 = add nsw i32 %32, 1
  store i32 %33, ptr %7, align 4
  br label %11, !llvm.loop !8

34:                                               ; preds = %11
  br label %35

35:                                               ; preds = %34
  store i32 1, ptr %7, align 4
  br label %36

36:                                               ; preds = %84, %35
  %37 = load i32, ptr %7, align 4
  %38 = icmp sle i32 %37, 5
  br i1 %38, label %39, label %87

39:                                               ; preds = %36
  br label %40

40:                                               ; preds = %39
  store i32 1, ptr %8, align 4
  br label %41

41:                                               ; preds = %80, %40
  %42 = load i32, ptr %8, align 4
  %43 = icmp sle i32 %42, 5
  br i1 %43, label %44, label %83

44:                                               ; preds = %41
  br label %45

45:                                               ; preds = %44
  store i32 1, ptr %9, align 4
  br label %46

46:                                               ; preds = %76, %45
  %47 = load i32, ptr %9, align 4
  %48 = icmp sle i32 %47, 5
  br i1 %48, label %49, label %79

49:                                               ; preds = %46
  %50 = load ptr, ptr %4, align 8
  %51 = load i32, ptr %7, align 4
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [6 x i32], ptr %50, i64 %52
  %54 = load i32, ptr %9, align 4
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds [6 x i32], ptr %53, i64 0, i64 %55
  %57 = load i32, ptr %56, align 4
  %58 = load ptr, ptr %5, align 8
  %59 = load i32, ptr %9, align 4
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds [6 x i32], ptr %58, i64 %60
  %62 = load i32, ptr %8, align 4
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds [6 x i32], ptr %61, i64 0, i64 %63
  %65 = load i32, ptr %64, align 4
  %66 = mul nsw i32 %57, %65
  %67 = load ptr, ptr %6, align 8
  %68 = load i32, ptr %7, align 4
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds [6 x i32], ptr %67, i64 %69
  %71 = load i32, ptr %8, align 4
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds [6 x i32], ptr %70, i64 0, i64 %72
  %74 = load i32, ptr %73, align 4
  %75 = add nsw i32 %74, %66
  store i32 %75, ptr %73, align 4
  br label %76

76:                                               ; preds = %49
  %77 = load i32, ptr %9, align 4
  %78 = add nsw i32 %77, 1
  store i32 %78, ptr %9, align 4
  br label %46, !llvm.loop !9

79:                                               ; preds = %46
  br label %80

80:                                               ; preds = %79
  %81 = load i32, ptr %8, align 4
  %82 = add nsw i32 %81, 1
  store i32 %82, ptr %8, align 4
  br label %41, !llvm.loop !10

83:                                               ; preds = %41
  br label %84

84:                                               ; preds = %83
  %85 = load i32, ptr %7, align 4
  %86 = add nsw i32 %85, 1
  store i32 %86, ptr %7, align 4
  br label %36, !llvm.loop !11

87:                                               ; preds = %36
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  call void @matmul(ptr noundef @a, ptr noundef @b, ptr noundef @c)
  ret i32 0
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
!8 = distinct !{!8, !7}
!9 = distinct !{!9, !7}
!10 = distinct !{!10, !7}
!11 = distinct !{!11, !7}
