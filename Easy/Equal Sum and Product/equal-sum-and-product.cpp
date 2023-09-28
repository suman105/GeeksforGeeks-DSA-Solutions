//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int a[], int n) 
	{
	    int i,j,sum=0,p=1,c=0;
	    for(i=0;i<n-1;i++)
	    {
	        sum=a[i];
	        p=a[i];
	        for(j=i+1;j<n;j++)
	        {
	            sum+=a[j];
	            p=p*a[j];
	            if(sum==p)
	            {
	                ++c;
	            }
	        }
	    }
	    return c+n;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends