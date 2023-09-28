//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends




int longestSubstrDistinctChars (string S)
{
    int a=0,length=0;
    unordered_map<char,int> m;
    
    for(int i=0;i<S.size();i++)
    {
        if(m.find(S[i])!=m.end())
            a = max(a,m[S[i]]+1);
        
        m[S[i]] = i;
        length = max(length,i-a+1);
    }
    
    return length;
}