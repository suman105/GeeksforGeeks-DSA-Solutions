//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int l,h,m;
        l=0;
        h = a.size() - 1;
        while(l<=h)
        {
            m = l + (h-l)/2;
            if(a[m-1]<a[m] && a[m]>a[m+1])
            {
                return a[m];
            }
            if(a[m]>a[m-1])
            {
                l = m + 1;
            }
            if(a[m] < a[m-1])
            {
                h = m - 1;
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends