#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Mar 27 19:50:14 2020

@author: slomogangsta
"""

s = input()
n = int(input())
k=n//len(s)
r=n%len(s)
s1 = s[:r]
print(s.count('a')*k+s1.count('a'))