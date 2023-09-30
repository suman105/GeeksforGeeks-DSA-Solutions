//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
	int maxProduct(int arr[], int n) 
	{
	    int m1=INT_MIN,m2=INT_MIN;
	    int index=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>m1){
	            m1=arr[i];
	            index=i;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(i!=index)    if(arr[i]>m2 && arr[i]<=m1)  m2=arr[i];
	    }
	    return m1*m2;
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
