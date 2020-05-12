#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr 11 18:57:50 2020

@author: slomogangsta
"""
import math
t = int(input())
for _ in range(t):
    x,k = map(int,input().split())
    arr=[]
    while x%2 == 0:
        arr.append(2)
        x=x//2
        
    for i in range(3, math.ceil(math.sqrt(x)), 2): 
        while x % i == 0: 
            x = x / i; 
            arr.append(i) 
        
    if x > 2: 
        arr.append(x) 
          
    if len(arr) < k: 
        print("0")
    else:
        print("1")