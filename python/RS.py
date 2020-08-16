# https://codeforces.com/contest/1399/problem/A

t = int(input())
for _ in range(t):
    n = int(input())
    x = list(set(map(int, input().split())))
    
    if len(x) == 1:
        print("YES")
    else:
        mx = max(x)
        mn = min(x) - 1
        if sum(x) != ( (mx * (mx+1) / 2) - (mn * (mn+1) / 2)):
            print("NO")
        else:
            print("YES")
