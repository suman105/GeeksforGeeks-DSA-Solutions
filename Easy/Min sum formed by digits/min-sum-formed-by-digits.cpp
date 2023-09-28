//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        int i;
        long long s=0,m=0;
        sort(arr , arr + n);
        for(i=0;i<n;i++)
        {
            if(i%2 == 0)
                s = s*10 + arr[i];
            else
                m = m*10 + arr[i];
        }
        return s+m;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends