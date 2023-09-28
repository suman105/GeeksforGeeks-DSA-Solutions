//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i;
	    int b[n],x=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] != 0)
	        {
	            b[x] = arr[i];
	            ++x;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] == 0){
	            b[x] = arr[i];
	            ++x;
	        }
	    }
	    for(i=0;i<n;i++)
	        arr[i] = b[i];
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
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends