# https://codeforces.com/problemset/problem/1393/B

n = int(input())

planks = [0] * 100001
def update(k):
    planks[int(k)]+=1

a = list(map(update, input().split()))
q = int(input())
# print(planks[:10])
for _ in range(q):
    i, j = input().split()
    j = int(j)
    if i == '+':
        planks[j] += 1
    else:
        planks[j] -= 1
    temp = sorted(planks, reverse=True)[:3]
    try:
        if temp[0] >= 8:
            print("YES")
        elif (temp[0] >= 6 and temp[1] >= 2) or (temp[0] >= 4 and temp[1] >= 4):
            print("YES")
        elif temp[0] >= 4 and temp[1] >= 2 and temp[2] >= 2:
            print("YES")
        else:
            print("NO")
    except IndexError:
        print("NO")
    
    