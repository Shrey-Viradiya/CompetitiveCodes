# Zero Remainder Array

# t = int(input())
#
# for _ in range(t):
#     n, k = list(map(int, input().split(' ')))
#     a = list(map(int, input().split(' ')))
#
#     b = list(map(lambda x: x%k, a))
#     x = 0
#     while(sum(b) != 0):
#         for i,__ in enumerate(b):
#             if (k-__) == x%k:
#                 b[i] = 0
#                 break
#         x = x+1
#     print(x)

from collections import Counter
for _ in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    d=Counter()
    for i in arr:
        if i%k!=0:
            d[k-i%k]+=1
    ma=0
    # print(d)
    for i in d:
        # print(i)
        ma=max(ma,i+d[i]*k-k+1)
        # print(ma)
    print(ma)
