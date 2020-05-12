#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Apr 13 14:47:34 2020

@author: slomogangsta
"""

t=int(input())
for _ in range(t):
    n,m,k=map(int,input().split())
    a=[]
    for i in range(n):
        a.append(list(map(int,input().split())))
    answer=[]
    for i in a:
        answer.append(int(sum(i)/k))
    print(*answer)