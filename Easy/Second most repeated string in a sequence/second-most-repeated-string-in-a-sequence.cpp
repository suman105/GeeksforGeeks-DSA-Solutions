//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> map;
        for(int i=0;i<n;i++)
                ++map[arr[i]];
                
        priority_queue<pair<int,string>> pq;
        
        for(auto &x : map)
            pq.push({x.second,x.first});

        pq.pop();
        
        if(pq.empty())
            return "";
        
        pair<int,string> temp = pq.top();
        pq.pop();
        
        return temp.second;
    
    }
};



//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends