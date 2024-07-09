//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n)
    {
        // code here
        vector<int> v;
        int a[n+1];
        unordered_set<int>s;
        a[0]=0;
        a[1]=1;
        s.insert(0);
        s.insert(1);
        for(int i=2;i<n;i++){
            if(a[i-1]-i > 0 && s.find(a[i-1]-i)==s.end()){
                a[i]=a[i-1]-i;
                s.insert(a[i]);
            }
            else
            {
                a[i]=a[i-1]+i;
                s.insert(a[i]);
            }
        }
        for(int i=0;i<n;i++)   v.push_back(a[i]);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends