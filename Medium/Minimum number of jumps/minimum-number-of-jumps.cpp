//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int i=0;
        if(n<2)
            return 0;
        int stepcount=0,step=0,jump=0;
        
        while(i<n-1)
        {
            step = max(step,i+arr[i]);
            if(i==stepcount)
            {
                stepcount = step;
                ++jump;
            }
            if(stepcount >= n-1)
                return jump;
            ++i;
        }
        return -1;
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends