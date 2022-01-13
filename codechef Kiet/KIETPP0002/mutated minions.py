# cook your dish here
for _ in range(int(input())):
    c=0
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    for i in l :
        if((i+k)%7==0):
            c+=1
    print(c)
        
