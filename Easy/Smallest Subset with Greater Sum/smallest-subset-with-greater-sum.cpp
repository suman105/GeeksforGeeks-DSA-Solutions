//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &a,int n)
    {
        if(n==1)
            return 1;
        
        sort(a.begin(),a.end());
        
        long s=0,sum=0;
        
        for(int i=0;i<n;i++)
            s += a[i];
        for(int j=(n-1);j>=0;--j)
        {
            sum += a[j];
            
            if(sum > (s-sum))
                return n-j;
        }
        return n;
    }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends