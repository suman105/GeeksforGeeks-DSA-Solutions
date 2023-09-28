//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> m;
        int sum=0,max_len=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(A[i]==0 && max_len==0)
                max_len=1;
            if(sum==0)
                max_len = i+1;
            
            if(m.find(sum)!=m.end())
                max_len = max(max_len,i-m[sum]);
            else
                m[sum]=i;
        }
        return max_len;
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends