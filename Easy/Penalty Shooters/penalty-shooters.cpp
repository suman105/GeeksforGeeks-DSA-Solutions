//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    vector<int> goals(int X, int Y, int Z){
        int a=X,b=Y,c=Z;
        while(c != 1)
        {
           if(a%c == 0){
               a = a - 1;
           }
           else if(b%c == 0){
               b = b - 1;
           }
           else{
               c = c-1;
           }
        }
        vector<int> v;
        v.push_back(X-a);
        v.push_back(Y-b);
        
        return v;
    }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        Solution ob;
        vector<int> ans = ob.goals(X, Y, Z);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends