#User function Template for python3
class Solution:
    def findSum(self, X, Y):
        x = int(X)
        y = int(Y)
        c = x+y
        return str(c)




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		x = input()
		y = input()
		ob = Solution()	
		answer = ob.findSum(x,y)
		
		print(answer)


# } Driver Code Ends