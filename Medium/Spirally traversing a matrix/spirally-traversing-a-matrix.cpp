//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int top=0,bottom,left=0,right=c-1,i;
        bottom=r-1;
        int a=r*c,d=0;
        vector<int> v;
        
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
        return v;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends