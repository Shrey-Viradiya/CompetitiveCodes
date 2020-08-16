# Neighbor Grid
# https://codeforces.com/problemset/problem/1375/B

for _ in " "*int(input()):
    a,b=map(int,input().split());n=9
    z=[list(map(int,input().split())) for _ in " "*a]
    for i in range(a):
        for j in range(b):
            ud=2;lr=2
            if i==0 or i==a-1:lr-=1
            if j==0 or j==b-1:ud-=1
            if lr+ud<z[i][j]:n=0;break
            else:z[i][j]=lr+ud
    if n:
        print("YES")
        for i in range(a):
            print(*z[i])
    else:print("NO")


