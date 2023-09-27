//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int l=0,h=x/2,m=0,a=0;
        if(x==1)
            return 1;
        while(l<=h)
        {
            m=(l+h)/2;
            if(m*m==x)
                return m;
            else if(m*m<x){
                l=m+1;
                a=m;
            }
            else
                h=m-1;
        }
        return a;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends