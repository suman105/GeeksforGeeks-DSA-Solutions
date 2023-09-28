//{ Driver Code Starts
//Initial Template for C++

// C++ implementation to rearrange the array 
// elements after modification 
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
    	int i=0;
    	int b[n];
    	for(i=0;i<(n-1);i++){
    	    if((arr[i+1] == arr[i]) && (arr[i] != 0)){
    	        arr[i] = arr[i]*2;
    	        arr[i+1]=0;
    	    }
    	}
    	int x=0;
    	for(i=0;i<n;i++){
    	    if(arr[i]!=0){
    	        b[x]=arr[i];++x;
    	    }
    	}
    	for(i=0;i<n;i++){
    	    if(arr[i]==0){
    	        b[x]=arr[i];++x;
    	    }
    	}
    	for(i=0;i<n;i++){
    	    arr[i]=b[i];
    	}
    }
}; 

//{ Driver Code Starts.
// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 

// } Driver Code Ends