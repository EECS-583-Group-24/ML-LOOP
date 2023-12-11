; ModuleID = '../../files/simple/crc.c'
source_filename = "../../files/simple/crc.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@lin = dso_local global [256 x i8] c"asdffeagewaHAFEFaeDsFEawFdsFaefaeerdjgp\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00", align 16
@icrc.icrctb = internal global [256 x i16] zeroinitializer, align 16
@icrc.init = internal global i16 0, align 2
@icrc.rchr = internal global [256 x i8] zeroinitializer, align 16
@icrc.it = internal global [16 x i8] c"\00\08\04\0C\02\0A\06\0E\01\09\05\0D\03\0B\07\0F", align 16

; Function Attrs: noinline nounwind optnone uwtable
define dso_local zeroext i16 @icrc1(i16 noundef zeroext %0, i8 noundef zeroext %1) #0 {
  %3 = alloca i16, align 2
  %4 = alloca i8, align 1
  %5 = alloca i32, align 4
  %6 = alloca i16, align 2
  store i16 %0, ptr %3, align 2
  store i8 %1, ptr %4, align 1
  %7 = load i16, ptr %3, align 2
  %8 = zext i16 %7 to i32
  %9 = load i8, ptr %4, align 1
  %10 = zext i8 %9 to i32
  %11 = shl i32 %10, 8
  %12 = xor i32 %8, %11
  %13 = trunc i32 %12 to i16
  store i16 %13, ptr %6, align 2
  store i32 0, ptr %5, align 4
  br label %14

14:                                               ; preds = %36, %2
  %15 = load i32, ptr %5, align 4
  %16 = icmp slt i32 %15, 8
  br i1 %16, label %17, label %39

17:                                               ; preds = %14
  %18 = load i16, ptr %6, align 2
  %19 = zext i16 %18 to i32
  %20 = and i32 %19, 32768
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %30

22:                                               ; preds = %17
  %23 = load i16, ptr %6, align 2
  %24 = zext i16 %23 to i32
  %25 = shl i32 %24, 1
  %26 = trunc i32 %25 to i16
  store i16 %26, ptr %6, align 2
  %27 = zext i16 %26 to i32
  %28 = xor i32 %27, 4129
  %29 = trunc i32 %28 to i16
  store i16 %29, ptr %6, align 2
  br label %35

30:                                               ; preds = %17
  %31 = load i16, ptr %6, align 2
  %32 = zext i16 %31 to i32
  %33 = shl i32 %32, 1
  %34 = trunc i32 %33 to i16
  store i16 %34, ptr %6, align 2
  br label %35

35:                                               ; preds = %30, %22
  br label %36

36:                                               ; preds = %35
  %37 = load i32, ptr %5, align 4
  %38 = add nsw i32 %37, 1
  store i32 %38, ptr %5, align 4
  br label %14, !llvm.loop !6

39:                                               ; preds = %14
  %40 = load i16, ptr %6, align 2
  ret i16 %40
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local zeroext i16 @icrc(i16 noundef zeroext %0, i64 noundef %1, i16 noundef signext %2, i32 noundef %3) #0 {
  %5 = alloca i16, align 2
  %6 = alloca i64, align 8
  %7 = alloca i16, align 2
  %8 = alloca i32, align 4
  %9 = alloca i16, align 2
  %10 = alloca i16, align 2
  %11 = alloca i16, align 2
  %12 = alloca i16, align 2
  store i16 %0, ptr %5, align 2
  store i64 %1, ptr %6, align 8
  store i16 %2, ptr %7, align 2
  store i32 %3, ptr %8, align 4
  %13 = load i16, ptr %5, align 2
  store i16 %13, ptr %12, align 2
  %14 = load i16, ptr @icrc.init, align 2
  %15 = icmp ne i16 %14, 0
  br i1 %15, label %54, label %16

16:                                               ; preds = %4
  store i16 1, ptr @icrc.init, align 2
  store i16 0, ptr %11, align 2
  br label %17

17:                                               ; preds = %50, %16
  %18 = load i16, ptr %11, align 2
  %19 = zext i16 %18 to i32
  %20 = icmp sle i32 %19, 255
  br i1 %20, label %21, label %53

