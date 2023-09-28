//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        vector<vector<int> > v;
        int i=0,k=1,l=1;
        while(i<n)
        {
             vector<int> m;
             l = l*k;
             int p=0;
             while(p<l && i<n)
             {
                 m.push_back(arr[i]);
                 ++i;
                 ++p;
             }
             sort(begin(m),end(m));
             v.push_back(m);
             k=2;
        }
        return v;
    }
};



//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends