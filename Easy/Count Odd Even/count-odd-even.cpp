//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void countOddEven(int a[], int n)
    {
        int i;
        int e=0,v=0;
        for(i=0;i<n;i++){
            if(a[i]%2 == 0)
                ++e;
            else
                ++v;
        }
        cout << v << " " << e << endl;
    }
};

//{ Driver Code Starts.
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    // Array elements input
	    for(int i = 0; i < sizeof_array; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    // Calling function to count even and odd
	    ob.countOddEven(arr, sizeof_array);
	    
	}
	
	return 0;
}
// } Driver Code Ends