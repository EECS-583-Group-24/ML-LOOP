; ModuleID = '../../files/simple/00197.c'
source_filename = "../../files/simple/00197.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@henry.fred = internal global i32 4567, align 4
@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@fred = internal global i32 1234, align 4
@joe = internal global i32 0, align 4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @henry() #0 {
  %1 = load i32, ptr @henry.fred, align 4
  %2 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %1)
  %3 = load i32, ptr @henry.fred, align 4
  %4 = add nsw i32 %3, 1
  store i32 %4, ptr @henry.fred, align 4
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i32, ptr @fred, align 4
  %3 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %2)
  call void @henry()
  call void @henry()
  call void @henry()
  call void @henry()
  %4 = load i32, ptr @fred, align 4
  %5 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %4)
  store i32 8901, ptr @fred, align 4
  store i32 2345, ptr @joe, align 4
  %6 = load i32, ptr @fred, align 4
  %7 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %6)
  %8 = load i32, ptr @joe, align 4
  %9 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %8)
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
