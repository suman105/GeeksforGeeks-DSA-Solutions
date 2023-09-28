//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        int s=0;
        int c=0;
        sort(arr.begin(),arr.end());
        for(auto i = arr.begin() ; i != arr.end() ; ++i)
        {
            if( (s + *i) <= K)  
            {
                s = s + *i;
                ++c;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends