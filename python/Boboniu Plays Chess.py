# Boboniu Plays Chess
# https://codeforces.com/problemset/problem/1395/B

n, m, sx, sy = map(int, input().split())

print(sx, sy)
for i in range(2,sy):
    print(sx, i)
for i in range(sy + 1, m+1):
    print(sx, i)
print(sx, 1)

rev = 0
for r in range(1,n+1):
    if r == sx:
        continue
    else:
        if rev:
            for c in range(m,0,-1):
                print(r, c)
            rev = 0
        else:
            for c in range(1, m+1):
                print(r, c)
            rev = 1