21:                                               ; preds = %17
  %22 = load i16, ptr %11, align 2
  %23 = zext i16 %22 to i32
  %24 = shl i32 %23, 8
  %25 = trunc i32 %24 to i16
  %26 = call zeroext i16 @icrc1(i16 noundef zeroext %25, i8 noundef zeroext 0)
  %27 = load i16, ptr %11, align 2
  %28 = zext i16 %27 to i64
  %29 = getelementptr inbounds [256 x i16], ptr @icrc.icrctb, i64 0, i64 %28
  store i16 %26, ptr %29, align 2
  %30 = load i16, ptr %11, align 2
  %31 = zext i16 %30 to i32
  %32 = and i32 %31, 15
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds [16 x i8], ptr @icrc.it, i64 0, i64 %33
  %35 = load i8, ptr %34, align 1
  %36 = zext i8 %35 to i32
  %37 = shl i32 %36, 4
  %38 = load i16, ptr %11, align 2
  %39 = zext i16 %38 to i32
  %40 = ashr i32 %39, 4
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds [16 x i8], ptr @icrc.it, i64 0, i64 %41
  %43 = load i8, ptr %42, align 1
  %44 = zext i8 %43 to i32
  %45 = or i32 %37, %44
  %46 = trunc i32 %45 to i8
  %47 = load i16, ptr %11, align 2
  %48 = zext i16 %47 to i64
  %49 = getelementptr inbounds [256 x i8], ptr @icrc.rchr, i64 0, i64 %48
  store i8 %46, ptr %49, align 1
  br label %50

50:                                               ; preds = %21
  %51 = load i16, ptr %11, align 2
  %52 = add i16 %51, 1
  store i16 %52, ptr %11, align 2
  br label %17, !llvm.loop !8

53:                                               ; preds = %17
  br label %54

54:                                               ; preds = %53, %4
  %55 = load i16, ptr %7, align 2
  %56 = sext i16 %55 to i32
  %57 = icmp sge i32 %56, 0
  br i1 %57, label %58, label %68

58:                                               ; preds = %54
  %59 = load i16, ptr %7, align 2
  %60 = trunc i16 %59 to i8
  %61 = zext i8 %60 to i32
  %62 = load i16, ptr %7, align 2
  %63 = trunc i16 %62 to i8
  %64 = zext i8 %63 to i32
  %65 = shl i32 %64, 8
  %66 = or i32 %61, %65
  %67 = trunc i32 %66 to i16
  store i16 %67, ptr %12, align 2
  br label %92

68:                                               ; preds = %54
  %69 = load i32, ptr %8, align 4
  %70 = icmp slt i32 %69, 0
  br i1 %70, label %71, label %91

71:                                               ; preds = %68
  %72 = load i16, ptr %12, align 2
  %73 = zext i16 %72 to i32
  %74 = ashr i32 %73, 8
  %75 = trunc i32 %74 to i8
  %76 = zext i8 %75 to i64
  %77 = getelementptr inbounds [256 x i8], ptr @icrc.rchr, i64 0, i64 %76
  %78 = load i8, ptr %77, align 1
  %79 = zext i8 %78 to i32
  %80 = load i16, ptr %12, align 2
  %81 = zext i16 %80 to i32
  %82 = and i32 %81, 255
  %83 = trunc i32 %82 to i8
  %84 = zext i8 %83 to i64
  %85 = getelementptr inbounds [256 x i8], ptr @icrc.rchr, i64 0, i64 %84
  %86 = load i8, ptr %85, align 1
  %87 = zext i8 %86 to i32
  %88 = shl i32 %87, 8
  %89 = or i32 %79, %88
  %90 = trunc i32 %89 to i16
  store i16 %90, ptr %12, align 2
  br label %91

91:                                               ; preds = %71, %68
  br label %92

92:                                               ; preds = %91, %58
  store i16 1, ptr %11, align 2
  br label %93

93:                                               ; preds = %144, %92
  %94 = load i16, ptr %11, align 2
  %95 = zext i16 %94 to i64
  %96 = load i64, ptr %6, align 8
  %97 = icmp ule i64 %95, %96
  br i1 %97, label %98, label %147

98:                                               ; preds = %93
  %99 = load i32, ptr %8, align 4
  %100 = icmp slt i32 %99, 0
  br i1 %100, label %101, label %117

101:                                              ; preds = %98
  %102 = load i16, ptr %11, align 2
  %103 = zext i16 %102 to i64
  %104 = getelementptr inbounds [256 x i8], ptr @lin, i64 0, i64 %103
  %105 = load i8, ptr %104, align 1
  %106 = zext i8 %105 to i64
  %107 = getelementptr inbounds [256 x i8], ptr @icrc.rchr, i64 0, i64 %106
  %108 = load i8, ptr %107, align 1
  %109 = zext i8 %108 to i32
  %110 = load i16, ptr %12, align 2
  %111 = zext i16 %110 to i32
  %112 = ashr i32 %111, 8
  %113 = trunc i32 %112 to i8
  %114 = zext i8 %113 to i32
  %115 = xor i32 %109, %114
  %116 = trunc i32 %115 to i16
  store i16 %116, ptr %9, align 2
  br label %130

