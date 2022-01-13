t=int(input())
for _ in range(t):
    n=int(input())
    i=1
    r=0
    while(n>=i):
        n-=i
        r+=1
        i+=1
    print(r)
        
        
