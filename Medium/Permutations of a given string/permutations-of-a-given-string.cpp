//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void temp(string S, int l, int r, vector<string> &v)
	    {
	        if(l==r)
	        {
	            v.push_back(S);
	            return;
	        }
	        else
	        {
	            for(int i=l;i<=r;i++)
	            {
	                swap(S[i],S[l]);
	                temp(S,l+1,r,v);
	                swap(S[i],S[l]);
	            }
	        }
	    }
	
		vector<string> find_permutation(string S)
		{
		    vector<string> v;
		    temp(S,0,S.size()-1,v);
		    set<string> s(v.begin(),v.end());
		    v.clear();
		    for(auto i:s)
		        v.push_back(i);
		    return v;
		}
};




//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends