#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Apr 12 14:42:05 2020

@author: slomogangsta
"""

t = int(input())

for _ in range(t):
    n=int(input())
    
    if(n==1):
        print("1")
        print("1 1")
    elif(n==2):
        print("1")
        print("2 1 2")
    elif(n==3):
        print("1")
        print("3 1 2 3")
    else:
        print(n//2)
        i=4
        print("3 1 2 3")
        while(i+1<=n):
            print("2",i,i+1,sep=' ')
            i=i+2
        if(n%2==0):
            print("1",i,sep=' ')
            