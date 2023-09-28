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
      else  return fact(n-1)*n;
  }
    string isKrishnamurthy(int n) {
        int x,b=n;
        int sum=0;
        while(n)
        {
            x=n%10;
            sum = sum + fact(x);
            n = n/10;
        }
        if(b == sum)    return "YES";
        else    return "NO";
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
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends