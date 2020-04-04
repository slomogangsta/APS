#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Mar 24 18:46:32 2020

@author: slomogangsta
"""

n=list(map(int,input().split()))

r=[0,0,0]

r[2] = n[0]/n[2]

r[0]=1

r[1] = (n[3]*r[2])/n[1]

print(r)
