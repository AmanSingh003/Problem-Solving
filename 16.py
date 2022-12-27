def printPattern(N):
    f=1
    r=0
    while(r>-1):
        for c in range(0,N*2-1):
            if (r>c):
                print(N-c,end="")
            else:
                if(c<(N-r)*2-1+r):
                    print(N-r,end="")
                else:
                    print((N-r)+c-((N-r)*2-1+r)+1,end="")
        print()
        if (r==N-1):
            f=-1
        r+=f

printPattern(5)
