; ModuleID = '../../files/simple/ludcmp.c'
source_filename = "../../files/simple/ludcmp.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@a = dso_local global [50 x [50 x double]] zeroinitializer, align 16
@b = dso_local global [50 x double] zeroinitializer, align 16
@x = dso_local global [50 x double] zeroinitializer, align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca double, align 8
  %8 = alloca double, align 8
  store i32 0, ptr %1, align 4
  store i32 50, ptr %4, align 4
  store i32 5, ptr %5, align 4
  store double 0x3EB0C6F7A0B5ED8D, ptr %7, align 8
  store i32 0, ptr %2, align 4
  br label %9

9:                                                ; preds = %61, %0
  %10 = load i32, ptr %2, align 4
  %11 = load i32, ptr %5, align 4
  %12 = icmp sle i32 %10, %11
  br i1 %12, label %13, label %64

13:                                               ; preds = %9
  store double 0.000000e+00, ptr %8, align 8
  store i32 0, ptr %3, align 4
  br label %14

14:                                               ; preds = %53, %13
  %15 = load i32, ptr %3, align 4
  %16 = load i32, ptr %5, align 4
  %17 = icmp sle i32 %15, %16
  br i1 %17, label %18, label %56

18:                                               ; preds = %14
  %19 = load i32, ptr %2, align 4
  %20 = add nsw i32 %19, 1
  %21 = load i32, ptr %3, align 4
  %22 = add nsw i32 %21, 1
  %23 = add nsw i32 %20, %22
  %24 = sitofp i32 %23 to double
  %25 = load i32, ptr %2, align 4
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %26
  %28 = load i32, ptr %3, align 4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [50 x double], ptr %27, i64 0, i64 %29
  store double %24, ptr %30, align 8
  %31 = load i32, ptr %2, align 4
  %32 = load i32, ptr %3, align 4
  %33 = icmp eq i32 %31, %32
  br i1 %33, label %34, label %43

34:                                               ; preds = %18
  %35 = load i32, ptr %2, align 4
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %36
  %38 = load i32, ptr %3, align 4
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds [50 x double], ptr %37, i64 0, i64 %39
  %41 = load double, ptr %40, align 8
  %42 = fmul double %41, 1.000000e+01
  store double %42, ptr %40, align 8
  br label %43

43:                                               ; preds = %34, %18
  %44 = load i32, ptr %2, align 4
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %45
  %47 = load i32, ptr %3, align 4
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds [50 x double], ptr %46, i64 0, i64 %48
  %50 = load double, ptr %49, align 8
  %51 = load double, ptr %8, align 8
  %52 = fadd double %51, %50
  store double %52, ptr %8, align 8
  br label %53

53:                                               ; preds = %43
  %54 = load i32, ptr %3, align 4
  %55 = add nsw i32 %54, 1
  store i32 %55, ptr %3, align 4
  br label %14, !llvm.loop !6

56:                                               ; preds = %14
  %57 = load double, ptr %8, align 8
  %58 = load i32, ptr %2, align 4
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [50 x double], ptr @b, i64 0, i64 %59
  store double %57, ptr %60, align 8
  br label %61

61:                                               ; preds = %56
  %62 = load i32, ptr %2, align 4
  %63 = add nsw i32 %62, 1
  store i32 %63, ptr %2, align 4
  br label %9, !llvm.loop !8

64:                                               ; preds = %9
  %65 = load i32, ptr %4, align 4
  %66 = load i32, ptr %5, align 4
  %67 = load double, ptr %7, align 8
  %68 = call i32 @ludcmp(i32 noundef %65, i32 noundef %66, double noundef %67)
  store i32 %68, ptr %6, align 4
  %69 = load i32, ptr %1, align 4
  ret i32 %69
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @ludcmp(i32 noundef %0, i32 noundef %1, double noundef %2) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca double, align 8
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  %11 = alloca double, align 8
  %12 = alloca [100 x double], align 16
  store i32 %0, ptr %5, align 4
  store i32 %1, ptr %6, align 4
  store double %2, ptr %7, align 8
  %13 = load i32, ptr %6, align 4
  %14 = icmp sgt i32 %13, 99
  br i1 %14, label %18, label %15

15:                                               ; preds = %3
  %16 = load double, ptr %7, align 8
  %17 = fcmp ole double %16, 0.000000e+00
  br i1 %17, label %18, label %19

18:                                               ; preds = %15, %3
  store i32 999, ptr %4, align 4
  br label %266

19:                                               ; preds = %15
  store i32 0, ptr %8, align 4
  br label %20

20:                                               ; preds = %154, %19
  %21 = load i32, ptr %8, align 4
  %22 = load i32, ptr %6, align 4
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %24, label %157

24:                                               ; preds = %20
  %25 = load i32, ptr %8, align 4
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %26
  %28 = load i32, ptr %8, align 4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [50 x double], ptr %27, i64 0, i64 %29
  %31 = load double, ptr %30, align 8
  %32 = call double @fabs(double noundef %31)
  %33 = load double, ptr %7, align 8
  %34 = fcmp ole double %32, %33
  br i1 %34, label %35, label %36

35:                                               ; preds = %24
  store i32 1, ptr %4, align 4
  br label %266

36:                                               ; preds = %24
  %37 = load i32, ptr %8, align 4
  %38 = add nsw i32 %37, 1
  store i32 %38, ptr %9, align 4
  br label %39

39:                                               ; preds = %96, %36
  %40 = load i32, ptr %9, align 4
  %41 = load i32, ptr %6, align 4
  %42 = icmp sle i32 %40, %41
  br i1 %42, label %43, label %99

43:                                               ; preds = %39
  %44 = load i32, ptr %9, align 4
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %45
  %47 = load i32, ptr %8, align 4
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds [50 x double], ptr %46, i64 0, i64 %48
  %50 = load double, ptr %49, align 8
  store double %50, ptr %11, align 8
  %51 = load i32, ptr %8, align 4
  %52 = icmp ne i32 %51, 0
  br i1 %52, label %53, label %80

53:                                               ; preds = %43
  store i32 0, ptr %10, align 4
  br label %54

54:                                               ; preds = %76, %53
  %55 = load i32, ptr %10, align 4
  %56 = load i32, ptr %8, align 4
  %57 = icmp slt i32 %55, %56
  br i1 %57, label %58, label %79

58:                                               ; preds = %54
  %59 = load i32, ptr %9, align 4
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %60
  %62 = load i32, ptr %10, align 4
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds [50 x double], ptr %61, i64 0, i64 %63
  %65 = load double, ptr %64, align 8
  %66 = load i32, ptr %10, align 4
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %67
  %69 = load i32, ptr %8, align 4
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds [50 x double], ptr %68, i64 0, i64 %70
  %72 = load double, ptr %71, align 8
  %73 = load double, ptr %11, align 8
  %74 = fneg double %65
  %75 = call double @llvm.fmuladd.f64(double %74, double %72, double %73)
  store double %75, ptr %11, align 8
  br label %76

76:                                               ; preds = %58
  %77 = load i32, ptr %10, align 4
  %78 = add nsw i32 %77, 1
  store i32 %78, ptr %10, align 4
  br label %54, !llvm.loop !9

79:                                               ; preds = %54
  br label %80

80:                                               ; preds = %79, %43
  %81 = load double, ptr %11, align 8
  %82 = load i32, ptr %8, align 4
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %83
  %85 = load i32, ptr %8, align 4
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds [50 x double], ptr %84, i64 0, i64 %86
  %88 = load double, ptr %87, align 8
  %89 = fdiv double %81, %88
  %90 = load i32, ptr %9, align 4
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %91
  %93 = load i32, ptr %8, align 4
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds [50 x double], ptr %92, i64 0, i64 %94
  store double %89, ptr %95, align 8
  br label %96

96:                                               ; preds = %80
  %97 = load i32, ptr %9, align 4
  %98 = add nsw i32 %97, 1
  store i32 %98, ptr %9, align 4
  br label %39, !llvm.loop !10

99:                                               ; preds = %39
  %100 = load i32, ptr %8, align 4
  %101 = add nsw i32 %100, 1
  store i32 %101, ptr %9, align 4
  br label %102

102:                                              ; preds = %150, %99
  %103 = load i32, ptr %9, align 4
  %104 = load i32, ptr %6, align 4
  %105 = icmp sle i32 %103, %104
  br i1 %105, label %106, label %153

106:                                              ; preds = %102
  %107 = load i32, ptr %8, align 4
  %108 = add nsw i32 %107, 1
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %109
  %111 = load i32, ptr %9, align 4
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds [50 x double], ptr %110, i64 0, i64 %112
  %114 = load double, ptr %113, align 8
  store double %114, ptr %11, align 8
  store i32 0, ptr %10, align 4
  br label %115

