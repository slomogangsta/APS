#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Apr  5 11:57:10 2020

@author: slomogangsta
"""
import numpy as np
t = int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    sub=[]
    count=0
    for i in range(n+1):
        for j in range(i+1,n+1):
            sub.append(np.prod(a[i:j]))
    #print(sub)
    sub=list(dict.fromkeys(sub))
    #print(sub)
    for i in range(len(sub)):       
        if(sub[i]%4!=2):
            count=count+1
    print(count)