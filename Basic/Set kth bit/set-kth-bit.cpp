//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int power(int a,int n)
    {
        int ans = 1;
        while (n > 0) {
     
            int last_bit = (n & 1);
            if (last_bit) {
                ans = ans * a;
            }
            a = a * a;
            n = n >> 1;
        }
        return ans;
    }
    int setKthBit(int n, int K)
    {
        int binaryNum[32];
        
        int i = 0,k=0;
        while (n > 0) {
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        binaryNum[K]=1;
        int sum=0;
        for(int j=0;j<i;j++)
            sum+=binaryNum[j]*power(2,j);
        return sum;
    }
    
};






//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends