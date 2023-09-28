//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
        long long required(long long arr[], long long n, long long k) {
        long long i;
        long long m = INT_MIN;
        for(i=0;i<n;i++)
        {
            if(m < arr[i]){
                m = arr[i];
            }
        }
        if(k >= m)
            return -1;
        else
            return m-k;
        
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.required(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends