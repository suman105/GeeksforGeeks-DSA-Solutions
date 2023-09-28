//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends

int findEquilibrium(int a[], int n)
{
    int i=0,j,s=0;
    j=(n-1);
    int f=a[0],l=a[j];
    ++i;--j;
    while(i<j){
        if(l>f){
            f=f+a[i];++i;
        }
        else{
            l=l+a[j];--j;
        }
    }
    if((l==f) && (j==i))
            return i;
    return -1;
}