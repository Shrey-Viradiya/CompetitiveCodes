 # Make It Good

t = int(input())

for _ in range(t):
    k = int(input())
    l = list(map(int,input().split()))

    i = k-1
    while (i>0 and l[i-1] >= l[i]):
        i-=1
    while (i>0 and l[i-1] <= l[i]):
        i-=1
    print(i)
