m =int(input())
n=int(input())
l1=list(map(int,input().split()))
l2=list(map(int,input().split()))
l1=l1+l2
l1.sort()
l=len(l1)
if(l%2==0):
    x=l//2
    y=l//2-1
    sm = (l1[x]+l1[y])/2

else:
    x=((l+1)//2)-1
    sm = l1[x]
print(sm)