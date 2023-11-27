N = int(input())
s = [int(input()) for i in range(N)]
for k in s:
    m = s.pop(0)
    print(max(s))
    s.append(m)
