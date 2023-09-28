//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int a[], int n , int x )
    {
        vector<int> v;
        int i=0,j=n-1;
        int mid;
        long res=-1;
        
        while(i<=j)
        {
            mid = (i+j)/2;
            if(a[mid]==x){
                res=mid;
                j=mid-1;
            }
            else if(a[mid]<x)
                i=mid+1;
            else
                j=mid-1;
        }
        v.push_back(res);
        i=0;j=n-1;
         while(i<=j)
        {
            mid = (i+j)/2;
            if(a[mid]==x){
                res=mid;
                i=mid+1;
            }
            else if(a[mid]<x)
                i=mid+1;
            else
                j=mid-1;
        }
        v.push_back(res);
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends