; ModuleID = '../../files/simple/00164.c'
source_filename = "../../files/simple/00164.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@.str.1 = private unnamed_addr constant [8 x i8] c"%d, %d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 12, ptr %2, align 4
  store i32 34, ptr %3, align 4
  store i32 56, ptr %4, align 4
  store i32 78, ptr %5, align 4
  store i32 0, ptr %6, align 4
  store i32 1, ptr %7, align 4
  %10 = load i32, ptr %4, align 4
  %11 = load i32, ptr %5, align 4
  %12 = add nsw i32 %10, %11
  %13 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %12)
  %14 = load i32, ptr %4, align 4
  %15 = load i32, ptr %5, align 4
  %16 = add nsw i32 %14, %15
  store i32 %16, ptr %9, align 4
  %17 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %16)
  %18 = load i32, ptr %6, align 4
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %28, label %20

20:                                               ; preds = %0
  %21 = load i32, ptr %6, align 4
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %26

23:                                               ; preds = %20
  %24 = load i32, ptr %7, align 4
  %25 = icmp ne i32 %24, 0
  br label %26

26:                                               ; preds = %23, %20
  %27 = phi i1 [ false, %20 ], [ %25, %23 ]
  br label %28

28:                                               ; preds = %26, %0
  %29 = phi i1 [ true, %0 ], [ %27, %26 ]
  %30 = zext i1 %29 to i32
  %31 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %30)
  %32 = load i32, ptr %6, align 4
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %42, label %34

34:                                               ; preds = %28
  %35 = load i32, ptr %7, align 4
  %36 = icmp ne i32 %35, 0
  br i1 %36, label %37, label %40

37:                                               ; preds = %34
  %38 = load i32, ptr %7, align 4
  %39 = icmp ne i32 %38, 0
  br label %40

40:                                               ; preds = %37, %34
  %41 = phi i1 [ false, %34 ], [ %39, %37 ]
  br label %42

42:                                               ; preds = %40, %28
  %43 = phi i1 [ true, %28 ], [ %41, %40 ]
  %44 = zext i1 %43 to i32
  %45 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %44)
  %46 = load i32, ptr %6, align 4
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %48, label %51

48:                                               ; preds = %42
  %49 = load i32, ptr %6, align 4
  %50 = icmp ne i32 %49, 0
  br i1 %50, label %54, label %51

51:                                               ; preds = %48, %42
  %52 = load i32, ptr %7, align 4
  %53 = icmp ne i32 %52, 0
  br label %54

54:                                               ; preds = %51, %48
  %55 = phi i1 [ true, %48 ], [ %53, %51 ]
  %56 = zext i1 %55 to i32
  %57 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %56)
  %58 = load i32, ptr %6, align 4
  %59 = icmp ne i32 %58, 0
  br i1 %59, label %60, label %63

60:                                               ; preds = %54
  %61 = load i32, ptr %7, align 4
  %62 = icmp ne i32 %61, 0
  br i1 %62, label %66, label %63

63:                                               ; preds = %60, %54
  %64 = load i32, ptr %7, align 4
  %65 = icmp ne i32 %64, 0
  br label %66

66:                                               ; preds = %63, %60
  %67 = phi i1 [ true, %60 ], [ %65, %63 ]
  %68 = zext i1 %67 to i32
  %69 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %68)
  %70 = load i32, ptr %2, align 4
  %71 = icmp ne i32 %70, 0
  br i1 %71, label %72, label %77

72:                                               ; preds = %66
  %73 = load i32, ptr %7, align 4
  %74 = load i32, ptr %7, align 4
  %75 = or i32 %73, %74
  %76 = icmp ne i32 %75, 0
  br label %77

77:                                               ; preds = %72, %66
  %78 = phi i1 [ false, %66 ], [ %76, %72 ]
  %79 = zext i1 %78 to i32
  %80 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %79)
  %81 = load i32, ptr %2, align 4
  %82 = load i32, ptr %3, align 4
  %83 = load i32, ptr %4, align 4
  %84 = load i32, ptr %5, align 4
  %85 = and i32 %83, %84
  %86 = xor i32 %82, %85
  %87 = or i32 %81, %86
  %88 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %87)
  %89 = load i32, ptr %2, align 4
  %90 = load i32, ptr %2, align 4
  %91 = icmp eq i32 %89, %90
  %92 = zext i1 %91 to i32
  %93 = load i32, ptr %2, align 4
  %94 = load i32, ptr %3, align 4
  %95 = icmp eq i32 %93, %94
  %96 = zext i1 %95 to i32
  %97 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %92, i32 noundef %96)
  %98 = load i32, ptr %2, align 4
  %99 = load i32, ptr %2, align 4
  %100 = icmp ne i32 %98, %99
  %101 = zext i1 %100 to i32
  %102 = load i32, ptr %2, align 4
  %103 = load i32, ptr %3, align 4
  %104 = icmp ne i32 %102, %103
  %105 = zext i1 %104 to i32
  %106 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, i32 noundef %101, i32 noundef %105)
  %107 = load i32, ptr %2, align 4
  %108 = load i32, ptr %3, align 4
  %109 = icmp ne i32 %107, %108
  br i1 %109, label %110, label %114

110:                                              ; preds = %77
  %111 = load i32, ptr %4, align 4
  %112 = load i32, ptr %5, align 4
  %113 = icmp ne i32 %111, %112
  br label %114

114:                                              ; preds = %110, %77
  %115 = phi i1 [ false, %77 ], [ %113, %110 ]
  %116 = zext i1 %115 to i32
  %117 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %116)
  %118 = load i32, ptr %2, align 4
  %119 = load i32, ptr %3, align 4
  %120 = load i32, ptr %4, align 4
  %121 = mul nsw i32 %119, %120
  %122 = load i32, ptr %7, align 4
  %123 = sdiv i32 %121, %122
  %124 = add nsw i32 %118, %123
  %125 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %124)
  %126 = load i32, ptr %2, align 4
  %127 = load i32, ptr %3, align 4
  %128 = load i32, ptr %4, align 4
  %129 = mul nsw i32 %127, %128
  %130 = load i32, ptr %7, align 4
  %131 = sdiv i32 %129, %130
  %132 = add nsw i32 %126, %131
  %133 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %132)
  %134 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 64)
  %135 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef 4)
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
