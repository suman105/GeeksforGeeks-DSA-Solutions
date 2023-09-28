//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a,a+n);
        long long int sum=0;
        int temp=k;
        int i=0;
        while(i<n && temp)
        {
            if(a[i]<0)
            {
                a[i] = abs(a[i]);
                --temp;
            }
            ++i;
        }
        sort(a,a+n);
        if(temp%2==0)
        {
            for(int h=0;h<n;h++)
                sum += a[h];
        }
        else
        {
            a[0] = -a[0];
            for(int h=0;h<n;h++)
                sum += a[h];
        }
        return sum;
    }
};



//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends