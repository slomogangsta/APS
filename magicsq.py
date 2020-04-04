#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Mar 25 20:37:46 2020

@author: slomogangsta
"""

pre = [
        [[8, 1, 6], [3, 5, 7], [4, 9, 2]],
        [[6, 1, 8], [7, 5, 3], [2, 9, 4]],
        [[4, 9, 2], [3, 5, 7], [8, 1, 6]],
        [[2, 9, 4], [7, 5, 3], [6, 1, 8]], 
        [[8, 3, 4], [1, 5, 9], [6, 7, 2]],
        [[4, 3, 8], [9, 5, 1], [2, 7, 6]], 
        [[6, 7, 2], [1, 5, 9], [8, 3, 4]], 
        [[2, 7, 6], [9, 5, 1], [4, 3, 8]],
        ]
s=[]
for i in range(3):          # A for loop for row entries 
    a =[] 
    for j in range(3):      # A for loop for column entries 
         a.append(int(input())) 
    s.append(a) 
print(s)

totals = []
for p in pre:
    total = 0
    for p_row, s_row in zip(p, s):
        for i, j in zip(p_row, s_row):
            if not i == j:
                total += max([i, j]) - min([i, j])
    totals.append(total)
print(min(totals))