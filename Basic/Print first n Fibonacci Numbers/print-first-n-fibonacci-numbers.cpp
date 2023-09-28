//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    vector<long long> printFibb(int n) 
    {
        long long dp[n];
        dp[0]=1;
        dp[1]=1;
        vector<long long> v;
        v.push_back(dp[0]);
        if(n>=2)    v.push_back(dp[1]);
        for(int i=2;i<n;i++){
            dp[i] = dp[i-1] + dp[i-2];
            v.push_back(dp[i]);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends