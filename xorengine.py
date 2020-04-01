# -*- coding: utf-8 -*-
"""
Created on Mon Mar 16 13:48:35 2020

@author: asus
"""

from sys import stdin

t=int(stdin.readline())
for i in range(0,t):
    n,q=map(int,stdin.readline().split())
    arr=list(map(int,stdin.readline().split()))
    e=0
    o=0
    for j in (arr):
        bi =bin(j).replace('0b','').count('1')
        if bi%2==0:
            e+=1
        else:
            o+=1
            
    for k in range(0,q):
        d=int(stdin.readline())
        bi=bin(d).replace('0b','').count('1')
        if bi%2==0:
            print(e,o)
        else:
            print(o,e)