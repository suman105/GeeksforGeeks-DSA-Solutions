//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxTripletSum(int a[], int n)
    {
    	int i,c,x=-257,y=-257,z=-257,l;
    	for(i=0;i<n;i++)
    	{
    	    if(a[i]>x)
    	    {
    	        x=a[i];
    	        c=i;
    	    }
    	}
    	for(i=c;i<n-1;i++)
    	{
    	    a[i]=a[i+1];
    	}
    	n=n-1;
    	for(i=0;i<n;i++)
    	{
    	    if(y<a[i])
    	    {
    	        y=a[i];
    	        l=i;
    	    }
    	}
    	for(i=l;i<n-1;i++)
    	{
    	    a[i]=a[i+1];
    	}
    	n=n-1;
    	for(i=0;i<n;i++)
    	{
    	    if(z<a[i])
    	    {
    	        z=a[i];
    	    }
    	}
    	return x+y+z;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout <<ob.maxTripletSum(a, n);
	    cout<<"\n";
	}
return 0;
}
// } Driver Code Ends