; ModuleID = '../../files/simple/fft1.c'
source_filename = "../../files/simple/fft1.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@ai = dso_local global [8 x double] zeroinitializer, align 16
@ar = dso_local global [8 x double] zeroinitializer, align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  store i32 8, ptr %3, align 4
  store i32 0, ptr %2, align 4
  br label %6

6:                                                ; preds = %21, %0
  %7 = load i32, ptr %2, align 4
  %8 = load i32, ptr %3, align 4
  %9 = icmp slt i32 %7, %8
  br i1 %9, label %10, label %24

10:                                               ; preds = %6
  %11 = load i32, ptr %2, align 4
  %12 = sitofp i32 %11 to double
  %13 = fmul double 6.283180e+00, %12
  %14 = load i32, ptr %3, align 4
  %15 = sitofp i32 %14 to double
  %16 = fdiv double %13, %15
  %17 = call double @cos(double noundef %16)
  %18 = load i32, ptr %2, align 4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %19
  store double %17, ptr %20, align 8
  br label %21

21:                                               ; preds = %10
  %22 = load i32, ptr %2, align 4
  %23 = add nsw i32 %22, 1
  store i32 %23, ptr %2, align 4
  br label %6, !llvm.loop !6

24:                                               ; preds = %6
  store i32 0, ptr %4, align 4
  %25 = load i32, ptr %3, align 4
  %26 = load i32, ptr %4, align 4
  %27 = call i32 @fft1(i32 noundef %25, i32 noundef %26)
  store i32 %27, ptr %5, align 4
  store i32 1, ptr %4, align 4
  %28 = load i32, ptr %3, align 4
  %29 = load i32, ptr %4, align 4
  %30 = call i32 @fft1(i32 noundef %28, i32 noundef %29)
  store i32 %30, ptr %5, align 4
  %31 = load i32, ptr %1, align 4
  ret i32 %31
}

; Function Attrs: noinline nounwind optnone uwtable
define internal double @cos(double noundef %0) #0 {
  %2 = alloca double, align 8
  store double %0, ptr %2, align 8
  %3 = load double, ptr %2, align 8
  %4 = fsub double 0x3FF921F9F01B866E, %3
  %5 = call double @sin(double noundef %4)
  ret double %5
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @fft1(i32 noundef %0, i32 noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  %11 = alloca i32, align 4
  %12 = alloca i32, align 4
  %13 = alloca i32, align 4
  %14 = alloca i32, align 4
  %15 = alloca double, align 8
  %16 = alloca double, align 8
  %17 = alloca double, align 8
  %18 = alloca double, align 8
  %19 = alloca double, align 8
  %20 = alloca double, align 8
  %21 = alloca double, align 8
  %22 = alloca double, align 8
  %23 = alloca double, align 8
  %24 = alloca double, align 8
  %25 = alloca double, align 8
  store i32 %0, ptr %4, align 4
  store i32 %1, ptr %5, align 4
  %26 = load i32, ptr %4, align 4
  %27 = icmp slt i32 %26, 2
  br i1 %27, label %28, label %29

28:                                               ; preds = %2
  store i32 999, ptr %3, align 4
  br label %265

29:                                               ; preds = %2
  %30 = load i32, ptr %4, align 4
  %31 = sitofp i32 %30 to double
  %32 = call double @log(double noundef %31)
  %33 = call double @log(double noundef 2.000000e+00)
  %34 = fdiv double %32, %33
  %35 = fptosi double %34 to i32
  store i32 %35, ptr %14, align 4
  store i32 1, ptr %7, align 4
  store i32 0, ptr %6, align 4
  br label %36

36:                                               ; preds = %43, %29
  %37 = load i32, ptr %6, align 4
  %38 = load i32, ptr %14, align 4
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %40, label %46

40:                                               ; preds = %36
  %41 = load i32, ptr %7, align 4
  %42 = mul nsw i32 %41, 2
  store i32 %42, ptr %7, align 4
  br label %43

43:                                               ; preds = %40
  %44 = load i32, ptr %6, align 4
  %45 = add nsw i32 %44, 1
  store i32 %45, ptr %6, align 4
  br label %36, !llvm.loop !8

46:                                               ; preds = %36
  %47 = load i32, ptr %4, align 4
  %48 = load i32, ptr %7, align 4
  %49 = sub nsw i32 %47, %48
  %50 = sitofp i32 %49 to double
  %51 = call double @fabs(double noundef %50)
  %52 = fcmp ogt double %51, 0x3EB0C6F7A0B5ED8D
  br i1 %52, label %53, label %54

53:                                               ; preds = %46
  store i32 1, ptr %3, align 4
  br label %265

54:                                               ; preds = %46
  %55 = load i32, ptr %5, align 4
  %56 = icmp eq i32 %55, 1
  %57 = zext i1 %56 to i64
  %58 = select i1 %56, double 1.000000e+00, double -1.000000e+00
  store double %58, ptr %15, align 8
  %59 = load i32, ptr %4, align 4
  store i32 %59, ptr %11, align 4
  store i32 0, ptr %9, align 4
  br label %60

60:                                               ; preds = %163, %54
  %61 = load i32, ptr %9, align 4
  %62 = load i32, ptr %14, align 4
  %63 = icmp slt i32 %61, %62
  br i1 %63, label %64, label %166

64:                                               ; preds = %60
  %65 = load i32, ptr %11, align 4
  store i32 %65, ptr %10, align 4
  %66 = load i32, ptr %11, align 4
  %67 = sdiv i32 %66, 2
  store i32 %67, ptr %11, align 4
  %68 = load i32, ptr %11, align 4
  %69 = sitofp i32 %68 to double
  %70 = fdiv double 3.141590e+00, %69
  store double %70, ptr %16, align 8
  store i32 0, ptr %8, align 4
  br label %71

71:                                               ; preds = %159, %64
  %72 = load i32, ptr %8, align 4
  %73 = load i32, ptr %11, align 4
  %74 = icmp slt i32 %72, %73
  br i1 %74, label %75, label %162

75:                                               ; preds = %71
  %76 = load i32, ptr %8, align 4
  %77 = sitofp i32 %76 to double
  %78 = load double, ptr %16, align 8
  %79 = fmul double %77, %78
  store double %79, ptr %25, align 8
  %80 = load double, ptr %25, align 8
  %81 = call double @cos(double noundef %80)
  store double %81, ptr %17, align 8
  %82 = load double, ptr %15, align 8
  %83 = load double, ptr %25, align 8
  %84 = call double @sin(double noundef %83)
  %85 = fmul double %82, %84
  store double %85, ptr %18, align 8
  %86 = load i32, ptr %8, align 4
  %87 = load i32, ptr %10, align 4
  %88 = sub nsw i32 %86, %87
  store i32 %88, ptr %6, align 4
  %89 = load i32, ptr %10, align 4
  store i32 %89, ptr %7, align 4
  br label %90

90:                                               ; preds = %154, %75
  %91 = load i32, ptr %7, align 4
  %92 = load i32, ptr %4, align 4
  %93 = icmp sle i32 %91, %92
  br i1 %93, label %94, label %158

94:                                               ; preds = %90
  %95 = load i32, ptr %7, align 4
  %96 = load i32, ptr %6, align 4
  %97 = add nsw i32 %95, %96
  store i32 %97, ptr %12, align 4
  %98 = load i32, ptr %12, align 4
  %99 = load i32, ptr %11, align 4
  %100 = add nsw i32 %98, %99
  store i32 %100, ptr %13, align 4
  %101 = load i32, ptr %12, align 4
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %102
  %104 = load double, ptr %103, align 8
  store double %104, ptr %19, align 8
  %105 = load i32, ptr %13, align 4
  %106 = sext i32 %105 to i64
  %107 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %106
  %108 = load double, ptr %107, align 8
  store double %108, ptr %20, align 8
  %109 = load i32, ptr %12, align 4
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %110
  %112 = load double, ptr %111, align 8
  store double %112, ptr %21, align 8
  %113 = load i32, ptr %13, align 4
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %114
  %116 = load double, ptr %115, align 8
  store double %116, ptr %22, align 8
  %117 = load double, ptr %19, align 8
  %118 = load double, ptr %20, align 8
  %119 = fsub double %117, %118
  store double %119, ptr %23, align 8
  %120 = load double, ptr %21, align 8
  %121 = load double, ptr %22, align 8
  %122 = fsub double %120, %121
  store double %122, ptr %24, align 8
  %123 = load double, ptr %19, align 8
  %124 = load double, ptr %20, align 8
  %125 = fadd double %123, %124
  %126 = load i32, ptr %12, align 4
  %127 = sext i32 %126 to i64
  %128 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %127
  store double %125, ptr %128, align 8
  %129 = load double, ptr %21, align 8
  %130 = load double, ptr %22, align 8
  %131 = fadd double %129, %130
  %132 = load i32, ptr %12, align 4
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %133
  store double %131, ptr %134, align 8
  %135 = load double, ptr %23, align 8
  %136 = load double, ptr %17, align 8
  %137 = load double, ptr %24, align 8
  %138 = load double, ptr %18, align 8
  %139 = fmul double %137, %138
  %140 = fneg double %139
  %141 = call double @llvm.fmuladd.f64(double %135, double %136, double %140)
  %142 = load i32, ptr %13, align 4
  %143 = sext i32 %142 to i64
  %144 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %143
  store double %141, ptr %144, align 8
  %145 = load double, ptr %24, align 8
  %146 = load double, ptr %17, align 8
  %147 = load double, ptr %23, align 8
  %148 = load double, ptr %18, align 8
  %149 = fmul double %147, %148
  %150 = call double @llvm.fmuladd.f64(double %145, double %146, double %149)
  %151 = load i32, ptr %13, align 4
  %152 = sext i32 %151 to i64
  %153 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %152
  store double %150, ptr %153, align 8
  br label %154

154:                                              ; preds = %94
  %155 = load i32, ptr %10, align 4
  %156 = load i32, ptr %7, align 4
  %157 = add nsw i32 %156, %155
  store i32 %157, ptr %7, align 4
  br label %90, !llvm.loop !9

158:                                              ; preds = %90
  br label %159

159:                                              ; preds = %158
  %160 = load i32, ptr %8, align 4
  %161 = add nsw i32 %160, 1
  store i32 %161, ptr %8, align 4
  br label %71, !llvm.loop !10

162:                                              ; preds = %71
  br label %163

163:                                              ; preds = %162
  %164 = load i32, ptr %9, align 4
  %165 = add nsw i32 %164, 1
  store i32 %165, ptr %9, align 4
  br label %60, !llvm.loop !11

166:                                              ; preds = %60
  %167 = load i32, ptr %4, align 4
  %168 = sdiv i32 %167, 2
  store i32 %168, ptr %12, align 4
  %169 = load i32, ptr %4, align 4
  %170 = sub nsw i32 %169, 1
  store i32 %170, ptr %13, align 4
  store i32 1, ptr %7, align 4
  store i32 1, ptr %6, align 4
  br label %171

171:                                              ; preds = %234, %166
  %172 = load i32, ptr %6, align 4
  %173 = load i32, ptr %13, align 4
  %174 = icmp sle i32 %172, %173
  br i1 %174, label %175, label %237

175:                                              ; preds = %171
  %176 = load i32, ptr %6, align 4
  %177 = load i32, ptr %7, align 4
  %178 = icmp slt i32 %176, %177
  br i1 %178, label %179, label %218

179:                                              ; preds = %175
  %180 = load i32, ptr %7, align 4
  %181 = sub nsw i32 %180, 1
  %182 = sext i32 %181 to i64
  %183 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %182
  %184 = load double, ptr %183, align 8
  store double %184, ptr %23, align 8
  %185 = load i32, ptr %7, align 4
  %186 = sub nsw i32 %185, 1
  %187 = sext i32 %186 to i64
  %188 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %187
  %189 = load double, ptr %188, align 8
  store double %189, ptr %24, align 8
  %190 = load i32, ptr %6, align 4
  %191 = sub nsw i32 %190, 1
  %192 = sext i32 %191 to i64
  %193 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %192
  %194 = load double, ptr %193, align 8
  %195 = load i32, ptr %7, align 4
  %196 = sub nsw i32 %195, 1
  %197 = sext i32 %196 to i64
  %198 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %197
  store double %194, ptr %198, align 8
  %199 = load i32, ptr %6, align 4
  %200 = sub nsw i32 %199, 1
  %201 = sext i32 %200 to i64
  %202 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %201
  %203 = load double, ptr %202, align 8
  %204 = load i32, ptr %7, align 4
  %205 = sub nsw i32 %204, 1
  %206 = sext i32 %205 to i64
  %207 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %206
  store double %203, ptr %207, align 8
  %208 = load double, ptr %23, align 8
  %209 = load i32, ptr %6, align 4
  %210 = sub nsw i32 %209, 1
  %211 = sext i32 %210 to i64
  %212 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %211
  store double %208, ptr %212, align 8
  %213 = load double, ptr %24, align 8
  %214 = load i32, ptr %6, align 4
  %215 = sub nsw i32 %214, 1
  %216 = sext i32 %215 to i64
  %217 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %216
  store double %213, ptr %217, align 8
  br label %218

218:                                              ; preds = %179, %175
  %219 = load i32, ptr %12, align 4
  store i32 %219, ptr %8, align 4
  br label %220

220:                                              ; preds = %224, %218
  %221 = load i32, ptr %8, align 4
  %222 = load i32, ptr %7, align 4
  %223 = icmp slt i32 %221, %222
  br i1 %223, label %224, label %230

224:                                              ; preds = %220
  %225 = load i32, ptr %8, align 4
  %226 = load i32, ptr %7, align 4
  %227 = sub nsw i32 %226, %225
  store i32 %227, ptr %7, align 4
  %228 = load i32, ptr %8, align 4
  %229 = sdiv i32 %228, 2
  store i32 %229, ptr %8, align 4
  br label %220, !llvm.loop !12

230:                                              ; preds = %220
  %231 = load i32, ptr %8, align 4
  %232 = load i32, ptr %7, align 4
  %233 = add nsw i32 %232, %231
  store i32 %233, ptr %7, align 4
  br label %234

234:                                              ; preds = %230
  %235 = load i32, ptr %6, align 4
  %236 = add nsw i32 %235, 1
  store i32 %236, ptr %6, align 4
  br label %171, !llvm.loop !13

237:                                              ; preds = %171
  %238 = load i32, ptr %5, align 4
  %239 = icmp eq i32 %238, 0
  br i1 %239, label %240, label %241

240:                                              ; preds = %237
  store i32 0, ptr %3, align 4
  br label %265

241:                                              ; preds = %237
  %242 = load i32, ptr %4, align 4
  %243 = sitofp i32 %242 to double
  store double %243, ptr %16, align 8
  store i32 0, ptr %6, align 4
  br label %244

244:                                              ; preds = %261, %241
  %245 = load i32, ptr %6, align 4
  %246 = load i32, ptr %4, align 4
  %247 = icmp slt i32 %245, %246
  br i1 %247, label %248, label %264

248:                                              ; preds = %244
  %249 = load double, ptr %16, align 8
  %250 = load i32, ptr %6, align 4
  %251 = sext i32 %250 to i64
  %252 = getelementptr inbounds [8 x double], ptr @ar, i64 0, i64 %251
  %253 = load double, ptr %252, align 8
  %254 = fdiv double %253, %249
  store double %254, ptr %252, align 8
  %255 = load double, ptr %16, align 8
  %256 = load i32, ptr %6, align 4
  %257 = sext i32 %256 to i64
  %258 = getelementptr inbounds [8 x double], ptr @ai, i64 0, i64 %257
  %259 = load double, ptr %258, align 8
  %260 = fdiv double %259, %255
  store double %260, ptr %258, align 8
  br label %261

261:                                              ; preds = %248
  %262 = load i32, ptr %6, align 4
  %263 = add nsw i32 %262, 1
  store i32 %263, ptr %6, align 4
  br label %244, !llvm.loop !14

264:                                              ; preds = %244
  store i32 0, ptr %3, align 4
  br label %265

265:                                              ; preds = %264, %240, %53, %28
  %266 = load i32, ptr %3, align 4
  ret i32 %266
}

; Function Attrs: noinline nounwind optnone uwtable
define internal double @log(double noundef %0) #0 {
  %2 = alloca double, align 8
  store double %0, ptr %2, align 8
  ret double 4.500000e+00
}

; Function Attrs: noinline nounwind optnone uwtable
define internal double @fabs(double noundef %0) #0 {
  %2 = alloca double, align 8
  %3 = alloca double, align 8
  store double %0, ptr %2, align 8
  %4 = load double, ptr %2, align 8
  %5 = fcmp oge double %4, 0.000000e+00
  br i1 %5, label %6, label %8

6:                                                ; preds = %1
  %7 = load double, ptr %2, align 8
  store double %7, ptr %3, align 8
  br label %11

8:                                                ; preds = %1
  %9 = load double, ptr %2, align 8
  %10 = fneg double %9
  store double %10, ptr %3, align 8
  br label %11

11:                                               ; preds = %8, %6
  %12 = load double, ptr %3, align 8
  ret double %12
}

; Function Attrs: noinline nounwind optnone uwtable
define internal double @sin(double noundef %0) #0 {
  %2 = alloca double, align 8
  %3 = alloca double, align 8
  %4 = alloca double, align 8
  %5 = alloca i32, align 4
  store double %0, ptr %2, align 8
  store i32 1, ptr %5, align 4
  br label %6

