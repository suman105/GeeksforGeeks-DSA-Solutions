
# User function Template for python3

class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        # code here 
        l = S.split(".")
        a=""
        k = l[::-1]
        for i in range(0,len(k)):
            a = a + str(k[i])
            
            if i!=(len(k)-1):
                a = a + "."
        return a




#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        obj = Solution()
        print(obj.reverseWords(s))

# } Driver Code Ends