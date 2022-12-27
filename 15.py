def lookandsay(n):
    s="1"
    for x in range(1,n):
        ss=""
        c=1
        i=0
        while(i<len(s)):
            if (i+c<len(s)):
                if (s[i]==s[i+c]):
                    c+=1
                else:
                    ss+=str(c)+s[i]
                    i+=1+c-1
                    c=1
            else:
                ss+=str(c)+s[i]
                c=1
                i+=1+c
        #print(ss,"x= ",x)
        s=ss
    return s
            
s=lookandsay(6)
print(s)
