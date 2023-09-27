//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int> m;
        int s=0,r=0;
        for(int i=0;i<N;i++)
        {
            s+=A[i];
            if(s==K)
                r=(i+1);
            if(m.find(s)==m.end())
                m.insert({s,i});
            if(m.find(s-K)!=m.end())
                r = max(r,i-m[s-K]);
        }
        return r;
    } 

};



//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends