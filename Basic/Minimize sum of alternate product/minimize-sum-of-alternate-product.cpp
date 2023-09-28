//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long altProduct(long long a[], long long n);

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        long long a[n];
        for(int i =0;i<n;i++)
           cin >> a[i];
        
        cout << altProduct(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long altProduct(long long a[], long long n)
{
    sort(a,a+n);
    int i,j;
    long long s=0;
    j = n-1;
    if(n%2 == 0){
        for(i=0;i<n/2;i++)
        {
            s = s + a[i]*a[j];
            --j;
        }
    }
    else
    {
        for(i=0;i<n/2;i++)
        {
            s = s + a[i]*a[j];
            --j;
        }
        s = s + a[(n/2)+1];
    }
    return s;
}