6:                                                ; preds = %9, %1
  %7 = load double, ptr %2, align 8
  %8 = fcmp ogt double %7, 6.283180e+00
  br i1 %8, label %9, label %12

9:                                                ; preds = %6
  %10 = load double, ptr %2, align 8
  %11 = fsub double %10, 6.283180e+00
  store double %11, ptr %2, align 8
  br label %6, !llvm.loop !15

12:                                               ; preds = %6
  br label %13

13:                                               ; preds = %16, %12
  %14 = load double, ptr %2, align 8
  %15 = fcmp olt double %14, -6.283180e+00
  br i1 %15, label %16, label %19

16:                                               ; preds = %13
  %17 = load double, ptr %2, align 8
  %18 = fadd double %17, 6.283180e+00
  store double %18, ptr %2, align 8
  br label %13, !llvm.loop !16

19:                                               ; preds = %13
  %20 = load double, ptr %2, align 8
  store double %20, ptr %4, align 8
  store double %20, ptr %3, align 8
  %21 = load double, ptr %4, align 8
  %22 = load double, ptr %2, align 8
  %23 = load double, ptr %2, align 8
  %24 = fmul double %22, %23
  %25 = fneg double %24
  %26 = fmul double %21, %25
  %27 = load i32, ptr %5, align 4
  %28 = sitofp i32 %27 to double
  %29 = fmul double 2.000000e+00, %28
  %30 = load i32, ptr %5, align 4
  %31 = sitofp i32 %30 to double
  %32 = call double @llvm.fmuladd.f64(double 2.000000e+00, double %31, double 1.000000e+00)
  %33 = fmul double %29, %32
  %34 = fdiv double %26, %33
  store double %34, ptr %4, align 8
  %35 = load double, ptr %3, align 8
  %36 = load double, ptr %4, align 8
  %37 = fadd double %35, %36
  store double %37, ptr %3, align 8
  %38 = load i32, ptr %5, align 4
  %39 = add nsw i32 %38, 1
  store i32 %39, ptr %5, align 4
  br label %40

