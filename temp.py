n=int(input())
arr=list(map(int,input().split()))

while(len(arr)):
    print(len(arr))
    m = min(arr)
    arr = list(filter((m).__ne__, arr))
        