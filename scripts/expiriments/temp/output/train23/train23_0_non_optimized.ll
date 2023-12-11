; ModuleID = '../../files/simple/train23.c'
source_filename = "../../files/simple/train23.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [6 x i8] c"%f 1\0A\00", align 1
@.str.1 = private unnamed_addr constant [6 x i8] c"%f 0\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca double, align 8
  %7 = alloca double, align 8
  %8 = alloca double, align 8
  %9 = alloca double, align 8
  %10 = alloca double, align 8
  %11 = alloca double, align 8
  %12 = alloca double, align 8
  %13 = alloca double, align 8
  store i32 0, ptr %1, align 4
  store i32 2301, ptr %2, align 4
  store i32 23051, ptr %3, align 4
  store i32 123, ptr %4, align 4
  store i32 235, ptr %5, align 4
  %14 = load i32, ptr %2, align 4
  %15 = sitofp i32 %14 to double
  %16 = load i32, ptr %3, align 4
  %17 = sitofp i32 %16 to double
  %18 = fmul double %15, %17
  store double %18, ptr %6, align 8
  %19 = load i32, ptr %2, align 4
  %20 = sitofp i32 %19 to double
  %21 = load i32, ptr %5, align 4
  %22 = sitofp i32 %21 to double
  %23 = fmul double %20, %22
  store double %23, ptr %7, align 8
  %24 = load double, ptr %6, align 8
  %25 = load double, ptr %7, align 8
  %26 = fsub double %24, %25
  store double %26, ptr %8, align 8
  %27 = load double, ptr %7, align 8
  %28 = load double, ptr %8, align 8
  %29 = fcmp olt double %27, %28
  br i1 %29, label %30, label %32

30:                                               ; preds = %0
  %31 = load double, ptr %7, align 8
  br label %34

32:                                               ; preds = %0
  %33 = load double, ptr %8, align 8
  br label %34

34:                                               ; preds = %32, %30
  %35 = phi double [ %31, %30 ], [ %33, %32 ]
  store double %35, ptr %9, align 8
  %36 = load i32, ptr %4, align 4
  %37 = sitofp i32 %36 to double
  %38 = load i32, ptr %3, align 4
  %39 = sitofp i32 %38 to double
  %40 = fmul double %37, %39
  store double %40, ptr %10, align 8
  %41 = load double, ptr %6, align 8
  %42 = load double, ptr %10, align 8
  %43 = fsub double %41, %42
  store double %43, ptr %11, align 8
  %44 = load double, ptr %10, align 8
  %45 = load double, ptr %11, align 8
  %46 = fcmp olt double %44, %45
  br i1 %46, label %47, label %49

47:                                               ; preds = %34
  %48 = load double, ptr %10, align 8
  br label %51

49:                                               ; preds = %34
  %50 = load double, ptr %11, align 8
  br label %51

51:                                               ; preds = %49, %47
  %52 = phi double [ %48, %47 ], [ %50, %49 ]
  store double %52, ptr %12, align 8
  store double 0.000000e+00, ptr %13, align 8
  %53 = load i32, ptr %3, align 4
  %54 = sitofp i32 %53 to double
  %55 = load i32, ptr %2, align 4
  %56 = sitofp i32 %55 to double
  %57 = fdiv double %54, %56
  %58 = load i32, ptr %5, align 4
  %59 = sitofp i32 %58 to double
  %60 = load i32, ptr %4, align 4
  %61 = sitofp i32 %60 to double
  %62 = fdiv double %59, %61
  %63 = fcmp oeq double %57, %62
  br i1 %63, label %108, label %64

64:                                               ; preds = %51
  %65 = load i32, ptr %3, align 4
  %66 = sitofp i32 %65 to double
  %67 = load i32, ptr %2, align 4
  %68 = sitofp i32 %67 to double
  %69 = fdiv double %66, %68
  %70 = load i32, ptr %3, align 4
  %71 = load i32, ptr %5, align 4
  %72 = sub nsw i32 %70, %71
  %73 = sitofp i32 %72 to double
  %74 = load i32, ptr %4, align 4
  %75 = sitofp i32 %74 to double
  %76 = fdiv double %73, %75
  %77 = fcmp oeq double %69, %76
  br i1 %77, label %108, label %78

