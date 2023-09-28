//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int arr[],int n)
    {
        vector<int> v,positive,negative;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)    positive.push_back(arr[i]);
            else    negative.push_back(arr[i]);
        }
        int pos=0,neg=0;
        while(pos<positive.size() && neg<negative.size())
        {
            v.push_back(positive[pos++]);
            v.push_back(negative[neg++]);
        }
        return v;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends