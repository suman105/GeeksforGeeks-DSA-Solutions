//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:	
	int count(int a[], int n, int x) 
	{
	    vector<int> v(a,a+n);
	    auto l = lower_bound(v.begin(),v.end(),x);
	    auto h = upper_bound(v.begin(),v.end(),x);
	    return h-l;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends