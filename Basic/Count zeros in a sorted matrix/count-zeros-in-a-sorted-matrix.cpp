//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		int n=A.size(),r=0,c=n-1,count=0;
		while(r<n && c>=0){
		    if(A[r][c]==0){
		        count += c+1;
		        r += 1;
		    }
		    else    c -= 1;
		}
		return count;
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
