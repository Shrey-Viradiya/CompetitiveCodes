t = int(input())

for _ in range(t):
    n = int(input())
    m = list(map(int, input().split()))
    for i,j in enumerate(m):
        if i % 2 == 0 and j < 0:
            m[i] = 0-m[i]
        elif i %2 == 1 and j > 0:
            m[i] = 0-m[i]
        print(m[i], end = ' ')
