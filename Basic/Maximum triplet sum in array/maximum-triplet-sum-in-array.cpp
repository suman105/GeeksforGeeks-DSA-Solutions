//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
    	int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
    	for(int i=0;i<n;i++){
    	    if(arr[i]>m1){
    	        m3=m2;
    	        m2=m1;
    	        m1=arr[i];
    	    }
    	    else if(arr[i]>m2){
    	        m3=m2;
    	        m2=arr[i];
    	    }
    	    else if(arr[i]>m3)  m3=arr[i];
    	}
    	return m1+m2+m3;
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