78:                                               ; preds = %64
  %79 = load i32, ptr %3, align 4
  %80 = sitofp i32 %79 to double
  %81 = load i32, ptr %2, align 4
  %82 = sitofp i32 %81 to double
  %83 = fdiv double %80, %82
  %84 = load i32, ptr %3, align 4
  %85 = sitofp i32 %84 to double
  %86 = load i32, ptr %2, align 4
  %87 = load i32, ptr %4, align 4
  %88 = sub nsw i32 %86, %87
  %89 = sitofp i32 %88 to double
  %90 = fdiv double %85, %89
  %91 = fcmp oeq double %83, %90
  br i1 %91, label %108, label %92

92:                                               ; preds = %78
  %93 = load i32, ptr %3, align 4
  %94 = sitofp i32 %93 to double
  %95 = load i32, ptr %2, align 4
  %96 = sitofp i32 %95 to double
  %97 = fdiv double %94, %96
  %98 = load i32, ptr %3, align 4
  %99 = load i32, ptr %5, align 4
  %100 = sub nsw i32 %98, %99
  %101 = sitofp i32 %100 to double
  %102 = load i32, ptr %2, align 4
  %103 = load i32, ptr %4, align 4
  %104 = sub nsw i32 %102, %103
  %105 = sitofp i32 %104 to double
  %106 = fdiv double %101, %105
  %107 = fcmp oeq double %97, %106
  br i1 %107, label %108, label %111

108:                                              ; preds = %92, %78, %64, %51
  %109 = load double, ptr %6, align 8
  %110 = fdiv double %109, 2.000000e+00
  store double %110, ptr %13, align 8
  br label %111

111:                                              ; preds = %108, %92
  %112 = load double, ptr %9, align 8
  %113 = load double, ptr %13, align 8
  %114 = fcmp oeq double %112, %113
  br i1 %114, label %119, label %115

115:                                              ; preds = %111
  %116 = load double, ptr %12, align 8
  %117 = load double, ptr %13, align 8
  %118 = fcmp oeq double %116, %117
  br i1 %118, label %119, label %122

119:                                              ; preds = %115, %111
  %120 = load double, ptr %13, align 8
  %121 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %120)
  br label %153

122:                                              ; preds = %115
  %123 = load double, ptr %9, align 8
  %124 = load double, ptr %13, align 8
  %125 = fcmp olt double %123, %124
  br i1 %125, label %130, label %126

126:                                              ; preds = %122
  %127 = load double, ptr %12, align 8
  %128 = load double, ptr %13, align 8
  %129 = fcmp olt double %127, %128
  br i1 %129, label %130, label %133

130:                                              ; preds = %126, %122
  %131 = load double, ptr %13, align 8
  %132 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, double noundef %131)
  br label %152

133:                                              ; preds = %126
  %134 = load double, ptr %9, align 8
  %135 = load double, ptr %12, align 8
  %136 = fcmp oeq double %134, %135
  br i1 %136, label %137, label %140

137:                                              ; preds = %133
  %138 = load double, ptr %12, align 8
  %139 = call i32 (ptr, ...) @printf(ptr noundef @.str, double noundef %138)
  br label %151

140:                                              ; preds = %133
  %141 = load double, ptr %9, align 8
  %142 = load double, ptr %12, align 8
  %143 = fcmp olt double %141, %142
  br i1 %143, label %144, label %147

144:                                              ; preds = %140
  %145 = load double, ptr %12, align 8
  %146 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, double noundef %145)
  br label %150

147:                                              ; preds = %140
  %148 = load double, ptr %9, align 8
  %149 = call i32 (ptr, ...) @printf(ptr noundef @.str.1, double noundef %148)
  br label %150

150:                                              ; preds = %147, %144
  br label %151

151:                                              ; preds = %150, %137
  br label %152

152:                                              ; preds = %151, %130
  br label %153

153:                                              ; preds = %152, %119
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