115:                                              ; preds = %138, %106
  %116 = load i32, ptr %10, align 4
  %117 = load i32, ptr %8, align 4
  %118 = icmp sle i32 %116, %117
  br i1 %118, label %119, label %141

119:                                              ; preds = %115
  %120 = load i32, ptr %8, align 4
  %121 = add nsw i32 %120, 1
  %122 = sext i32 %121 to i64
  %123 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %122
  %124 = load i32, ptr %10, align 4
  %125 = sext i32 %124 to i64
  %126 = getelementptr inbounds [50 x double], ptr %123, i64 0, i64 %125
  %127 = load double, ptr %126, align 8
  %128 = load i32, ptr %10, align 4
  %129 = sext i32 %128 to i64
  %130 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %129
  %131 = load i32, ptr %9, align 4
  %132 = sext i32 %131 to i64
  %133 = getelementptr inbounds [50 x double], ptr %130, i64 0, i64 %132
  %134 = load double, ptr %133, align 8
  %135 = load double, ptr %11, align 8
  %136 = fneg double %127
  %137 = call double @llvm.fmuladd.f64(double %136, double %134, double %135)
  store double %137, ptr %11, align 8
  br label %138

138:                                              ; preds = %119
  %139 = load i32, ptr %10, align 4
  %140 = add nsw i32 %139, 1
  store i32 %140, ptr %10, align 4
  br label %115, !llvm.loop !11

141:                                              ; preds = %115
  %142 = load double, ptr %11, align 8
  %143 = load i32, ptr %8, align 4
  %144 = add nsw i32 %143, 1
  %145 = sext i32 %144 to i64
  %146 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %145
  %147 = load i32, ptr %9, align 4
  %148 = sext i32 %147 to i64
  %149 = getelementptr inbounds [50 x double], ptr %146, i64 0, i64 %148
  store double %142, ptr %149, align 8
  br label %150

150:                                              ; preds = %141
  %151 = load i32, ptr %9, align 4
  %152 = add nsw i32 %151, 1
  store i32 %152, ptr %9, align 4
  br label %102, !llvm.loop !12

153:                                              ; preds = %102
  br label %154

154:                                              ; preds = %153
  %155 = load i32, ptr %8, align 4
  %156 = add nsw i32 %155, 1
  store i32 %156, ptr %8, align 4
  br label %20, !llvm.loop !13

157:                                              ; preds = %20
  %158 = load double, ptr @b, align 16
  %159 = getelementptr inbounds [100 x double], ptr %12, i64 0, i64 0
  store double %158, ptr %159, align 16
  store i32 1, ptr %8, align 4
  br label %160

160:                                              ; preds = %196, %157
  %161 = load i32, ptr %8, align 4
  %162 = load i32, ptr %6, align 4
  %163 = icmp sle i32 %161, %162
  br i1 %163, label %164, label %199

164:                                              ; preds = %160
  %165 = load i32, ptr %8, align 4
  %166 = sext i32 %165 to i64
  %167 = getelementptr inbounds [50 x double], ptr @b, i64 0, i64 %166
  %168 = load double, ptr %167, align 8
  store double %168, ptr %11, align 8
  store i32 0, ptr %9, align 4
  br label %169

169:                                              ; preds = %188, %164
  %170 = load i32, ptr %9, align 4
  %171 = load i32, ptr %8, align 4
  %172 = icmp slt i32 %170, %171
  br i1 %172, label %173, label %191

173:                                              ; preds = %169
  %174 = load i32, ptr %8, align 4
  %175 = sext i32 %174 to i64
  %176 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %175
  %177 = load i32, ptr %9, align 4
  %178 = sext i32 %177 to i64
  %179 = getelementptr inbounds [50 x double], ptr %176, i64 0, i64 %178
  %180 = load double, ptr %179, align 8
  %181 = load i32, ptr %9, align 4
  %182 = sext i32 %181 to i64
  %183 = getelementptr inbounds [100 x double], ptr %12, i64 0, i64 %182
  %184 = load double, ptr %183, align 8
  %185 = load double, ptr %11, align 8
  %186 = fneg double %180
  %187 = call double @llvm.fmuladd.f64(double %186, double %184, double %185)
  store double %187, ptr %11, align 8
  br label %188

188:                                              ; preds = %173
  %189 = load i32, ptr %9, align 4
  %190 = add nsw i32 %189, 1
  store i32 %190, ptr %9, align 4
  br label %169, !llvm.loop !14

