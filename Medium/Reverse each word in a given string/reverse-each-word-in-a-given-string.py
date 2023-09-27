#User function Template for python3

class Solution:
    def reverseWords(self, s):
        x = s.split(".")
        z=""
        for i in x:
            z = z + i[::-1]+"."
        s=z[:len(z)-1]
        return s




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.reverseWords(s)
        print(ans)
# } Driver Code Ends