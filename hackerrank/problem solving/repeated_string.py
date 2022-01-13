import math
import os
import random
import re
import sys



def repeatedString(s, n):
    c=0
    for i in s:
        if (i=='a'):
            c+=1
    k =n//(len(s))
    l=n%(len(s))
    num=k*c
    for j in range(0,l):
        if s[j]=='a':
            num+=1
    return num
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input().strip())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
