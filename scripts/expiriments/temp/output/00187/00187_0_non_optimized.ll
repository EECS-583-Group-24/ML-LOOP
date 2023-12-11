; ModuleID = '../../files/simple/00187.c'
source_filename = "../../files/simple/00187.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [9 x i8] c"fred.txt\00", align 1
@.str.1 = private unnamed_addr constant [2 x i8] c"w\00", align 1
@.str.2 = private unnamed_addr constant [13 x i8] c"hello\0Ahello\0A\00", align 1
@.str.3 = private unnamed_addr constant [2 x i8] c"r\00", align 1
@.str.4 = private unnamed_addr constant [24 x i8] c"couldn't read fred.txt\0A\00", align 1
@.str.5 = private unnamed_addr constant [3 x i8] c"%s\00", align 1
@.str.6 = private unnamed_addr constant [13 x i8] c"ch: %d '%c'\0A\00", align 1
@.str.7 = private unnamed_addr constant [6 x i8] c"x: %s\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca ptr, align 8
  %3 = alloca [7 x i8], align 1
  %4 = alloca i32, align 4
  %5 = alloca i8, align 1
  store i32 0, ptr %1, align 4
  %6 = call noalias ptr @fopen(ptr noundef @.str, ptr noundef @.str.1)
  store ptr %6, ptr %2, align 8
  %7 = load ptr, ptr %2, align 8
  %8 = call i64 @fwrite(ptr noundef @.str.2, i64 noundef 1, i64 noundef 12, ptr noundef %7)
  %9 = load ptr, ptr %2, align 8
  %10 = call i32 @fclose(ptr noundef %9)
  %11 = call noalias ptr @fopen(ptr noundef @.str, ptr noundef @.str.3)
  store ptr %11, ptr %2, align 8
  %12 = getelementptr inbounds [7 x i8], ptr %3, i64 0, i64 0
  %13 = load ptr, ptr %2, align 8
  %14 = call i64 @fread(ptr noundef %12, i64 noundef 1, i64 noundef 6, ptr noundef %13)
  %15 = icmp ne i64 %14, 6
  br i1 %15, label %16, label %18

16:                                               ; preds = %0
  %17 = call i32 (ptr, ...) @printf(ptr noundef @.str.4)
  br label %18

18:                                               ; preds = %16, %0
  %19 = getelementptr inbounds [7 x i8], ptr %3, i64 0, i64 6
  store i8 0, ptr %19, align 1
  %20 = load ptr, ptr %2, align 8
  %21 = call i32 @fclose(ptr noundef %20)
  %22 = getelementptr inbounds [7 x i8], ptr %3, i64 0, i64 0
  %23 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, ptr noundef %22)
  %24 = call noalias ptr @fopen(ptr noundef @.str, ptr noundef @.str.3)
  store ptr %24, ptr %2, align 8
  br label %25

25:                                               ; preds = %36, %18
  %26 = load ptr, ptr %2, align 8
  %27 = call i32 @fgetc(ptr noundef %26)
  store i32 %27, ptr %4, align 4
  %28 = icmp ne i32 %27, -1
  br i1 %28, label %29, label %41

29:                                               ; preds = %25
  %30 = load i32, ptr %4, align 4
  %31 = trunc i32 %30 to i8
  store i8 %31, ptr %5, align 1
  %32 = load i8, ptr %5, align 1
  %33 = sext i8 %32 to i32
  %34 = icmp slt i32 %33, 32
  br i1 %34, label %35, label %36

35:                                               ; preds = %29
  store i8 46, ptr %5, align 1
  br label %36

36:                                               ; preds = %35, %29
  %37 = load i32, ptr %4, align 4
  %38 = load i8, ptr %5, align 1
  %39 = sext i8 %38 to i32
  %40 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef %37, i32 noundef %39)
  br label %25, !llvm.loop !6

41:                                               ; preds = %25
  %42 = load ptr, ptr %2, align 8
  %43 = call i32 @fclose(ptr noundef %42)
  %44 = call noalias ptr @fopen(ptr noundef @.str, ptr noundef @.str.3)
  store ptr %44, ptr %2, align 8
  br label %45

45:                                               ; preds = %56, %41
  %46 = load ptr, ptr %2, align 8
  %47 = call i32 @getc(ptr noundef %46)
  store i32 %47, ptr %4, align 4
  %48 = icmp ne i32 %47, -1
  br i1 %48, label %49, label %61

49:                                               ; preds = %45
  %50 = load i32, ptr %4, align 4
  %51 = trunc i32 %50 to i8
  store i8 %51, ptr %5, align 1
  %52 = load i8, ptr %5, align 1
  %53 = sext i8 %52 to i32
  %54 = icmp slt i32 %53, 32
  br i1 %54, label %55, label %56

55:                                               ; preds = %49
  store i8 46, ptr %5, align 1
  br label %56

56:                                               ; preds = %55, %49
  %57 = load i32, ptr %4, align 4
  %58 = load i8, ptr %5, align 1
  %59 = sext i8 %58 to i32
  %60 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef %57, i32 noundef %59)
  br label %45, !llvm.loop !8

61:                                               ; preds = %45
  %62 = load ptr, ptr %2, align 8
  %63 = call i32 @fclose(ptr noundef %62)
  %64 = call noalias ptr @fopen(ptr noundef @.str, ptr noundef @.str.3)
  store ptr %64, ptr %2, align 8
  br label %65

65:                                               ; preds = %70, %61
  %66 = getelementptr inbounds [7 x i8], ptr %3, i64 0, i64 0
  %67 = load ptr, ptr %2, align 8
  %68 = call ptr @fgets(ptr noundef %66, i32 noundef 7, ptr noundef %67)
  %69 = icmp ne ptr %68, null
  br i1 %69, label %70, label %73

70:                                               ; preds = %65
  %71 = getelementptr inbounds [7 x i8], ptr %3, i64 0, i64 0
  %72 = call i32 (ptr, ...) @printf(ptr noundef @.str.7, ptr noundef %71)
  br label %65, !llvm.loop !9

73:                                               ; preds = %65
  %74 = load ptr, ptr %2, align 8
  %75 = call i32 @fclose(ptr noundef %74)
  ret i32 0
}

declare noalias ptr @fopen(ptr noundef, ptr noundef) #1

declare i64 @fwrite(ptr noundef, i64 noundef, i64 noundef, ptr noundef) #1

declare i32 @fclose(ptr noundef) #1

declare i64 @fread(ptr noundef, i64 noundef, i64 noundef, ptr noundef) #1

declare i32 @printf(ptr noundef, ...) #1

declare i32 @fgetc(ptr noundef) #1

declare i32 @getc(ptr noundef) #1

declare ptr @fgets(ptr noundef, i32 noundef, ptr noundef) #1

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
!9 = distinct !{!9, !7}
