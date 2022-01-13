import math
import os
import random
import re
import sys



def findMedian(arr):

    arr.sort()
    l=len(arr)
    x=((l+1)//2)-1
    return arr[x]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = findMedian(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
