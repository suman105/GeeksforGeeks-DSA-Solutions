//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        int i,j,n,k=0,l=0;
        n = matrix.size();
        int x[n][n];
        for(i = n-1;i>=0;i--)
        {
            l=0;
            for(j = n-1;j>=0;j--)
            {
                x[k][l] = matrix[i][j];
                ++l;
            }
            ++k;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                matrix[i][j] = x[i][j];
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.rotate(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends