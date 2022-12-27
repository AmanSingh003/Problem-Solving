class Solution:
	def numberPattern(self, n):
		l=[]
		for i in range(1,n+1):
		    s=""
		    for x in range(1,i+1):
		        s+=str(x)
		    for y in range(i-1,0,-1):
		        s+=str(y)
		    l.append(s)
        return l
