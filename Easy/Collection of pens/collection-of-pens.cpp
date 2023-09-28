//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int minThirdPiles(int A, int B)  {
        int i,j,s,x=0,y;
        s = A + B;
        for(i=s+1;i<s*s;i++)
        {
            x=0;
            for(j=2;j<i;j++)
            {
                if(i%j == 0)
                    x = x + 1;
            }
            if(x == 0 )
            {
                y = i;
                break;
            }
        }
        return y-s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout<<ob.minThirdPiles(A, B)<<endl;
    }
    return 0;
}

// } Driver Code Ends