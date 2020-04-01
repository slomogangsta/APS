# -*- coding: utf-8 -*-
"""
Created on Mon Mar 16 14:09:00 2020

@author: asus
"""
t=int(input())
diagonals=[[0,0],[1,1],[2,2],[3,3],[4,4],[5,5],[6,6],[7,7],[8,8]]

arr = [[1,1],[2,2],[3,1],[1,3],[2,2],[3,3],[5,1],[1,5],[3,3],[4,4],[7,1],
       [1,7],[4,4],[5,5],[8,2],[2,8],[5,5],[6,6],[8,4],[4,8],[6,6],[7,7],
       [8,6],[6,8],[7,7],[8,8]]

for i in range(t):
    row,col=map(int,input().split())
    print(27)
    const=(row+col)//2
    print(diagonals[const][0],diagonals[const][1])
    for j in range(0,26):
        print(*arr[j])
    '''print(1,1)
    print(2,2)
    print(3,1)
    print(1,3)
    print(2,2)
    print(3,3)
    print(5,1)
    print(1,5)
    print(3,3)
    print(4,4)
    print(7,1)
    print(1,7)
    print(4,4)
    print(5,5)
    print(8,2)
    print(2,8)
    print(5,5)
    print(6,6)
    print(8,4)
    print(4,8)
    print(6,6)
    print(7,7)
    print(8,6)
    print(6,8)
    print(7,7)
    print(8,8)'''