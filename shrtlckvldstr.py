#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Apr 21 10:18:56 2020

@author: slomogangsta
"""

s=input()
count=0
flag=0
flag1=1
d=dict()
for i in s:
    d[i]=int(s.count(i))
mi= min(d.values())
ma = max(d.values())
#print(d)
#print(d.values())
for i in d.values():
    if(i>mi):
        count=count+1
    if(count>1):
        flag=1
        break

