//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int longestSubarry(long long int a[], long long int n) 
{
    long long int m,c=0,i,x=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            c=c+1;
        }
        else
        {
            if(x<c)
            {
                x=c;
            }
            c=0;
        }
        if(x<c){
            x=c;
        }
    }
    return x;   
}