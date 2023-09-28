//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&matrix)
    {
        int top=0,bottom,left=0,right=c-1,i;
        bottom=r-1;
        int a=r*c,d=0;
        vector<int> v;
        int g=r*c;
        int b[g];
        
        while(a>d)
        {
            for(i=left;i<=right && a>d ;i++)
            {
                v.push_back(matrix[top][i]);
                
                ++d;
            }
            ++top;
            for(i=top;i<=bottom && a>d;i++)
            {
                v.push_back(matrix[i][right]);
                ++d;
            }
            --right;
            for(i=right;i>=left && a>d;i--)
            {
                v.push_back(matrix[bottom][i]);
                ++d;
            }
            --bottom;
            for(i=bottom;i>=top && a>d;i--)
            {
                v.push_back(matrix[i][left]);
                ++d;
            }
            ++left;
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends