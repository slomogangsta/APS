from collections import defaultdict
t = int(input())
profit=[]

for a in range(0,t):
    
    arr=[[0 for i in range(4)] for i in range(4)]
    n= int(input())
    dic=defaultdict(int)
    dic = {'A':0,'B':1,'C':2,'D':3}
    price = [25,50,75,100]
    
    if n==0:
        print(-400)
        profit.append(-400)
        
    else:
        for i in range(0,n):
            s,t=map(str,input().split())
            t=int(t)
            arr[dic[s]][(t//3)-1]+=1

        los=list(zip(*arr))
        los=[list(los[i])for i in range(4)]
        cols=[]
        for i in range(4):
            for j in range(4):
                if j!=i:
                    for k in range(4):
                        if k!=i and k!=j:
                            for l in range(4):
                                if l!=k and l!=j and l!=i:
                                    cols.append(sorted([los[0][i],los[1][j],los[2][k],los[3][l]]))
        #print(cols)

        result=[]
        for i in cols:
            sum1=0
            for j in range(4):
                if i[j]==0:
                    sum1=sum1-100
                else:
                    sum1=sum1+(i[j]*price[j])
            result.append(sum1)
        print(max(result))
        profit.append(max(result))
print(sum(profit))
    

