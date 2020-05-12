t=int(input())
for _ in range(t):
    n,p = map(int,input().split())
    m1 = 101
    m2 = 101
    price = list(map(int,input().split()))
    player = list(map(int,input().split()))
    for i in range(n):
        if player[i] ==0:
            if(price[i]<m1):
                m1=price[i]
        else:
            if(price[i]<m2):
                m2=price[i]
    if((m1+m2+p)<=100):
        print("yes")
    else:
        print("no")