191:                                              ; preds = %169
  %192 = load double, ptr %11, align 8
  %193 = load i32, ptr %8, align 4
  %194 = sext i32 %193 to i64
  %195 = getelementptr inbounds [100 x double], ptr %12, i64 0, i64 %194
  store double %192, ptr %195, align 8
  br label %196

196:                                              ; preds = %191
  %197 = load i32, ptr %8, align 4
  %198 = add nsw i32 %197, 1
  store i32 %198, ptr %8, align 4
  br label %160, !llvm.loop !15

199:                                              ; preds = %160
  %200 = load i32, ptr %6, align 4
  %201 = sext i32 %200 to i64
  %202 = getelementptr inbounds [100 x double], ptr %12, i64 0, i64 %201
  %203 = load double, ptr %202, align 8
  %204 = load i32, ptr %6, align 4
  %205 = sext i32 %204 to i64
  %206 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %205
  %207 = load i32, ptr %6, align 4
  %208 = sext i32 %207 to i64
  %209 = getelementptr inbounds [50 x double], ptr %206, i64 0, i64 %208
  %210 = load double, ptr %209, align 8
  %211 = fdiv double %203, %210
  %212 = load i32, ptr %6, align 4
  %213 = sext i32 %212 to i64
  %214 = getelementptr inbounds [50 x double], ptr @x, i64 0, i64 %213
  store double %211, ptr %214, align 8
  %215 = load i32, ptr %6, align 4
  %216 = sub nsw i32 %215, 1
  store i32 %216, ptr %8, align 4
  br label %217

217:                                              ; preds = %262, %199
  %218 = load i32, ptr %8, align 4
  %219 = icmp sge i32 %218, 0
  br i1 %219, label %220, label %265

220:                                              ; preds = %217
  %221 = load i32, ptr %8, align 4
  %222 = sext i32 %221 to i64
  %223 = getelementptr inbounds [100 x double], ptr %12, i64 0, i64 %222
  %224 = load double, ptr %223, align 8
  store double %224, ptr %11, align 8
  %225 = load i32, ptr %8, align 4
  %226 = add nsw i32 %225, 1
  store i32 %226, ptr %9, align 4
  br label %227

227:                                              ; preds = %246, %220
  %228 = load i32, ptr %9, align 4
  %229 = load i32, ptr %6, align 4
  %230 = icmp sle i32 %228, %229
  br i1 %230, label %231, label %249

231:                                              ; preds = %227
  %232 = load i32, ptr %8, align 4
  %233 = sext i32 %232 to i64
  %234 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %233
  %235 = load i32, ptr %9, align 4
  %236 = sext i32 %235 to i64
  %237 = getelementptr inbounds [50 x double], ptr %234, i64 0, i64 %236
  %238 = load double, ptr %237, align 8
  %239 = load i32, ptr %9, align 4
  %240 = sext i32 %239 to i64
  %241 = getelementptr inbounds [50 x double], ptr @x, i64 0, i64 %240
  %242 = load double, ptr %241, align 8
  %243 = load double, ptr %11, align 8
  %244 = fneg double %238
  %245 = call double @llvm.fmuladd.f64(double %244, double %242, double %243)
  store double %245, ptr %11, align 8
  br label %246

246:                                              ; preds = %231
  %247 = load i32, ptr %9, align 4
  %248 = add nsw i32 %247, 1
  store i32 %248, ptr %9, align 4
  br label %227, !llvm.loop !16

249:                                              ; preds = %227
  %250 = load double, ptr %11, align 8
  %251 = load i32, ptr %8, align 4
  %252 = sext i32 %251 to i64
  %253 = getelementptr inbounds [50 x [50 x double]], ptr @a, i64 0, i64 %252
  %254 = load i32, ptr %8, align 4
  %255 = sext i32 %254 to i64
  %256 = getelementptr inbounds [50 x double], ptr %253, i64 0, i64 %255
  %257 = load double, ptr %256, align 8
  %258 = fdiv double %250, %257
  %259 = load i32, ptr %8, align 4
  %260 = sext i32 %259 to i64
  %261 = getelementptr inbounds [50 x double], ptr @x, i64 0, i64 %260
  store double %258, ptr %261, align 8
  br label %262

262:                                              ; preds = %249
  %263 = load i32, ptr %8, align 4
  %264 = add nsw i32 %263, -1
  store i32 %264, ptr %8, align 4
  br label %217, !llvm.loop !17

265:                                              ; preds = %217
  store i32 0, ptr %4, align 4
  br label %266

266:                                              ; preds = %265, %35, %18
  %267 = load i32, ptr %4, align 4
  ret i32 %267
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
