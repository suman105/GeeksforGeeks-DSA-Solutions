//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		int i,j,c=0;
		for(i=0;i<A.size();i++)
		{
		    for(j=0;j<A.size();j++)
		    {
		        if(A[i][j] == 0)
		            ++c;
		    }
		}
		return c;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends