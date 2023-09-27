//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) 
    {
        if(s.length()<2)
            return 0;
        int x=0,n=s.length();
        stack<int> S;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                S.push(i);
            else
            {
                if(!S.empty() && s[S.top()]=='(')
                    S.pop();
                else
                    S.push(i);
            }
        }
        
        while(!S.empty())
        {
            int t = S.top();
            S.pop();
            x=max(x,n-t-1);
            n=t;
        }
        
        return max(n,x);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends