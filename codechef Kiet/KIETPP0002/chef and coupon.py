for _ in range(int(input())):
    d,c=map(int,input().split())
    a1,a2,a3=map(int,input().split())
    b1,b2,b3=map(int,input().split())
    a=a1+a2+a3
    b=b1+b2+b3
    if(a<150 and b <150):
        print("no")
        continue
    if(a>=150 and b>=150):
        if(c<2*d):
            print("yes")
            continue
        else:
            print("no")
            continue
    if(a<150 or b<150):
        
        if(c<d):
            print("yes")
        else:
            print("no")
    

