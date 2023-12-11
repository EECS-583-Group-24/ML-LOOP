; ModuleID = '../../files/simple/qsort-exam.c'
source_filename = "../../files/simple/qsort-exam.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@arr = dso_local global [20 x float] [float 5.000000e+00, float 4.000000e+00, float 0x40249999A0000000, float 0x3FF19999A0000000, float 0x4016CCCCC0000000, float 1.000000e+02, float 2.310000e+02, float 1.110000e+02, float 4.950000e+01, float 9.900000e+01, float 1.000000e+01, float 1.500000e+02, float 0x406BC70A40000000, float 1.010000e+02, float 7.700000e+01, float 4.400000e+01, float 3.500000e+01, float 0x40348A3D80000000, float 0x4058FF5C20000000, float 0x40563851E0000000], align 16
@istack = dso_local global [100 x i32] zeroinitializer, align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @sort(i64 noundef %0) #0 {
  %2 = alloca i64, align 8
  %3 = alloca i64, align 8
  %4 = alloca i64, align 8
  %5 = alloca i64, align 8
  %6 = alloca i64, align 8
  %7 = alloca i64, align 8
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca float, align 4
  %11 = alloca float, align 4
  store i64 %0, ptr %2, align 8
  %12 = load i64, ptr %2, align 8
  store i64 %12, ptr %4, align 8
  store i64 1, ptr %7, align 8
  store i32 0, ptr %8, align 4
  store i32 0, ptr %9, align 4
  br label %13

13:                                               ; preds = %258, %1
  %14 = load i64, ptr %4, align 8
  %15 = load i64, ptr %7, align 8
  %16 = sub i64 %14, %15
  %17 = icmp ult i64 %16, 7
  br i1 %17, label %18, label %77

18:                                               ; preds = %13
  %19 = load i64, ptr %7, align 8
  %20 = add i64 %19, 1
  store i64 %20, ptr %5, align 8
  br label %21

21:                                               ; preds = %57, %18
  %22 = load i64, ptr %5, align 8
  %23 = load i64, ptr %4, align 8
  %24 = icmp ule i64 %22, %23
  br i1 %24, label %25, label %60

25:                                               ; preds = %21
  %26 = load i64, ptr %5, align 8
  %27 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %26
  %28 = load float, ptr %27, align 4
  store float %28, ptr %10, align 4
  %29 = load i64, ptr %5, align 8
  %30 = sub i64 %29, 1
  store i64 %30, ptr %3, align 8
  br label %31

31:                                               ; preds = %49, %25
  %32 = load i64, ptr %3, align 8
  %33 = load i64, ptr %7, align 8
  %34 = icmp uge i64 %32, %33
  br i1 %34, label %35, label %52

35:                                               ; preds = %31
  %36 = load i64, ptr %3, align 8
  %37 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %36
  %38 = load float, ptr %37, align 4
  %39 = load float, ptr %10, align 4
  %40 = fcmp ole float %38, %39
  br i1 %40, label %41, label %42

41:                                               ; preds = %35
  br label %52

42:                                               ; preds = %35
  %43 = load i64, ptr %3, align 8
  %44 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %43
  %45 = load float, ptr %44, align 4
  %46 = load i64, ptr %3, align 8
  %47 = add i64 %46, 1
  %48 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %47
  store float %45, ptr %48, align 4
  br label %49

49:                                               ; preds = %42
  %50 = load i64, ptr %3, align 8
  %51 = add i64 %50, -1
  store i64 %51, ptr %3, align 8
  br label %31, !llvm.loop !6

52:                                               ; preds = %41, %31
  %53 = load float, ptr %10, align 4
  %54 = load i64, ptr %3, align 8
  %55 = add i64 %54, 1
  %56 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %55
  store float %53, ptr %56, align 4
  br label %57

57:                                               ; preds = %52
  %58 = load i64, ptr %5, align 8
  %59 = add i64 %58, 1
  store i64 %59, ptr %5, align 8
  br label %21, !llvm.loop !8

60:                                               ; preds = %21
  %61 = load i32, ptr %8, align 4
  %62 = icmp eq i32 %61, 0
  br i1 %62, label %63, label %64

63:                                               ; preds = %60
  br label %259

64:                                               ; preds = %60
  %65 = load i32, ptr %8, align 4
  %66 = add nsw i32 %65, -1
  store i32 %66, ptr %8, align 4
  %67 = sext i32 %65 to i64
  %68 = getelementptr inbounds [100 x i32], ptr @istack, i64 0, i64 %67
  %69 = load i32, ptr %68, align 4
  %70 = sext i32 %69 to i64
  store i64 %70, ptr %4, align 8
  %71 = load i32, ptr %8, align 4
  %72 = add nsw i32 %71, -1
  store i32 %72, ptr %8, align 4
  %73 = sext i32 %71 to i64
  %74 = getelementptr inbounds [100 x i32], ptr @istack, i64 0, i64 %73
  %75 = load i32, ptr %74, align 4
  %76 = sext i32 %75 to i64
  store i64 %76, ptr %7, align 8
  br label %258

77:                                               ; preds = %13
  %78 = load i64, ptr %7, align 8
  %79 = load i64, ptr %4, align 8
  %80 = add i64 %78, %79
  %81 = lshr i64 %80, 1
  store i64 %81, ptr %6, align 8
  %82 = load i64, ptr %6, align 8
  %83 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %82
  %84 = load float, ptr %83, align 4
  store float %84, ptr %11, align 4
  %85 = load i64, ptr %7, align 8
  %86 = add i64 %85, 1
  %87 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %86
  %88 = load float, ptr %87, align 4
  %89 = load i64, ptr %6, align 8
  %90 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %89
  store float %88, ptr %90, align 4
  %91 = load float, ptr %11, align 4
  %92 = load i64, ptr %7, align 8
  %93 = add i64 %92, 1
  %94 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %93
  store float %91, ptr %94, align 4
  %95 = load i64, ptr %7, align 8
  %96 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %95
  %97 = load float, ptr %96, align 4
  %98 = load i64, ptr %4, align 8
  %99 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %98
  %100 = load float, ptr %99, align 4
  %101 = fcmp ogt float %97, %100
  br i1 %101, label %102, label %114

102:                                              ; preds = %77
  %103 = load i64, ptr %7, align 8
  %104 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %103
  %105 = load float, ptr %104, align 4
  store float %105, ptr %11, align 4
  %106 = load i64, ptr %4, align 8
  %107 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %106
  %108 = load float, ptr %107, align 4
  %109 = load i64, ptr %7, align 8
  %110 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %109
  store float %108, ptr %110, align 4
  %111 = load float, ptr %11, align 4
  %112 = load i64, ptr %4, align 8
  %113 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %112
  store float %111, ptr %113, align 4
  br label %114

114:                                              ; preds = %102, %77
  %115 = load i64, ptr %7, align 8
  %116 = add i64 %115, 1
  %117 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %116
  %118 = load float, ptr %117, align 4
  %119 = load i64, ptr %4, align 8
  %120 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %119
  %121 = load float, ptr %120, align 4
  %122 = fcmp ogt float %118, %121
  br i1 %122, label %123, label %137

123:                                              ; preds = %114
  %124 = load i64, ptr %7, align 8
  %125 = add i64 %124, 1
  %126 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %125
  %127 = load float, ptr %126, align 4
  store float %127, ptr %11, align 4
  %128 = load i64, ptr %4, align 8
  %129 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %128
  %130 = load float, ptr %129, align 4
  %131 = load i64, ptr %7, align 8
  %132 = add i64 %131, 1
  %133 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %132
  store float %130, ptr %133, align 4
  %134 = load float, ptr %11, align 4
  %135 = load i64, ptr %4, align 8
  %136 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %135
  store float %134, ptr %136, align 4
  br label %137

137:                                              ; preds = %123, %114
  %138 = load i64, ptr %7, align 8
  %139 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %138
  %140 = load float, ptr %139, align 4
  %141 = load i64, ptr %7, align 8
  %142 = add i64 %141, 1
  %143 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %142
  %144 = load float, ptr %143, align 4
  %145 = fcmp ogt float %140, %144
  br i1 %145, label %146, label %160

146:                                              ; preds = %137
  %147 = load i64, ptr %7, align 8
  %148 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %147
  %149 = load float, ptr %148, align 4
  store float %149, ptr %11, align 4
  %150 = load i64, ptr %7, align 8
  %151 = add i64 %150, 1
  %152 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %151
  %153 = load float, ptr %152, align 4
  %154 = load i64, ptr %7, align 8
  %155 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %154
  store float %153, ptr %155, align 4
  %156 = load float, ptr %11, align 4
  %157 = load i64, ptr %7, align 8
  %158 = add i64 %157, 1
  %159 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %158
  store float %156, ptr %159, align 4
  br label %160

160:                                              ; preds = %146, %137
  %161 = load i64, ptr %7, align 8
  %162 = add i64 %161, 1
  store i64 %162, ptr %3, align 8
  %163 = load i64, ptr %4, align 8
  store i64 %163, ptr %5, align 8
  %164 = load i64, ptr %7, align 8
  %165 = add i64 %164, 1
  %166 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %165
  %167 = load float, ptr %166, align 4
  store float %167, ptr %10, align 4
  br label %168

168:                                              ; preds = %197, %160
  %169 = load i64, ptr %3, align 8
  %170 = add i64 %169, 1
  store i64 %170, ptr %3, align 8
  br label %171

171:                                              ; preds = %177, %168
  %172 = load i64, ptr %3, align 8
  %173 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %172
  %174 = load float, ptr %173, align 4
  %175 = load float, ptr %10, align 4
  %176 = fcmp olt float %174, %175
  br i1 %176, label %177, label %180

177:                                              ; preds = %171
  %178 = load i64, ptr %3, align 8
  %179 = add i64 %178, 1
  store i64 %179, ptr %3, align 8
  br label %171, !llvm.loop !9

180:                                              ; preds = %171
  %181 = load i64, ptr %5, align 8
  %182 = add i64 %181, -1
  store i64 %182, ptr %5, align 8
  br label %183

183:                                              ; preds = %189, %180
  %184 = load i64, ptr %5, align 8
  %185 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %184
  %186 = load float, ptr %185, align 4
  %187 = load float, ptr %10, align 4
  %188 = fcmp ogt float %186, %187
  br i1 %188, label %189, label %192

189:                                              ; preds = %183
  %190 = load i64, ptr %5, align 8
  %191 = add i64 %190, -1
  store i64 %191, ptr %5, align 8
  br label %183, !llvm.loop !10

192:                                              ; preds = %183
  %193 = load i64, ptr %5, align 8
  %194 = load i64, ptr %3, align 8
  %195 = icmp ult i64 %193, %194
  br i1 %195, label %196, label %197

196:                                              ; preds = %192
  br label %209

197:                                              ; preds = %192
  %198 = load i64, ptr %3, align 8
  %199 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %198
  %200 = load float, ptr %199, align 4
  store float %200, ptr %11, align 4
  %201 = load i64, ptr %5, align 8
  %202 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %201
  %203 = load float, ptr %202, align 4
  %204 = load i64, ptr %3, align 8
  %205 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %204
  store float %203, ptr %205, align 4
  %206 = load float, ptr %11, align 4
  %207 = load i64, ptr %5, align 8
  %208 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %207
  store float %206, ptr %208, align 4
  br label %168

209:                                              ; preds = %196
  %210 = load i64, ptr %5, align 8
  %211 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %210
  %212 = load float, ptr %211, align 4
  %213 = load i64, ptr %7, align 8
  %214 = add i64 %213, 1
  %215 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %214
  store float %212, ptr %215, align 4
  %216 = load float, ptr %10, align 4
  %217 = load i64, ptr %5, align 8
  %218 = getelementptr inbounds [20 x float], ptr @arr, i64 0, i64 %217
  store float %216, ptr %218, align 4
  %219 = load i32, ptr %8, align 4
  %220 = add nsw i32 %219, 2
  store i32 %220, ptr %8, align 4
  %221 = load i64, ptr %4, align 8
  %222 = load i64, ptr %3, align 8
  %223 = sub i64 %221, %222
  %224 = add i64 %223, 1
  %225 = load i64, ptr %5, align 8
  %226 = load i64, ptr %7, align 8
  %227 = sub i64 %225, %226
  %228 = icmp uge i64 %224, %227
  br i1 %228, label %229, label %243

229:                                              ; preds = %209
  %230 = load i64, ptr %4, align 8
  %231 = trunc i64 %230 to i32
  %232 = load i32, ptr %8, align 4
  %233 = sext i32 %232 to i64
  %234 = getelementptr inbounds [100 x i32], ptr @istack, i64 0, i64 %233
  store i32 %231, ptr %234, align 4
  %235 = load i64, ptr %3, align 8
  %236 = trunc i64 %235 to i32
  %237 = load i32, ptr %8, align 4
  %238 = sub nsw i32 %237, 1
  %239 = sext i32 %238 to i64
  %240 = getelementptr inbounds [100 x i32], ptr @istack, i64 0, i64 %239
  store i32 %236, ptr %240, align 4
  %241 = load i64, ptr %5, align 8
  %242 = sub i64 %241, 1
  store i64 %242, ptr %4, align 8
  br label %257

243:                                              ; preds = %209
  %244 = load i64, ptr %5, align 8
  %245 = sub i64 %244, 1
  %246 = trunc i64 %245 to i32
  %247 = load i32, ptr %8, align 4
  %248 = sext i32 %247 to i64
  %249 = getelementptr inbounds [100 x i32], ptr @istack, i64 0, i64 %248
  store i32 %246, ptr %249, align 4
  %250 = load i64, ptr %7, align 8
  %251 = trunc i64 %250 to i32
  %252 = load i32, ptr %8, align 4
  %253 = sub nsw i32 %252, 1
  %254 = sext i32 %253 to i64
  %255 = getelementptr inbounds [100 x i32], ptr @istack, i64 0, i64 %254
  store i32 %251, ptr %255, align 4
  %256 = load i64, ptr %3, align 8
  store i64 %256, ptr %7, align 8
  br label %257

257:                                              ; preds = %243, %229
  br label %258

258:                                              ; preds = %257, %64
  br label %13

259:                                              ; preds = %63
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  call void @sort(i64 noundef 20)
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
