import math 
t = int(input())

for a in range(0,t):
    
    change=list()
    n,k= map(int,input().split())
    arr = list(map(int,input().split()))
    flag=0
    for val in reversed(arr):
        if k<0:
            flag=1
            break
        if k%val==0:
            change.append((k/val)-1)
            k=k-(((k/val)-1)*val)
        else:
            change.append((math.ceil(k/val)))
            k=k-((math.ceil(k/val))*val)
        if k<0:
            flag=1
            break
    if flag==0:
        print("NO")
    else:
        print("YES",end=" ")
        for b in range(0,n-len(change)):
            change.append(0)
        change=reversed(change)
        change=list(map(int,change))
        print(*change)
