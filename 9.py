class Solution:
    def printPattern(self, N):
    	for i in range(1,N+1):
    	    for j in range(1,i+1):
    	        print("*",end="")
    	    print(" ",end="")
a=Solution()
a.printPattern(int(input()))
