
def checkyear(y):
    if (( y%400 == 0)or (( y%4 == 0 ) and ( y%100 != 0))):
        return 1
    else:
        return 0

def day(d, m, y):
    t = [ 0, 3, 2, 5, 0, 3,
          5, 1, 4, 6, 2, 4 ]
    y -= m < 3
    return (( y + int(y / 4) - int(y / 100)+ int(y / 400) + t[m - 1] + d) % 7)

def init():
    global arr
    count=0
    for i in range(400):
        year=i
        if checkyear(year):
            if day(1,2,year)==6:
                count+=1
        else:
            if day(1,2,year)==0 or day(1,2,year)==6 :
                count+=1
   
        arr.append(count)


arr=[]
t = int(input())
init()

for a in range(t):
    m1,y1 = map(int,input().split())
    m2,y2 = map(int,input().split())
   

    count=0
    if y1==y2:
        if m1<=2 and m2>=2:
            if checkyear(y1):
                if day(1,2,y1)==6:
                    count+=1
            else:
                if day(1,2,y1)==0 or day(1,2,y1)==6 :
                    count+=1
            print(count)
        else:
            print("0")
    else:
        if m1<=2:
            y1-=1
        if m2<2:
            y2-=1
        result1=y1%400
        x=101*int(y1/400)
        result2=y2%400
        y=101*int(y2/400)


        print((arr[result2]+y)-(arr[result1]+x))