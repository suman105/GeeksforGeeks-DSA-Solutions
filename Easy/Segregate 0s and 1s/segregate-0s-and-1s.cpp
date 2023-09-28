//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{   
public:
    void segregate0and1(int a[], int n) {
        int i;
        int b[n],c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                b[c]=0;
                ++c;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                b[c]=1;
                ++c;
            }
        }
        for(i=0;i<n;i++)
        {
            a[i]=b[i];
        }
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
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends