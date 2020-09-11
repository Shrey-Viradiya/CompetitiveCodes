for _ in range(int(input())):
    a,b,x,y,n = map(int, input().split())
    d1 , d2 = a-x,b-y
    a = [a,d1]
    b = [b,d2]
    
    if a[0] < b[0]:
        if a[1] <= n:
            a[0] -= a[1]
            n -= a[1]
            b[0] -= n
        else:
            a[0] -= n
    elif b[0] < a[0]:
        if b[1] <= n:
            b[0] -= b[1]
            n -= b[1]
            a[0] -= n
        else:
            b[0] -= n
    else:
        pass

        