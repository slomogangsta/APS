t = int(input())
for i in range(0,t):
    sum=int(0)
    n = int(input())
    arr = list(map(int,input().split()))
    arr1= list(map(int,input().split()))
    arr = sorted(arr)
    arr1 = sorted(arr1)
    #print(arr)
    #print(arr1)
    for k in range(0,n):
        if arr[k]<arr1[k]:
            sum+=arr[k]
        else:
            sum+=arr1[k]
    print(sum)
