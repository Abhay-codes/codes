for _ in range(int(input())):
    x,y,xr,yr,d=map(int,input().split())
    if(xr*d<=x and yr*d<=y):
        print("yes")
    else:
        print("no")
    
