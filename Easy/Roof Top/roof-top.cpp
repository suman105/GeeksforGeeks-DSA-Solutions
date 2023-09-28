//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int a[], int n)
    {
       int i,m=0,c=0;
       if( n != 1)
       {
           for(i=0;i<(n-1);i++)
          {
           if(a[i]<a[i+1])
           {
               ++c;
           }
           else
           {
               c=0;
           }
           if(m<c)
            m = c;
        
        }
       }
       
       return m;
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}
// } Driver Code Ends