117:                                              ; preds = %98
  %118 = load i16, ptr %11, align 2
  %119 = zext i16 %118 to i64
  %120 = getelementptr inbounds [256 x i8], ptr @lin, i64 0, i64 %119
  %121 = load i8, ptr %120, align 1
  %122 = zext i8 %121 to i32
  %123 = load i16, ptr %12, align 2
  %124 = zext i16 %123 to i32
  %125 = ashr i32 %124, 8
  %126 = trunc i32 %125 to i8
  %127 = zext i8 %126 to i32
  %128 = xor i32 %122, %127
  %129 = trunc i32 %128 to i16
  store i16 %129, ptr %9, align 2
  br label %130

130:                                              ; preds = %117, %101
  %131 = load i16, ptr %9, align 2
  %132 = zext i16 %131 to i64
  %133 = getelementptr inbounds [256 x i16], ptr @icrc.icrctb, i64 0, i64 %132
  %134 = load i16, ptr %133, align 2
  %135 = zext i16 %134 to i32
  %136 = load i16, ptr %12, align 2
  %137 = zext i16 %136 to i32
  %138 = and i32 %137, 255
  %139 = trunc i32 %138 to i8
  %140 = zext i8 %139 to i32
  %141 = shl i32 %140, 8
  %142 = xor i32 %135, %141
  %143 = trunc i32 %142 to i16
  store i16 %143, ptr %12, align 2
  br label %144

144:                                              ; preds = %130
  %145 = load i16, ptr %11, align 2
  %146 = add i16 %145, 1
  store i16 %146, ptr %11, align 2
  br label %93, !llvm.loop !9

147:                                              ; preds = %93
  %148 = load i32, ptr %8, align 4
  %149 = icmp sge i32 %148, 0
  br i1 %149, label %150, label %152

150:                                              ; preds = %147
  %151 = load i16, ptr %12, align 2
  store i16 %151, ptr %10, align 2
  br label %172

152:                                              ; preds = %147
  %153 = load i16, ptr %12, align 2
  %154 = zext i16 %153 to i32
  %155 = ashr i32 %154, 8
  %156 = trunc i32 %155 to i8
  %157 = zext i8 %156 to i64
  %158 = getelementptr inbounds [256 x i8], ptr @icrc.rchr, i64 0, i64 %157
  %159 = load i8, ptr %158, align 1
  %160 = zext i8 %159 to i32
  %161 = load i16, ptr %12, align 2
  %162 = zext i16 %161 to i32
  %163 = and i32 %162, 255
  %164 = trunc i32 %163 to i8
  %165 = zext i8 %164 to i64
  %166 = getelementptr inbounds [256 x i8], ptr @icrc.rchr, i64 0, i64 %165
  %167 = load i8, ptr %166, align 1
  %168 = zext i8 %167 to i32
  %169 = shl i32 %168, 8
  %170 = or i32 %160, %169
  %171 = trunc i32 %170 to i16
  store i16 %171, ptr %10, align 2
  br label %172

172:                                              ; preds = %152, %150
  %173 = load i16, ptr %10, align 2
  ret i16 %173
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i16, align 2
  %3 = alloca i16, align 2
  %4 = alloca i64, align 8
  store i32 0, ptr %1, align 4
  store i64 40, ptr %4, align 8
  %5 = load i64, ptr %4, align 8
  %6 = add i64 %5, 1
  %7 = getelementptr inbounds [256 x i8], ptr @lin, i64 0, i64 %6
  store i8 0, ptr %7, align 1
  %8 = load i64, ptr %4, align 8
  %9 = call zeroext i16 @icrc(i16 noundef zeroext 0, i64 noundef %8, i16 noundef signext 0, i32 noundef 1)
  store i16 %9, ptr %2, align 2
  %10 = load i16, ptr %2, align 2
  %11 = zext i16 %10 to i32
  %12 = ashr i32 %11, 8
  %13 = trunc i32 %12 to i8
  %14 = load i64, ptr %4, align 8
  %15 = add i64 %14, 1
  %16 = getelementptr inbounds [256 x i8], ptr @lin, i64 0, i64 %15
  store i8 %13, ptr %16, align 1
  %17 = load i16, ptr %2, align 2
  %18 = zext i16 %17 to i32
  %19 = and i32 %18, 255
  %20 = trunc i32 %19 to i8
  %21 = load i64, ptr %4, align 8
  %22 = add i64 %21, 2
  %23 = getelementptr inbounds [256 x i8], ptr @lin, i64 0, i64 %22
  store i8 %20, ptr %23, align 1
  %24 = load i16, ptr %2, align 2
  %25 = load i64, ptr %4, align 8
  %26 = add i64 %25, 2
  %27 = call zeroext i16 @icrc(i16 noundef zeroext %24, i64 noundef %26, i16 noundef signext 0, i32 noundef 1)
  store i16 %27, ptr %3, align 2
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
