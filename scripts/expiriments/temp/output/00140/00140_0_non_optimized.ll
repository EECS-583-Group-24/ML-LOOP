; ModuleID = '../../files/simple/00140.c'
source_filename = "../../files/simple/00140.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.foo = type { i32, i32, i32, ptr, float }

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @f1(ptr noundef byval(%struct.foo) align 8 %0, ptr noundef %1, i32 noundef %2, ...) #0 {
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i32, align 4
  store ptr %1, ptr %5, align 8
  store i32 %2, ptr %6, align 4
  %7 = getelementptr inbounds %struct.foo, ptr %0, i32 0, i32 0
  %8 = load i32, ptr %7, align 8
  %9 = load ptr, ptr %5, align 8
  %10 = getelementptr inbounds %struct.foo, ptr %9, i32 0, i32 0
  %11 = load i32, ptr %10, align 8
  %12 = icmp ne i32 %8, %11
  br i1 %12, label %13, label %14

13:                                               ; preds = %3
  store i32 0, ptr %4, align 4
  br label %20

14:                                               ; preds = %3
  %15 = load ptr, ptr %5, align 8
  %16 = getelementptr inbounds %struct.foo, ptr %15, i32 0, i32 1
  %17 = load i32, ptr %16, align 4
  %18 = load i32, ptr %6, align 4
  %19 = add nsw i32 %17, %18
  store i32 %19, ptr %4, align 4
  br label %20

20:                                               ; preds = %14, %13
  %21 = load i32, ptr %4, align 4
  ret i32 %21
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca %struct.foo, align 8
  store i32 0, ptr %1, align 4
  %3 = getelementptr inbounds %struct.foo, ptr %2, i32 0, i32 1
  store i32 1, ptr %3, align 4
  %4 = getelementptr inbounds %struct.foo, ptr %2, i32 0, i32 0
  store i32 1, ptr %4, align 8
  %5 = call i32 (ptr, ptr, i32, ...) @f1(ptr noundef byval(%struct.foo) align 8 %2, ptr noundef %2, i32 noundef 2)
  %6 = call i32 (ptr, ptr, i32, ...) @f1(ptr noundef byval(%struct.foo) align 8 %2, ptr noundef %2, i32 noundef 2, i32 noundef 1, ptr noundef byval(%struct.foo) align 8 %2, ptr noundef %2)
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
