#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Apr 12 18:52:43 2020

@author: slomogangsta
"""

t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    codd=0
    count=0
    count1=0
    temp =0
    right = 0
    left = -1
    for i in range(n):
        if(a[i]%2==0):
            count = count+(codd*(codd+1)//2)
            codd=0
        else:
            codd = codd+1
    count = count+(codd*(codd+1)//2)
    for j in range(n):
        if(a[j]%4==0):
            count1 = count1+((n-j)+((n-j)*(j-temp)))
            left=-1
            right=0
            temp=j+1
        elif(a[j]%2==0):
            if(left==-1):
                left=j
            if(right==0 and j>left):
                right=j
            if(left>-1 and right>0):
                count1 = count1+((n-right)+((n-right)*(left-temp)))
                temp=left+1
                left=right
                right=0
    print(count+count1)
            