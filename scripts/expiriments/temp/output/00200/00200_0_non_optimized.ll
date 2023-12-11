; ModuleID = '../../files/simple/00200.c'
source_filename = "../../files/simple/00200.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@debug = internal global i32 0, align 4
@.str = private unnamed_addr constant [15 x i8] c"((short)((1)))\00", align 1
@.str.1 = private unnamed_addr constant [24 x i8] c"((unsigned short)((1)))\00", align 1
@.str.2 = private unnamed_addr constant [13 x i8] c"((int)((1)))\00", align 1
@.str.3 = private unnamed_addr constant [22 x i8] c"((unsigned int)((1)))\00", align 1
@.str.4 = private unnamed_addr constant [14 x i8] c"((long)((1)))\00", align 1
@.str.5 = private unnamed_addr constant [23 x i8] c"((unsigned long)((1)))\00", align 1
@.str.6 = private unnamed_addr constant [19 x i8] c"((long long)((1)))\00", align 1
@.str.7 = private unnamed_addr constant [28 x i8] c"((unsigned long long)((1)))\00", align 1
@.str.8 = private unnamed_addr constant [16 x i8] c"((short)((-1)))\00", align 1
@.str.9 = private unnamed_addr constant [25 x i8] c"((unsigned short)((-1)))\00", align 1
@.str.10 = private unnamed_addr constant [14 x i8] c"((int)((-1)))\00", align 1
@.str.11 = private unnamed_addr constant [23 x i8] c"((unsigned int)((-1)))\00", align 1
@.str.12 = private unnamed_addr constant [15 x i8] c"((long)((-1)))\00", align 1
@.str.13 = private unnamed_addr constant [24 x i8] c"((unsigned long)((-1)))\00", align 1
@.str.14 = private unnamed_addr constant [20 x i8] c"((long long)((-1)))\00", align 1
@.str.15 = private unnamed_addr constant [29 x i8] c"((unsigned long long)((-1)))\00", align 1
@.str.16 = private unnamed_addr constant [19 x i8] c"%d test(s) failed\0A\00", align 1
@nfailed = internal global i32 0, align 4
@.str.17 = private unnamed_addr constant [10 x i8] c"%s %d %d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  store ptr %1, ptr %5, align 8
  %6 = load i32, ptr %4, align 4
  %7 = icmp sgt i32 %6, 1
  %8 = zext i1 %7 to i32
  store i32 %8, ptr @debug, align 4
  br label %9

9:                                                ; preds = %2
  br label %10

10:                                               ; preds = %9
  br label %11

11:                                               ; preds = %10
  br label %12

12:                                               ; preds = %11
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  br label %13

13:                                               ; preds = %12
  br label %14

14:                                               ; preds = %13
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  br label %15

15:                                               ; preds = %14
  br label %16

16:                                               ; preds = %15
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  br label %17

17:                                               ; preds = %16
  br label %18

18:                                               ; preds = %17
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str, i32 noundef -4, i32 noundef -4)
  br label %19

19:                                               ; preds = %18
  br label %20

20:                                               ; preds = %19
  br label %21

21:                                               ; preds = %20
  br label %22

22:                                               ; preds = %21
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  br label %23

23:                                               ; preds = %22
  br label %24

24:                                               ; preds = %23
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  br label %25

25:                                               ; preds = %24
  br label %26

26:                                               ; preds = %25
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  br label %27

27:                                               ; preds = %26
  br label %28

28:                                               ; preds = %27
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.1, i32 noundef -4, i32 noundef -4)
  br label %29

29:                                               ; preds = %28
  br label %30

30:                                               ; preds = %29
  br label %31

31:                                               ; preds = %30
  br label %32

32:                                               ; preds = %31
  br label %33

33:                                               ; preds = %32
  br label %34

34:                                               ; preds = %33
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  br label %35

35:                                               ; preds = %34
  br label %36

36:                                               ; preds = %35
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  br label %37

37:                                               ; preds = %36
  br label %38

38:                                               ; preds = %37
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  br label %39

39:                                               ; preds = %38
  br label %40

40:                                               ; preds = %39
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.2, i32 noundef -4, i32 noundef -4)
  br label %41

41:                                               ; preds = %40
  br label %42

42:                                               ; preds = %41
  br label %43

43:                                               ; preds = %42
  br label %44

44:                                               ; preds = %43
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  br label %45

45:                                               ; preds = %44
  br label %46

46:                                               ; preds = %45
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  br label %47

47:                                               ; preds = %46
  br label %48

48:                                               ; preds = %47
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  br label %49

49:                                               ; preds = %48
  br label %50

