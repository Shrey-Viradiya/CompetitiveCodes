# Prefix Flip
# https://codeforces.com/problemset/problem/1381/A1

def rev(s):
    ans = ''
    for _ in s:
        if _ == '0':
            ans += '1'
        else:
            ans += '0'
    return ans

t = int(input())

for _ in range(t):
    n = int(input())
    a = input()
    b = input()
    count = 0
    prefix = []
    for i in range(n):
        if a[i] != b[i]:
            count += 3
            prefix += [i+1,1,i+1]
    print(str(count) + ' ' + ' '.join(map(str, prefix)))