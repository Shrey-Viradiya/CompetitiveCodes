# https://codeforces.com/problemset/problem/1399/C

t = int(input())

for _ in range(t):
    n = int(input())
    sums = [set() for i in range(101)]
    x = list(map(int, input().split()))
    for i in range(len(x)):
        for j in range(i+1, len(x)):
            w = x[i] + x[j]
            if i not in sums[w] and j not in sums[w]:
                sums[w].add(i)
                sums[w].add(j)
    print(max(len(i) for i in sums)//2)