//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int kThSmallestFactor(int n , int k) {
     int i,c=0,x=0,j=0;
     for(i=1;i<=sqrt(n);i++)
     {
         if(n%i == 0){
             if(n/i == i)
             {
                 c = c + 1;
             }
             else
             {
                 c = c + 2;
             }
         }
     }
     j=c;
     int b[c];
     for(i=1;i<=sqrt(n);i++)
     {
         if(n%i == 0){
             if(n/i == i){
                 b[x] = i;++x;
             }
             else{
                 b[x] = i;++x;
                 b[c-1] = n/i;--c;
             }
         }
     }
     if(j<k)
     {
         return -1;
     }
     else{
         return b[k-1];
     }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.kThSmallestFactor(N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends