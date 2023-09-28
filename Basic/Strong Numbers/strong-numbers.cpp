//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
	public:
	    int fact(int x)
	    {
	        if(x==0)    return 1;
	        else    return x*fact(x-1);
	    }
		int is_StrongNumber(int n)
		{
		   int x=n,s=0,b;
		   while(n)
		   {
		       b = n%10;
		       s = s + fact(b);
		       n = n/10;
		   }
		   if(s == x)   return 1;
		   else return 0;
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
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends