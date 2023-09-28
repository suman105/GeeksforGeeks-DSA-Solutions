//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends

int num(int a[], int n, int k)
{
     int i,x,t,c=0;
     for(i=0;i<n;i++)
     {
         x=a[i];
         while(x)
         {
             t = x%10;
             if(t == k) ++c;
            x = x/10;
         }
     }
     return c;
}