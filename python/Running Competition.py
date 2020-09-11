# Running Competition
# https://codeforces.com/problemset/problem/1398/G

n,x,y = map(int, input().split())
a = list(map(int,input().split()))
a = a[::-1]
# print(a)
q = int(input())
l = list(map(int,input().split()))

s = []
for i in range(0, len(a)):
    for j in range(i+1, len(a)):
        s.append( 2*(a[i] - a[j]) + 2*y)

s.sort(reverse = True)

for _ in l:
    for k in s:
        if _ % k == 0:
            print(k)
            break
    else:
        print(-1)

