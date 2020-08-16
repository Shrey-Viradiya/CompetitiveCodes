# https://codeforces.com/problemset/problem/1372/C

t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    flag=1
    for i in range(n):
        if(arr[i]!=i+1):
            if flag:
                flag=0
                ans+=1
        else:
            flag=1
    print(min(ans,2))
    