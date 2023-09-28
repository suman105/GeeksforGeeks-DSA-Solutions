//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
    long long factorSum(int n)
    {
        int i;
        long long c=0;
         for(i=1;i<=sqrt(n);i++)
         {
             if(n%i == 0){
                 if(n/i == i)   c = c + i ;
                 else
                 {
                     c = c + i;
                     c = c + n/i;
                 }
             }
         }
         return c;
    }
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
       	cout <<  ob.factorSum(N) << "\n";
   
    }
    return 0;
}

// } Driver Code Ends