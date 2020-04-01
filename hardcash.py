# -*- coding: utf-8 -*-
"""
Created on Fri Feb 14 10:12:14 2020

@author: asus
"""
t = int(input())
for i in range(0,t):
    s=0
    n,k= map(int,input().split())
    arr = list(map(int,input().split()))
    for i in range(0,n):
        s+=arr[i]
    print(s%k)
        

