//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:
	
	int findMaximum(int a[], int n)
	{
	    int l,h,m;
	    l=0;h=(n-1);
	    while(l<=h)
	    {
	        m = l+(h-l)/2;
	        if((a[m]>a[m+1]) && (a[m]>a[m-1]))
	            return a[m];
	        else if(a[m-1]<a[m+1])
	            l = m+1;
	        else
	            h = m-1;
	           
	    }
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
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends