//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& a, int n) {
	      int i,j,k;
	      int s[n][n];
	      k=0;
	      for(i = n-1;i>=0;i--)
	      {
	          for(j=0;j<n;j++)
	          {
	              s[k][j] = a[j][i];
	          }
	          ++k;
	      }
	      for(i=0;i<n;i++)
	      {
	          for(j=0;j<n;j++)
	          {
	              a[i][j] = s[i][j];
	          }
	      }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends