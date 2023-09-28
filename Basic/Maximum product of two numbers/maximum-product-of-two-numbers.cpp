//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
	int maxProduct(int a[], int n) {
	    int i,m=a[0],j;
        for(i=1;i<n;i++){
            if(a[i] > m){
                m = a[i];
            }
        }
        int c[m+1];
        for(i=0;i < m+1;i++){
            c[i] = 0;
        }
        
        for(i=0;i<n;i++){
            c[a[i]]++;
        }
        i=0,j=0;
        while(i < m+1)
         {
         	if(c[i] > 0)
         	{
         		a[j] = i;
    			 c[i]--;++j;	
    		}
    		else
    		{
    			++i;
    		}
    	 }
    	 return a[n-1]*a[n-2];
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