//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
public:
    int sumOfDivisors(int n)
    {
        int i,j=0,s=0,x,a[10000];
        for(i=1;i<=n;i++)
        {
            if(n%i == 0)
            {
                a[j] = i;
                ++j;
            }
        }
        x=j;
        for(i=0;i<x;i++)
        {
            for(j=1;j<=a[i];j++)
            {
                if((a[i]%j) == 0)
                {
                    s = s + j;
                }
            }
        }
        return s;
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
        cin>>N;
        Solution ob;
        int ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends