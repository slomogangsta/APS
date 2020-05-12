#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Apr 13 15:09:01 2020

@author: slomogangsta
"""

from collections import defaultdict 

class Graph: 
   
    def __init__(self,v): 
        self.v= v  
        self.graph = defaultdict(list)  

    def addEdge(self,u,v): 
        self.graph[u].append(v) 
   
    def printAllPathsUtil(self, u, v, visited, path): 

        visited[u]= True
        path.append(u) 

        if (u ==v): 
            print(path)
        else: 
            # If current vertex is not destination 
            #Recur for all the v adjacent to this vertex 
            for i in self.graph[u]: 
                if visited[i]==False: 
                    self.printAllPathsUtil(i, v, visited, path) 
                      
        # Remove current vertex from path[] and mark it as unvisited 
        path.pop() 
        visited[u]= False
   
   
    # Prints all paths from 's' to 'd' 
    def printAllPaths(self,u, v): 
  
        # Mark all the v as not visited 
        visited =[False]*(self.v) 
  
        # Create an array to store paths 
        path = [] 
  
        # Call the recursive helper function to print all paths 
        self.printAllPathsUtil(u, v,visited, path) 
   
   
   
# Create a graph given in the above diagram 
g = Graph(4) 
g.addEdge(0, 1) 
g.addEdge(0, 2) 
g.addEdge(0, 3) 
g.addEdge(2, 0) 
g.addEdge(2, 1) 
g.addEdge(1, 3) 
   
u = 2 ; v = 3
print ("Following are all different paths from %d to %d :" %(u, v)) 
g.printAllPaths(u, v) 
#This code is contributed by Neelam Yadav 