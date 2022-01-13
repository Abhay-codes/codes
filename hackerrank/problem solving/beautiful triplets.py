import math
import os
import random
import re
import sys



def beautifulTriplets(d, arr):
    c=0
    for i  in range(len(arr)):
        a=d+arr[i]
        b=2*d+arr[i]
        if (a in arr[i+1::] and b in arr[i+1::]):
            c+=1
    return c

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    d = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = beautifulTriplets(d, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
