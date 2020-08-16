# Create The Teams
# https://codeforces.com/problemset/problem/1380/C

t = int(input())

for _ in range(t):
    n , x = map(int, input().split())
    k = sorted(list(map(int, input().split())), reverse = True)

    ans = 0
    c = 0
    m = 10e10 + 1
    for i in k:
        c+=1
        m = min(m, i)
        if(m*c >= x):
            ans+=1
            c=0
            m = 10e10 + 1
    print(ans)