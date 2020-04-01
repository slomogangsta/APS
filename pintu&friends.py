# -*- coding: utf-8 -*-
"""
Created on Mon Mar 16 13:40:41 2020

@author: asus
"""

t=int(input())
for i in range(0,t):
    n,m=map(int,input().split())
    pool=[0 for _ in range(0,m+1)]
    f=list(map(int,input().split()))
    p=list(map(int,input().split()))
    fruits=set(f)
    pool={j:0 for j in fruits}
    for j in range(0,n):
        pool[f[j]]+=p[j]
    print(min(pool.values()))