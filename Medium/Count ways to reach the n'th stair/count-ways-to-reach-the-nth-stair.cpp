//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        int mod =1e9+7;
        vector<int>output(n+1);
       output[0]=1;
       output[1]=1;
       for(int i=2;i<=n;i++){
           output[i]=(output[i-1]+output[i-2])%mod;
       }
       return output[n]%mod;
    }
};





//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends