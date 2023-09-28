//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *nums, int n) {
        int i=0,j=n-1;
        int lsum=nums[i];
        int rsum=nums[j];
        ++i;--j;
        while(i<=j)
        {
            if(lsum==rsum && i==j)
                return "YES";
            else if(lsum>rsum){
                rsum = rsum + nums[j];
                --j;
            }
            else{
                lsum = lsum + nums[i];
                ++i;
            }
        }
        
        return "NO";
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends