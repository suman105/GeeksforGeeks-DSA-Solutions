//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int i,j,x=0,k,l;
        vector<int> v;
        l = matrix.size();
        int a[l*l];
        for(i=0;i<(l+l-1);++i)
        {
            if(i<l)
            {
                k=i;
                for(j=0;j<=i;j++){
                    a[x] = matrix[j][k];++x;
                    --k;
                }
            }
            else
            {
                
                k = l-1;;
                for(j=(i-l+1);j<l;j++){
                    a[x] = matrix[j][k];++x;
                    --k;
                }
            }
        }
        for(i=0;i<x;i++){
            v.push_back(a[i]);
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends