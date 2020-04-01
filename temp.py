# -*- coding: utf-8 -*-
"""
Created on Fri Feb 14 11:43:15 2020

@author: asus
"""

import math
t=int(input())
for _ in range(t):
    n,s=map(int,input().split(' '))
    array=list(map(int,input().split(' ')))
    a=list(array)
    res=[]
    flag=0
    for item in reversed(a):
        if s<0:
            flag=1
            break
        if s%item == 0:
            res.append((s/item) - 1)
            s=s-(((s/item) - 1)*item)
        else:
            res.append((math.ceil(s/item)))
            s=s-((math.ceil(s/item))*item)
        if s<0:
            flag=1
            break
    if flag==0:
        print("NO")
    else:
        print("YES", end=" ")
        for _ in range(n-len(res)):
            res.append(0)
        res=reversed(res)
        res=list(map(int,res))
        print(*res)