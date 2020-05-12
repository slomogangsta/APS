#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr 11 18:01:24 2020

@author: slomogangsta
"""

t = int(input())
for _ in range(t): 
    n=int(input())
    a= list(map(int,input().split()))
    a.sort(reverse=True)
    for i in range(len(a)):
        if((a[i]-i)<0):
            a[i]=0
        else:
            a[i]=a[i]-i
    #print(a)
    print(sum(a)%1000000007)