//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//Initial template for C++
void rotate(vector<vector<int> >& m)
{
    int i,j,l,k;
    l = m.size();
    int a[l][l];
    for(i=0;i<l;i++)
    {
        k = l-1;
        for(j=0;j<l;j++)
        {
            a[j][i] = m[i][k];
            --k;
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            m[i][j] = a[i][j];
        }
    }
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends