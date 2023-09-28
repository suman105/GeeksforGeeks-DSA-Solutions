//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int a[], int n) {
	    int i,c=1,m=a[0];
	    for(i=1;i<n;i++)
	    {
	        if(m<a[i])
	        {
	            m = a[i];
	            ++c;
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        Solution ob;
        auto ans = ob.countBuildings(h, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends