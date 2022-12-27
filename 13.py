'''def pattern(n,l=[],a=0):
    l.append(n)
    if (n<=0):
        a=1
    if (a==0):
        n=n-5
        return pattern(n,l,a)
    else:
        n+=5
        if(n==l[0]):
            l.append(n)
            return l
        return pattern(n,l,a)'''
def pattern(n):
    l=[n,]
    i=1
    f=1
    while True:
        l.append(n-(i*5))
        if (i==0):
            break
        elif(n-(i*5)<0):
            f=-1
            i-=1
        else:
            if (f==1):
                i+=1
            else:
                i-=1
    return l



l=pattern(10)
for i in l:
    print(i,end=" ")
