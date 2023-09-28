//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{   
public:
    int distinctCount(int a[], int n) {
        set<int> s;
        int k=0,l;
        for(l=0;l<n;l++)
        {
            s.insert(abs(a[l]));
        }
        for( auto i = s.begin() ; i != s.end() ; i++)
        {
            ++k;
        }
        return k;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.distinctCount(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends