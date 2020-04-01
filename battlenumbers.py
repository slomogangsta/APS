import math
def negativeproduct(arr,n):
    pos = 0
    neg = 0
    for i in range(n):
        if(arr[i]>0):
            pos += 1
        if(arr[i]<0):
            neg += 1
    result = int(math.pow(2,pos))
    if (neg>0):
        result *= int(math.pow(2,neg-1))
    else:
        result = 0
   
    return result
   
t = int(input())
for _ in range(t):
    k = int(input())
    arr = list(map(int,input().split()))
    print(negativeproduct(arr,k))