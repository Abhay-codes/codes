import math
import os
import random
import re
import sys

n,t =input().split()
n=int(n)
t=int(t)
w=list(map(int,input().split()))

for _ in range(t):
    v=0
    i,j =list(map(int,input().split()))
    
    mn =w[i]
    for k in range(i,j+1):
        
        
        if(w[k]<mn):
            
            mn=w[k]
    print(mn)
    
    
