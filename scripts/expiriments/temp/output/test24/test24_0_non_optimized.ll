; ModuleID = '../../files/simple/test24.c'
source_filename = "../../files/simple/test24.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@__const.main.a = private unnamed_addr constant [4 x i8] c"129\00", align 1
@.str = private unnamed_addr constant [3 x i8] c"%s\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @up_comp(ptr noundef %0, ptr noundef %1) #0 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  store ptr %0, ptr %3, align 8
  store ptr %1, ptr %4, align 8
  %5 = load ptr, ptr %3, align 8
  %6 = load i32, ptr %5, align 4
  %7 = load ptr, ptr %4, align 8
  %8 = load i32, ptr %7, align 4
  %9 = sub nsw i32 %6, %8
  ret i32 %9
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @down_comp(ptr noundef %0, ptr noundef %1) #0 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  store ptr %0, ptr %3, align 8
  store ptr %1, ptr %4, align 8
  %5 = load ptr, ptr %4, align 8
  %6 = load i32, ptr %5, align 4
  %7 = load ptr, ptr %3, align 8
  %8 = load i32, ptr %7, align 4
  %9 = sub nsw i32 %6, %8
  ret i32 %9
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @int_sort(ptr noundef %0, ptr noundef %1) #0 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  store ptr %0, ptr %3, align 8
  store ptr %1, ptr %4, align 8
  %5 = load ptr, ptr %3, align 8
  %6 = load ptr, ptr %4, align 8
  %7 = call i32 @strcmp(ptr noundef %5, ptr noundef %6) #4
  ret i32 %7
}

; Function Attrs: nounwind willreturn memory(read)
declare i32 @strcmp(ptr noundef, ptr noundef) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @count_digit(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  store i32 0, ptr %3, align 4
  br label %4

4:                                                ; preds = %7, %1
  %5 = load i32, ptr %2, align 4
  %6 = icmp ne i32 %5, 0
  br i1 %6, label %7, label %12

7:                                                ; preds = %4
  %8 = load i32, ptr %2, align 4
  %9 = sdiv i32 %8, 10
  store i32 %9, ptr %2, align 4
  %10 = load i32, ptr %3, align 4
  %11 = add nsw i32 %10, 1
  store i32 %11, ptr %3, align 4
  br label %4, !llvm.loop !6

12:                                               ; preds = %4
  %13 = load i32, ptr %3, align 4
  ret i32 %13
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @euclid(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  store i32 %1, ptr %5, align 4
  %7 = load i32, ptr %4, align 4
  %8 = load i32, ptr %5, align 4
  %9 = icmp slt i32 %7, %8
  br i1 %9, label %10, label %14

10:                                               ; preds = %2
  %11 = load i32, ptr %4, align 4
  store i32 %11, ptr %6, align 4
  %12 = load i32, ptr %5, align 4
  store i32 %12, ptr %4, align 4
  %13 = load i32, ptr %6, align 4
  store i32 %13, ptr %5, align 4
  br label %14

14:                                               ; preds = %10, %2
  %15 = load i32, ptr %5, align 4
  %16 = icmp slt i32 %15, 1
  br i1 %16, label %17, label %18

17:                                               ; preds = %14
  store i32 -1, ptr %3, align 4
  br label %31

18:                                               ; preds = %14
  %19 = load i32, ptr %4, align 4
  %20 = load i32, ptr %5, align 4
  %21 = srem i32 %19, %20
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %25

23:                                               ; preds = %18
  %24 = load i32, ptr %5, align 4
  store i32 %24, ptr %3, align 4
  br label %31

25:                                               ; preds = %18
  %26 = load i32, ptr %5, align 4
  %27 = load i32, ptr %4, align 4
  %28 = load i32, ptr %5, align 4
  %29 = srem i32 %27, %28
  %30 = call i32 @euclid(i32 noundef %26, i32 noundef %29)
  store i32 %30, ptr %3, align 4
  br label %31

31:                                               ; preds = %25, %23, %17
  %32 = load i32, ptr %3, align 4
  ret i32 %32
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [4 x i8], align 1
  %3 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  call void @llvm.memcpy.p0.p0.i64(ptr align 1 %2, ptr align 1 @__const.main.a, i64 4, i1 false)
  store i32 0, ptr %3, align 4
  br label %4

4:                                                ; preds = %31, %0
  %5 = load i32, ptr %3, align 4
  %6 = icmp slt i32 %5, 3
  br i1 %6, label %7, label %34

7:                                                ; preds = %4
  %8 = load i32, ptr %3, align 4
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds [4 x i8], ptr %2, i64 0, i64 %9
  %11 = load i8, ptr %10, align 1
  %12 = sext i8 %11 to i32
  %13 = icmp eq i32 %12, 49
  br i1 %13, label %14, label %18

14:                                               ; preds = %7
  %15 = load i32, ptr %3, align 4
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds [4 x i8], ptr %2, i64 0, i64 %16
  store i8 57, ptr %17, align 1
  br label %30

18:                                               ; preds = %7
  %19 = load i32, ptr %3, align 4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds [4 x i8], ptr %2, i64 0, i64 %20
  %22 = load i8, ptr %21, align 1
  %23 = sext i8 %22 to i32
  %24 = icmp eq i32 %23, 57
  br i1 %24, label %25, label %29

25:                                               ; preds = %18
  %26 = load i32, ptr %3, align 4
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds [4 x i8], ptr %2, i64 0, i64 %27
  store i8 49, ptr %28, align 1
  br label %29

29:                                               ; preds = %25, %18
  br label %30

30:                                               ; preds = %29, %14
  br label %31

31:                                               ; preds = %30
  %32 = load i32, ptr %3, align 4
  %33 = add nsw i32 %32, 1
  store i32 %33, ptr %3, align 4
  br label %4, !llvm.loop !8

34:                                               ; preds = %4
  %35 = getelementptr inbounds [4 x i8], ptr %2, i64 0, i64 0
  %36 = call i32 (ptr, ...) @printf(ptr noundef @.str, ptr noundef %35)
  ret i32 0
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

declare i32 @printf(ptr noundef, ...) #3

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nounwind willreturn memory(read) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #3 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind willreturn memory(read) }

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