50:                                               ; preds = %49
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.3, i32 noundef 4, i32 noundef 4)
  br label %51

51:                                               ; preds = %50
  br label %52

52:                                               ; preds = %51
  br label %53

53:                                               ; preds = %52
  br label %54

54:                                               ; preds = %53
  br label %55

55:                                               ; preds = %54
  br label %56

56:                                               ; preds = %55
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  br label %57

57:                                               ; preds = %56
  br label %58

58:                                               ; preds = %57
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  br label %59

59:                                               ; preds = %58
  br label %60

60:                                               ; preds = %59
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  br label %61

61:                                               ; preds = %60
  br label %62

62:                                               ; preds = %61
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.4, i32 noundef -8, i32 noundef -8)
  br label %63

63:                                               ; preds = %62
  br label %64

64:                                               ; preds = %63
  br label %65

65:                                               ; preds = %64
  br label %66

66:                                               ; preds = %65
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  br label %67

67:                                               ; preds = %66
  br label %68

68:                                               ; preds = %67
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  br label %69

69:                                               ; preds = %68
  br label %70

70:                                               ; preds = %69
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  br label %71

71:                                               ; preds = %70
  br label %72

72:                                               ; preds = %71
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.5, i32 noundef 8, i32 noundef 8)
  br label %73

73:                                               ; preds = %72
  br label %74

74:                                               ; preds = %73
  br label %75

75:                                               ; preds = %74
  br label %76

76:                                               ; preds = %75
  br label %77

77:                                               ; preds = %76
  br label %78

78:                                               ; preds = %77
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  br label %79

79:                                               ; preds = %78
  br label %80

80:                                               ; preds = %79
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  br label %81

81:                                               ; preds = %80
  br label %82

82:                                               ; preds = %81
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  br label %83

83:                                               ; preds = %82
  br label %84

84:                                               ; preds = %83
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.6, i32 noundef -8, i32 noundef -8)
  br label %85

85:                                               ; preds = %84
  br label %86

86:                                               ; preds = %85
  br label %87

87:                                               ; preds = %86
  br label %88

88:                                               ; preds = %87
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  br label %89

89:                                               ; preds = %88
  br label %90

90:                                               ; preds = %89
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  br label %91

91:                                               ; preds = %90
  br label %92

92:                                               ; preds = %91
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  br label %93

93:                                               ; preds = %92
  br label %94

94:                                               ; preds = %93
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.7, i32 noundef 8, i32 noundef 8)
  br label %95

95:                                               ; preds = %94
  br label %96

96:                                               ; preds = %95
  br label %97

97:                                               ; preds = %96
  br label %98

98:                                               ; preds = %97
  br label %99

99:                                               ; preds = %98
  br label %100

100:                                              ; preds = %99
  br label %101

101:                                              ; preds = %100
  br label %102

102:                                              ; preds = %101
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  br label %103

103:                                              ; preds = %102
  br label %104

104:                                              ; preds = %103
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  br label %105

105:                                              ; preds = %104
  br label %106

106:                                              ; preds = %105
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  br label %107

107:                                              ; preds = %106
  br label %108

108:                                              ; preds = %107
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.8, i32 noundef -4, i32 noundef -4)
  br label %109

109:                                              ; preds = %108
  br label %110

110:                                              ; preds = %109
  br label %111

111:                                              ; preds = %110
  br label %112

112:                                              ; preds = %111
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  br label %113

113:                                              ; preds = %112
  br label %114

114:                                              ; preds = %113
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  br label %115

115:                                              ; preds = %114
  br label %116

116:                                              ; preds = %115
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  br label %117

117:                                              ; preds = %116
  br label %118

118:                                              ; preds = %117
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.9, i32 noundef -4, i32 noundef -4)
  br label %119

119:                                              ; preds = %118
  br label %120

120:                                              ; preds = %119
  br label %121

121:                                              ; preds = %120
  br label %122

122:                                              ; preds = %121
  br label %123

123:                                              ; preds = %122
  br label %124

124:                                              ; preds = %123
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  br label %125

125:                                              ; preds = %124
  br label %126

126:                                              ; preds = %125
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  br label %127

127:                                              ; preds = %126
  br label %128

128:                                              ; preds = %127
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  br label %129

129:                                              ; preds = %128
  br label %130

130:                                              ; preds = %129
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  call void @check(ptr noundef @.str.10, i32 noundef -4, i32 noundef -4)
  br label %131

131:                                              ; preds = %130
  br label %132

132:                                              ; preds = %131
  br label %133

133:                                              ; preds = %132
  br label %134

134:                                              ; preds = %133
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  br label %135

