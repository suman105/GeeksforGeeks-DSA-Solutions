//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>& m){
        int i,j,n,k=0;
        n = m.size();
        vector<int > x;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=0 && i!= n-1 )
                {
                    if(j==0 || j == n-1)
                        x.push_back(m[i][j]);
                }
                else    x.push_back(m[i][j]);
            }
        }
        
        return x;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int>ans = obj.BoundaryElements(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends