; ModuleID = '../../files/simple/00128.c'
source_filename = "../../files/simple/00128.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@b = dso_local global i32 0, align 4
@a = dso_local global i32 0, align 4
@c = dso_local global i8 0, align 1
@d = dso_local global i8 0, align 1
@e = dso_local global i8 0, align 1
@f = dso_local global i64 0, align 8
@g = dso_local global i64 0, align 8
@h = dso_local global i64 0, align 8
@i = dso_local global i64 0, align 8
@j = dso_local global i16 0, align 2
@k = dso_local global i16 0, align 2

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
  %1 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %2 = load i32, ptr @b, align 4
  store i32 %2, ptr @a, align 4
  %3 = load i8, ptr @c, align 1
  %4 = sext i8 %3 to i32
  store i32 %4, ptr @a, align 4
  %5 = load i8, ptr @d, align 1
  %6 = sext i8 %5 to i32
  store i32 %6, ptr @a, align 4
  %7 = load i8, ptr @e, align 1
  %8 = zext i8 %7 to i32
  store i32 %8, ptr @a, align 4
  %9 = load i64, ptr @f, align 8
  %10 = trunc i64 %9 to i32
  store i32 %10, ptr @a, align 4
  %11 = load i64, ptr @g, align 8
  %12 = trunc i64 %11 to i32
  store i32 %12, ptr @a, align 4
  %13 = load i64, ptr @h, align 8
  %14 = trunc i64 %13 to i32
  store i32 %14, ptr @a, align 4
  %15 = load i64, ptr @i, align 8
  %16 = trunc i64 %15 to i32
  store i32 %16, ptr @a, align 4
  %17 = load i16, ptr @j, align 2
  %18 = sext i16 %17 to i32
  store i32 %18, ptr @a, align 4
  %19 = load i16, ptr @k, align 2
  %20 = zext i16 %19 to i32
  store i32 %20, ptr @a, align 4
  %21 = load i32, ptr @a, align 4
  store i32 %21, ptr @b, align 4
  %22 = load i8, ptr @c, align 1
  %23 = sext i8 %22 to i32
  store i32 %23, ptr @b, align 4
  %24 = load i8, ptr @d, align 1
  %25 = sext i8 %24 to i32
  store i32 %25, ptr @b, align 4
  %26 = load i8, ptr @e, align 1
  %27 = zext i8 %26 to i32
  store i32 %27, ptr @b, align 4
  %28 = load i64, ptr @f, align 8
  %29 = trunc i64 %28 to i32
  store i32 %29, ptr @b, align 4
  %30 = load i64, ptr @g, align 8
  %31 = trunc i64 %30 to i32
  store i32 %31, ptr @b, align 4
  %32 = load i64, ptr @h, align 8
  %33 = trunc i64 %32 to i32
  store i32 %33, ptr @b, align 4
  %34 = load i64, ptr @i, align 8
  %35 = trunc i64 %34 to i32
  store i32 %35, ptr @b, align 4
  %36 = load i16, ptr @j, align 2
  %37 = sext i16 %36 to i32
  store i32 %37, ptr @b, align 4
  %38 = load i16, ptr @k, align 2
  %39 = zext i16 %38 to i32
  store i32 %39, ptr @b, align 4
  %40 = load i32, ptr @a, align 4
  %41 = trunc i32 %40 to i8
  store i8 %41, ptr @c, align 1
  %42 = load i32, ptr @b, align 4
  %43 = trunc i32 %42 to i8
  store i8 %43, ptr @c, align 1
  %44 = load i8, ptr @d, align 1
  store i8 %44, ptr @c, align 1
  %45 = load i8, ptr @e, align 1
  store i8 %45, ptr @c, align 1
  %46 = load i64, ptr @f, align 8
  %47 = trunc i64 %46 to i8
  store i8 %47, ptr @c, align 1
  %48 = load i64, ptr @g, align 8
  %49 = trunc i64 %48 to i8
  store i8 %49, ptr @c, align 1
  %50 = load i64, ptr @h, align 8
  %51 = trunc i64 %50 to i8
  store i8 %51, ptr @c, align 1
  %52 = load i64, ptr @i, align 8
  %53 = trunc i64 %52 to i8
  store i8 %53, ptr @c, align 1
  %54 = load i16, ptr @j, align 2
  %55 = trunc i16 %54 to i8
  store i8 %55, ptr @c, align 1
  %56 = load i16, ptr @k, align 2
  %57 = trunc i16 %56 to i8
  store i8 %57, ptr @c, align 1
  %58 = load i32, ptr @a, align 4
  %59 = trunc i32 %58 to i8
  store i8 %59, ptr @d, align 1
  %60 = load i32, ptr @b, align 4
  %61 = trunc i32 %60 to i8
  store i8 %61, ptr @d, align 1
  %62 = load i8, ptr @c, align 1
  store i8 %62, ptr @d, align 1
  %63 = load i8, ptr @e, align 1
  store i8 %63, ptr @d, align 1
  %64 = load i64, ptr @f, align 8
  %65 = trunc i64 %64 to i8
  store i8 %65, ptr @d, align 1
  %66 = load i64, ptr @g, align 8
  %67 = trunc i64 %66 to i8
  store i8 %67, ptr @d, align 1
  %68 = load i64, ptr @h, align 8
  %69 = trunc i64 %68 to i8
  store i8 %69, ptr @d, align 1
  %70 = load i64, ptr @i, align 8
  %71 = trunc i64 %70 to i8
  store i8 %71, ptr @d, align 1
  %72 = load i16, ptr @j, align 2
  %73 = trunc i16 %72 to i8
  store i8 %73, ptr @d, align 1
  %74 = load i16, ptr @k, align 2
  %75 = trunc i16 %74 to i8
  store i8 %75, ptr @d, align 1
  %76 = load i32, ptr @a, align 4
  %77 = trunc i32 %76 to i8
  store i8 %77, ptr @e, align 1
  %78 = load i32, ptr @b, align 4
  %79 = trunc i32 %78 to i8
  store i8 %79, ptr @e, align 1
  %80 = load i8, ptr @c, align 1
  store i8 %80, ptr @e, align 1
  %81 = load i8, ptr @d, align 1
  store i8 %81, ptr @e, align 1
  %82 = load i64, ptr @f, align 8
  %83 = trunc i64 %82 to i8
  store i8 %83, ptr @e, align 1
  %84 = load i64, ptr @g, align 8
  %85 = trunc i64 %84 to i8
  store i8 %85, ptr @e, align 1
  %86 = load i64, ptr @h, align 8
  %87 = trunc i64 %86 to i8
  store i8 %87, ptr @e, align 1
  %88 = load i64, ptr @i, align 8
  %89 = trunc i64 %88 to i8
  store i8 %89, ptr @e, align 1
  %90 = load i16, ptr @j, align 2
  %91 = trunc i16 %90 to i8
  store i8 %91, ptr @e, align 1
  %92 = load i16, ptr @k, align 2
  %93 = trunc i16 %92 to i8
  store i8 %93, ptr @e, align 1
  %94 = load i32, ptr @a, align 4
  %95 = sext i32 %94 to i64
  store i64 %95, ptr @f, align 8
  %96 = load i32, ptr @b, align 4
  %97 = zext i32 %96 to i64
  store i64 %97, ptr @f, align 8
  %98 = load i8, ptr @c, align 1
  %99 = sext i8 %98 to i64
  store i64 %99, ptr @f, align 8
  %100 = load i8, ptr @d, align 1
  %101 = sext i8 %100 to i64
  store i64 %101, ptr @f, align 8
  %102 = load i8, ptr @e, align 1
  %103 = zext i8 %102 to i64
  store i64 %103, ptr @f, align 8
  %104 = load i64, ptr @g, align 8
  store i64 %104, ptr @f, align 8
  %105 = load i64, ptr @h, align 8
  store i64 %105, ptr @f, align 8
  %106 = load i64, ptr @i, align 8
  store i64 %106, ptr @f, align 8
  %107 = load i16, ptr @j, align 2
  %108 = sext i16 %107 to i64
  store i64 %108, ptr @f, align 8
  %109 = load i16, ptr @k, align 2
  %110 = zext i16 %109 to i64
  store i64 %110, ptr @f, align 8
  %111 = load i32, ptr @a, align 4
  %112 = sext i32 %111 to i64
  store i64 %112, ptr @g, align 8
  %113 = load i32, ptr @b, align 4
  %114 = zext i32 %113 to i64
  store i64 %114, ptr @g, align 8
  %115 = load i8, ptr @c, align 1
  %116 = sext i8 %115 to i64
  store i64 %116, ptr @g, align 8
  %117 = load i8, ptr @d, align 1
  %118 = sext i8 %117 to i64
  store i64 %118, ptr @g, align 8
  %119 = load i8, ptr @e, align 1
  %120 = zext i8 %119 to i64
  store i64 %120, ptr @g, align 8
  %121 = load i64, ptr @f, align 8
  store i64 %121, ptr @g, align 8
  %122 = load i64, ptr @h, align 8
  store i64 %122, ptr @g, align 8
  %123 = load i64, ptr @i, align 8
  store i64 %123, ptr @g, align 8
  %124 = load i16, ptr @j, align 2
  %125 = sext i16 %124 to i64
  store i64 %125, ptr @g, align 8
  %126 = load i16, ptr @k, align 2
  %127 = zext i16 %126 to i64
  store i64 %127, ptr @g, align 8
  %128 = load i32, ptr @a, align 4
  %129 = sext i32 %128 to i64
  store i64 %129, ptr @h, align 8
  %130 = load i32, ptr @b, align 4
  %131 = zext i32 %130 to i64
  store i64 %131, ptr @h, align 8
  %132 = load i8, ptr @c, align 1
  %133 = sext i8 %132 to i64
  store i64 %133, ptr @h, align 8
  %134 = load i8, ptr @d, align 1
  %135 = sext i8 %134 to i64
  store i64 %135, ptr @h, align 8
  %136 = load i8, ptr @e, align 1
  %137 = zext i8 %136 to i64
  store i64 %137, ptr @h, align 8
  %138 = load i64, ptr @f, align 8
  store i64 %138, ptr @h, align 8
  %139 = load i64, ptr @g, align 8
  store i64 %139, ptr @h, align 8
  %140 = load i64, ptr @i, align 8
  store i64 %140, ptr @h, align 8
  %141 = load i16, ptr @j, align 2
  %142 = sext i16 %141 to i64
  store i64 %142, ptr @h, align 8
  %143 = load i16, ptr @k, align 2
  %144 = zext i16 %143 to i64
  store i64 %144, ptr @h, align 8
  %145 = load i32, ptr @a, align 4
  %146 = sext i32 %145 to i64
  store i64 %146, ptr @i, align 8
  %147 = load i32, ptr @b, align 4
  %148 = zext i32 %147 to i64
  store i64 %148, ptr @i, align 8
  %149 = load i8, ptr @c, align 1
  %150 = sext i8 %149 to i64
  store i64 %150, ptr @i, align 8
  %151 = load i8, ptr @d, align 1
  %152 = sext i8 %151 to i64
  store i64 %152, ptr @i, align 8
  %153 = load i8, ptr @e, align 1
  %154 = zext i8 %153 to i64
  store i64 %154, ptr @i, align 8
  %155 = load i64, ptr @f, align 8
  store i64 %155, ptr @i, align 8
  %156 = load i64, ptr @g, align 8
  store i64 %156, ptr @i, align 8
  %157 = load i64, ptr @h, align 8
  store i64 %157, ptr @i, align 8
  %158 = load i16, ptr @j, align 2
  %159 = sext i16 %158 to i64
  store i64 %159, ptr @i, align 8
  %160 = load i16, ptr @k, align 2
  %161 = zext i16 %160 to i64
  store i64 %161, ptr @i, align 8
  %162 = load i32, ptr @a, align 4
  %163 = trunc i32 %162 to i16
  store i16 %163, ptr @j, align 2
  %164 = load i32, ptr @b, align 4
  %165 = trunc i32 %164 to i16
  store i16 %165, ptr @j, align 2
  %166 = load i8, ptr @c, align 1
  %167 = sext i8 %166 to i16
  store i16 %167, ptr @j, align 2
  %168 = load i8, ptr @d, align 1
  %169 = sext i8 %168 to i16
  store i16 %169, ptr @j, align 2
  %170 = load i8, ptr @e, align 1
  %171 = zext i8 %170 to i16
  store i16 %171, ptr @j, align 2
  %172 = load i64, ptr @f, align 8
  %173 = trunc i64 %172 to i16
  store i16 %173, ptr @j, align 2
  %174 = load i64, ptr @g, align 8
  %175 = trunc i64 %174 to i16
  store i16 %175, ptr @j, align 2
  %176 = load i64, ptr @h, align 8
  %177 = trunc i64 %176 to i16
  store i16 %177, ptr @j, align 2
  %178 = load i64, ptr @i, align 8
  %179 = trunc i64 %178 to i16
  store i16 %179, ptr @j, align 2
  %180 = load i16, ptr @k, align 2
  store i16 %180, ptr @j, align 2
  %181 = load i32, ptr @a, align 4
  %182 = trunc i32 %181 to i16
  store i16 %182, ptr @k, align 2
  %183 = load i32, ptr @b, align 4
  %184 = trunc i32 %183 to i16
  store i16 %184, ptr @k, align 2
  %185 = load i8, ptr @c, align 1
  %186 = sext i8 %185 to i16
  store i16 %186, ptr @k, align 2
  %187 = load i8, ptr @d, align 1
  %188 = sext i8 %187 to i16
  store i16 %188, ptr @k, align 2
  %189 = load i8, ptr @e, align 1
  %190 = zext i8 %189 to i16
  store i16 %190, ptr @k, align 2
  %191 = load i64, ptr @f, align 8
  %192 = trunc i64 %191 to i16
  store i16 %192, ptr @k, align 2
  %193 = load i64, ptr @g, align 8
  %194 = trunc i64 %193 to i16
  store i16 %194, ptr @k, align 2
  %195 = load i64, ptr @h, align 8
  %196 = trunc i64 %195 to i16
  store i16 %196, ptr @k, align 2
  %197 = load i16, ptr @j, align 2
  store i16 %197, ptr @k, align 2
  %198 = load i64, ptr @i, align 8
  %199 = trunc i64 %198 to i16
  store i16 %199, ptr @k, align 2
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
