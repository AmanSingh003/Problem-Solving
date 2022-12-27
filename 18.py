'''s="Backbanchers"
print(type(s))
for i in s:
    print("."*i+s[i:])
'''
def triDownwards(S):
        s=""
        for i in range(0,len(S)):
            s+="."*i+S[i:]
        return s

s="Backbanchers"
print(triDownwards(s))
