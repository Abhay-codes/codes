import math
import os
import random
import re
import sys



def beautifulTriplets(d, arr):
    c=0
    for i  in range(len(arr)):
        for j in range(i+1,len(arr)):
            if(arr[j]-arr[i]==d):
                for k in range(j+1,len(arr)):
                    if(arr[k]-arr[j]==d):
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
