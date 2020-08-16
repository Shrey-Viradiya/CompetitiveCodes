# Restore the Permutation by Merger

t = int(input())

for _ in range(t):
    k = int(input())
    n = list(map(int, input().split(' ')))
    # print(n)
    m = [[__+1, 0] for __ in range(k)]
    for i,j in enumerate(n):
        m[j - 1][1] += (2*k) - i
    # print(m)
    res = sorted(m, key = lambda x:x[1], reverse = True)
    # print(res)
    for i in res:
        print(i[0], end=' ')
    print()
