//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string isDeficient(long long int x) {
        int i,s=0;
        for(i=01;i<=sqrt(x);i++)
        {
            if(x%i == 0){
                if(x/i == i)
                    s = s+i;
                else
                    s = s + (i+(x/i));
            }
        }
        if( s < 2*x)    
            return "YES";
        else
            return "NO";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x;
        cin >> x;
        Solution ob;
        cout << ob.isDeficient(x) << endl;
    }
    return 0;
}

// } Driver Code Ends