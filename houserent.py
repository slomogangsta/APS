def maxSubArraySum(a,size): 
      
    max_so_far =a[0] 
    curr_max = a[0] 
      
    for i in range(1,size): 
        curr_max = max(a[i], curr_max + a[i]) 
        max_so_far = max(max_so_far,curr_max) 
          
    return max_so_far 

n,s,y= map(int,input().split())
arr = list(map(int,input().split()))

print(arr[0])

res = maxSubArraySum(arr,n)
if(res<s):
    sum = res
    for i in range(0,y):
        sum*=2
    print(sum-res)
else:
    sum = s
    for i in range(0,y):
        sum*=2
    print(sum-s)