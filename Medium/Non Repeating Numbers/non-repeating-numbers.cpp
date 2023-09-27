//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        unordered_map<int,int> um;
        vector<int> v;
        
        for(auto &x : nums)
        {
            if(um.find(x)==um.end())
                um[x]=1;
            else
                ++um[x];
        }
        
        for(auto &g: um)
        {
            if(g.second == 1)
                v.push_back(g.first);
        }
        
        sort(begin(v),end(v));
        
        return v;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends