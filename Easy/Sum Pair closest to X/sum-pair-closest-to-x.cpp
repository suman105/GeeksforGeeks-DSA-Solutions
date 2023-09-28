//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        vector<int> v;
        int i=0,j=arr.size()-1;
        int l,m,diff=INT_MAX;
        while(i<j)
        {
            if(abs(arr[i]+arr[j]-x) < diff)
            {
                l=i;
                m=j;
                diff = abs(arr[i]+arr[j]-x);
                if(diff==0)
                {
                    v.push_back(arr[l]);
                    v.push_back(arr[m]);
                    return v;
                }
            }
            if(arr[i]+arr[j] > x)   --j;
            else    ++i;
        }
        v.push_back(arr[l]);
        v.push_back(arr[m]);
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends