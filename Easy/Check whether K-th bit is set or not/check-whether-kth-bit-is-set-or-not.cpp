//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        int i=0;
        while(n)
        {
            if(i==k && n%2!=0)  return true;
            n/=2;
            ++i;
        }
        return false;
    }
};



//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
// } Driver Code Ends