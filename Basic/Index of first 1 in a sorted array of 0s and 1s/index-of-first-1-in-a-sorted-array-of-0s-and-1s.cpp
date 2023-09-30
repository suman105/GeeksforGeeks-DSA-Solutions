//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int i=0,j=n-1,c=-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(a[mid]==1){
                c=mid;
                j=mid-1;
            }
            else    i=mid+1;
        }
        return (c==-1) ? -1:c;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends
