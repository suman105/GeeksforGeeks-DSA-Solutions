//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k)
    {
        unordered_map<char,int> m;
        vector<int> v;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])==m.end())   m[s[i]]=1;
            else    ++m[s[i]];
        }
        
        for(auto x : m)
            v.push_back(x.second);
        sort(begin(v),end(v));
        while(k>0)
        {
            --v[v.size()-1];
            sort(begin(v),end(v));
            --k;
        }
        
        int sum=0;
        for(int i=0;i<v.size();i++)
            sum += v[i]*v[i];
        return sum;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends