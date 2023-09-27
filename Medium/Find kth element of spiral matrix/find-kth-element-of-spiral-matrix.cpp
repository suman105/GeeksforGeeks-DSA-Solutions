//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int r,int c,int k)
    {
 		int x[r*c],bx=0;
        int top=0,bottom,left=0,right=c-1,i;
        bottom=r-1;
        int a=r*c,d=0;
        
        while(a>d)
        {
            for(i=left;i<=right && a>d ;i++)
            {
                x[bx]=matrix[top][i];
                ++bx;
                ++d;
            }
            ++top;
            for(i=top;i<=bottom && a>d;i++)
            {
                x[bx]=matrix[i][right];++bx;
                ++d;
            }
            --right;
            for(i=right;i>=left && a>d;i--)
            {
                x[bx]=matrix[bottom][i];++bx;
                ++d;
            }
            --bottom;
            for(i=bottom;i>=top && a>d;i--)
            {
                x[bx]=matrix[i][left];++bx;
                ++d;
            }
            ++left;
        }
        return x[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends