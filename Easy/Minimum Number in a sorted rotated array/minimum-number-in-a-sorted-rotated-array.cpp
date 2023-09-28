//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int a[], int low, int h)
    {
        int n = h+1;
        set<int> s(a,a+n);
        return *s.begin();
        
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
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends