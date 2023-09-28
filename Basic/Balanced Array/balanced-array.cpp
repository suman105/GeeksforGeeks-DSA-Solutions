//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int i,j;
        int fs=0,ls=0;
        j = n-1;
        for(i=0;i<n/2;i++){
            fs = fs + a[i];
            ls = ls + a[j-i];
        }
        if(ls < fs)
            return fs-ls;
        else
            return ls-fs;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends