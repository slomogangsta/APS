#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 15:11:32 2020

@author: slomogangsta
"""

n = int(input())
c = list(map(int, input().rstrip().split()))
i=0
cnt = 0
while(i<n-1):
    flag=0
    flag1=0
    flag2 =1
    if(i+2<n):
        flag=1
    if(i+1<n):
        flag1=1
    if(flag):
        if(c[i+2]!=1):
            flag2=0
            cnt=cnt+1
            i=i+2
            #print(i)
    if(flag2):
        cnt=cnt+1
        i=i+1
        #print(i)
print(cnt)
        