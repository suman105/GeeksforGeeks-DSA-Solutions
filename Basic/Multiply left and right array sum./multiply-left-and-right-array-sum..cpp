//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends

int multiply(int a[], int n)
{
    int i;
    int sum1=0,sum2=0;
    for(i=0;i<n/2;i++)  sum1+=a[i];
    for(i=n/2;i<n;i++)  sum2+=a[i];
    return sum1*sum2;
    
}