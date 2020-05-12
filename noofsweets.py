#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Apr  8 10:43:27 2020

@author: slomogangsta


t =int(input())
l,r = map(int,input().split())
count = 1
for _ in range(1,t):
    l1,r1 = map(int,input().split())
    
    if (l1 > r or r1 < l):
        continue
    else:
        count=count+1
        l = max(l, l1) 
        r = min(r, r1) 

print(min(l,r),count,sep=' ')
"""

n = int(input())
s1=[]
s2=[]
for i in range(0,n):
    l,r= map(int,input().split())
    s1.append(int(l))
    s2.append(int(r))

s1.sort()
s2.sort()

ans = 1; 
count = 1; 
time = s1[0]; 
i = 1; 
j = 0; 

while (i < n and j < n): 

	if (s1[i] <= s2[j]): 
		ans = ans + 1; 

		if(ans > count): 
			count = ans; 
			time = s1[i]; 

		i = i + 1; 
	
	else: 
		ans = ans - 1; 
		j = j + 1; 
	
print( time,count,sep=' ') 