135:                                              ; preds = %134
  br label %136

136:                                              ; preds = %135
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  br label %137

137:                                              ; preds = %136
  br label %138

138:                                              ; preds = %137
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  br label %139

139:                                              ; preds = %138
  br label %140

140:                                              ; preds = %139
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  call void @check(ptr noundef @.str.11, i32 noundef 4, i32 noundef 4)
  br label %141

141:                                              ; preds = %140
  br label %142

142:                                              ; preds = %141
  br label %143

143:                                              ; preds = %142
  br label %144

144:                                              ; preds = %143
  br label %145

145:                                              ; preds = %144
  br label %146

146:                                              ; preds = %145
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  br label %147

147:                                              ; preds = %146
  br label %148

148:                                              ; preds = %147
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  br label %149

149:                                              ; preds = %148
  br label %150

150:                                              ; preds = %149
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  br label %151

151:                                              ; preds = %150
  br label %152

152:                                              ; preds = %151
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.12, i32 noundef -8, i32 noundef -8)
  br label %153

153:                                              ; preds = %152
  br label %154

154:                                              ; preds = %153
  br label %155

155:                                              ; preds = %154
  br label %156

156:                                              ; preds = %155
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  br label %157

157:                                              ; preds = %156
  br label %158

158:                                              ; preds = %157
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  br label %159

159:                                              ; preds = %158
  br label %160

160:                                              ; preds = %159
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  br label %161

161:                                              ; preds = %160
  br label %162

162:                                              ; preds = %161
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.13, i32 noundef 8, i32 noundef 8)
  br label %163

163:                                              ; preds = %162
  br label %164

164:                                              ; preds = %163
  br label %165

165:                                              ; preds = %164
  br label %166

166:                                              ; preds = %165
  br label %167

167:                                              ; preds = %166
  br label %168

168:                                              ; preds = %167
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  br label %169

169:                                              ; preds = %168
  br label %170

170:                                              ; preds = %169
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  br label %171

171:                                              ; preds = %170
  br label %172

172:                                              ; preds = %171
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  br label %173

173:                                              ; preds = %172
  br label %174

174:                                              ; preds = %173
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  call void @check(ptr noundef @.str.14, i32 noundef -8, i32 noundef -8)
  br label %175

175:                                              ; preds = %174
  br label %176

176:                                              ; preds = %175
  br label %177

177:                                              ; preds = %176
  br label %178

178:                                              ; preds = %177
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  br label %179

179:                                              ; preds = %178
  br label %180

180:                                              ; preds = %179
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  br label %181

181:                                              ; preds = %180
  br label %182

182:                                              ; preds = %181
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  br label %183

183:                                              ; preds = %182
  br label %184

184:                                              ; preds = %183
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  call void @check(ptr noundef @.str.15, i32 noundef 8, i32 noundef 8)
  br label %185

185:                                              ; preds = %184
  br label %186

186:                                              ; preds = %185
  br label %187

187:                                              ; preds = %186
  br label %188

188:                                              ; preds = %187
  %189 = load i32, ptr @nfailed, align 4
  %190 = call i32 (ptr, ...) @printf(ptr noundef @.str.16, i32 noundef %189)
  %191 = load i32, ptr @nfailed, align 4
  %192 = icmp ne i32 %191, 0
  %193 = zext i1 %192 to i32
  ret i32 %193
}

; Function Attrs: noinline nounwind optnone uwtable
define internal void @check(ptr noundef %0, i32 noundef %1, i32 noundef %2) #0 {
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  store i32 %1, ptr %5, align 4
  store i32 %2, ptr %6, align 4
  %8 = load i32, ptr %5, align 4
  %9 = load i32, ptr %6, align 4
  %10 = icmp ne i32 %8, %9
  %11 = zext i1 %10 to i32
  store i32 %11, ptr %7, align 4
  %12 = load i32, ptr @debug, align 4
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %17, label %14

14:                                               ; preds = %3
  %15 = load i32, ptr %7, align 4
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %22

17:                                               ; preds = %14, %3
  %18 = load ptr, ptr %4, align 8
  %19 = load i32, ptr %5, align 4
  %20 = load i32, ptr %6, align 4
  %21 = call i32 (ptr, ...) @printf(ptr noundef @.str.17, ptr noundef %18, i32 noundef %19, i32 noundef %20)
  br label %22

22:                                               ; preds = %17, %14
  %23 = load i32, ptr %7, align 4
  %24 = load i32, ptr @nfailed, align 4
  %25 = add nsw i32 %24, %23
  store i32 %25, ptr @nfailed, align 4
  ret void
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
