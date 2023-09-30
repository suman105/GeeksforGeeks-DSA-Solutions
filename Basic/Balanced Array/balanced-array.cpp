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
        int i=0,j=n-1,fs=0,ls=0;
        while(i<j){
            fs = fs + a[i++];
            ls = ls + a[j--];
        }
        return abs(fs-ls);
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
