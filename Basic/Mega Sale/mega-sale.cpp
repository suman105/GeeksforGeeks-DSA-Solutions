//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long maxProfit(int a[], int n, int m);

int main()
 {
     ll t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         
         cout<< maxProfit(a, n, m) <<endl;
     }
	
	return 0;
}


// } Driver Code Ends

long long maxProfit(int a[], int n, int m)
{
    sort(a,a+n);
    long long s=0;
    int i=0;
    while(i<m && i<n)
    {
        if(a[i]<0)  s = s - a[i];
        ++i;
    }
    return s;
}