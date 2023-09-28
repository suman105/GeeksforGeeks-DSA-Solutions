//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int fact(int n)
  {
      if(n==0)  return 1;
      else  return n*fact(n-1);
  }
    int isStrong(int n)
    {
        int x,b=n;
        int l=0;
        while(n)
        {
            x = n%10;
            l = l + fact(x);
            n = n/10;
        }
        if(l==b)    return 1;
        else    return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends