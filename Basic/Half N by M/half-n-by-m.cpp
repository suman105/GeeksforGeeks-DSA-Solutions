//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int mthHalf(int n, int m)
    {
        int i;
        for(i=0;i<m-1;i++)  n = n/2;
        return n;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.mthHalf(N, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends