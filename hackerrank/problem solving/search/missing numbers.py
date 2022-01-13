import math
import os
import random
import re
import sys

n=int(input())
l1=list(map(int,input().split()))
m=int(input())
l2=list(map(int,input().split()))
l=[]
l3=[]
for i in range(len(l2)):
    if(l2[i] not in l3):
        c1=l2.count(l2[i])
        c2=l1.count(l2[i])
        l3.append(l2[i])
        if(c1>c2):
            l.append(l2[i])
l.sort()
for i in l:
    print(i,end=" ")
    