//{ Driver Code Starts
// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}


// } Driver Code Ends

long long int calculate(int a[], int n)
{
    sort(a,a+n);
    
    int i,c=1,x=0,m;
    long long int s=0;
    
    for(i=0;i<(n-1);i++)
    {
        if(a[i] == a[i+1])
            ++c;
        else
        {
            m=c;
            c=1;
        }
        if(c == 1)
            x = x + m*(m-1)/2 ;
        
    }
    
    s = c*(c-1)/2 + x ;
    
    return s;
    
}
