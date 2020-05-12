#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Apr 13 14:09:32 2020

@author: slomogangsta
"""

matrix={'|': [
            [(0,0)],
            [(0,1),(1,0),(1,2),(2,1),(1,3),(3,1),(3,2),(2,3),(1,1)],
            [(0,2),(2,0),(2,2)],
            [(0,3),(3,0),(3,3)]
            ],
            
        '&':[[(0,0),(0,1),(1,0),(0,2),(2,0),(3,0),(0,3),(2,3),(3,2)],
            [(1,1)],
            [(2,1),(1,2),(2,2)],
            [(3,1),(1,3),(3,3)]],
            
        '^':[[(0,0),(1,1),(2,2),(3,3)],
            [(1,0),(3,2),(2,3),(0,1)],
            [(0,2),(2,0),(1,3),(3,1)],
            [(0,3),(3,0),(1,2),(2,1)]] }



def rank(op): 
      
    if (op == '|'): 
        return 1
    if (op == '^'): 
        return 2
    if (op == '&'):
        return 3
    return 0
 
def operation(a, b, op): 
    global matrix
    answer = []
    if (op == "|"):
        for i in matrix[op]:
            sum1=0
            for j in i:
                prod = a[j[0]] * b[j[1]]
                sum1+=prod
            answer.append(sum1)
    elif (op == "&"):
        for i in matrix[op]:
            sum1=0
            for j in i:
                prod = a[j[0]] * b[j[1]]
                sum1+=prod
            answer.append(sum1)
    elif (op == "^"):
        for i in matrix[op]:
            sum1=0
            for j in i:
                prod = a[j[0]] * b[j[1]]
                sum1+=prod
            answer.append(sum1)
    return answer
            
            
           

def evaluateExpression(tok): 
      
    vst = [] 
    ost = [] 
    i = 0
      
    while i < len(tok): 
         
        if tok[i] == '(': 
            ost.append(tok[i]) 
          
        elif (tok[i] == '#'): 
            value = [1,1,1,1]
            vst.append(value) 

        elif tok[i] == ')': 
          
            while len(ost) != 0 and ost[-1] != '(': 
              
                v2 = vst.pop() 
                v1 = vst.pop() 
                op = ost.pop() 
                vst.append(operation(v1, v2, op)) 
          
            ost.pop() 
     
        else: 
            while (len(ost) != 0 and rank(ost[-1]) >= rank(tok[i])): 
                v2 = vst.pop() 
                v1 = vst.pop() 
                op = ost.pop() 
                vst.append(operation(v1, v2, op)) 
              
            ost.append(tok[i]) 
        i += 1

    while len(ost) != 0: 
          
        v2 = vst.pop() 
        v1 = vst.pop() 
        op = ost.pop() 
                  
        vst.append(operation(v1, v2, op)) 
        
    return vst[-1] 

def powerc(num, n, m):
    num%=m;
    prod=1;
    while(n!=0):
        if((n&1)==1):
            prod=(prod*num)%m;
        num=(num*num)%m;
        n>>=1;
    print(prod)
    return prod;   

  
t = int(input())
for _ in range(t):
    expression = input()
    result = evaluateExpression(expression)
    print(result)
    m = expression.count('#')
    m = 4**m
    moderator = 998244353
    for i in range(len(result)):
        result[i]= result[i]*powerc(m,moderator-2,moderator)%moderator
    print(*result)
