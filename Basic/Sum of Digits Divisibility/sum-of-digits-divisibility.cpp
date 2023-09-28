//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int isDivisible(int n) {
        int x,b=n;
        int s=0;
        while(n)
        {
            x = n%10;
            s = s + x;
            n = n/10;
        }
        if(b%s == 0)    return 1;
        else    return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDivisible(N) << "\n";
    }
}
// } Driver Code Ends