#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Apr  5 11:57:10 2020

@author: slomogangsta
"""
t = int(input())
for _ in range(t): 
    n=int(input())
    a= list(map(int,input().split()))
    flag=0
    flag1=1
    oc = a.count(1)
    zc = a.count(0)
    if(oc<=1):
        #print(oc)
        print("YES")
        flag1=0
        
    if(zc==0 and oc>1):
        flag1=0
        print("NO")
        
    if(flag1):
        count=0
        ix = a.index(1)
        print(ix)
        for i in range(ix+1,len(a)):
            if a[i]==0:
                count+=1
           
            if a[i]==1:
                count+=1
                if count<6:
                    flag=1
                    print("NO")
                    break
                count = 0
        if flag==0:
            if i==len(a)-1:
                print("YES")