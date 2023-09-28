//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int a[], int n, int sum)
    {
        int i,j,c=0;
        j = n-1;
        while(i<j)
        {
            if((a[i]+a[j]) == sum)
            {
                ++c;++i;--j;
            }
            else if((a[i]+a[j]) > sum)
                j = j-1;
            else
                i++;
        }
        if( c == 0)
            return -1;
        return c;
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

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends