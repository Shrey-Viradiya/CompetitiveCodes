# https://codeforces.com/contest/1399/problem/D

t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    pos0 = []
    pos1 = []
    ans =''

    for char in s:
        newpos = len(pos0) + len(pos1)

        if(char == '0'):
            if not pos1:
                pos0.append(newpos)
            else:
                newpos = pos1.pop()
                pos0.append(newpos)
        else:
            if not pos0:
                pos1.append(newpos)
            else:
                newpos = pos0.pop()
                pos1.append(newpos)
        ans += str(newpos+1) + ' '
    
    print(len(pos0) + len(pos1))
    print(ans)