40:                                               ; preds = %44, %19
  %41 = load double, ptr %4, align 8
  %42 = call double @fabs(double noundef %41)
  %43 = fcmp oge double %42, 1.000000e-05
  br i1 %43, label %44, label %64

44:                                               ; preds = %40
  %45 = load double, ptr %4, align 8
  %46 = load double, ptr %2, align 8
  %47 = load double, ptr %2, align 8
  %48 = fmul double %46, %47
  %49 = fneg double %48
  %50 = fmul double %45, %49
  %51 = load i32, ptr %5, align 4
  %52 = sitofp i32 %51 to double
  %53 = fmul double 2.000000e+00, %52
  %54 = load i32, ptr %5, align 4
  %55 = sitofp i32 %54 to double
  %56 = call double @llvm.fmuladd.f64(double 2.000000e+00, double %55, double 1.000000e+00)
  %57 = fmul double %53, %56
  %58 = fdiv double %50, %57
  store double %58, ptr %4, align 8
  %59 = load double, ptr %3, align 8
  %60 = load double, ptr %4, align 8
  %61 = fadd double %59, %60
  store double %61, ptr %3, align 8
  %62 = load i32, ptr %5, align 4
  %63 = add nsw i32 %62, 1
  store i32 %63, ptr %5, align 4
  br label %40, !llvm.loop !17

64:                                               ; preds = %40
  %65 = load double, ptr %3, align 8
  ret double %65
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fmuladd.f64(double, double, double) #1

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }

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
!12 = distinct !{!12, !7}
!13 = distinct !{!13, !7}
!14 = distinct !{!14, !7}
!15 = distinct !{!15, !7}
!16 = distinct !{!16, !7}
!17 = distinct !{!17, !7}
