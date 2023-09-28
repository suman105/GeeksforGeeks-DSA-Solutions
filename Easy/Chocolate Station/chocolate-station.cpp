//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    int getChocolateCost(vector<int> arr, int chocolateMrp)
    {
        int m = INT_MIN;
        for(auto i = arr.begin() ; i != arr.end() ; ++i)
            if( *i > m)
                m = *i;
                
        return m*chocolateMrp;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp;
	    cin>>n;
	    vector<int> arr;
	    while(n--)
	    {
	        cin>>tmp;
	        arr.push_back(tmp);
	    }
	    cin>>tmp;
	    Solution obj;
	    cout<<obj.getChocolateCost(arr, tmp)<<"\n";
	}
	return 0;
}
// } Driver Code Ends