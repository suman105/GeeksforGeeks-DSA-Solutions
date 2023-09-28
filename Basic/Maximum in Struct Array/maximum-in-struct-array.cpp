//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i].feet = tmp1;
	        arr[i].inches = tmp2;
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}
// } Driver Code Ends

int findMax(Height arr[], int n)
{
    // Code here
    int m = INT_MIN;
    for (int i = 0; i < n; i++) {
        int temp = 12 * (arr[i].feet) 
                     + arr[i].inches;
        m = max(m, temp);
    }
    return m;
}