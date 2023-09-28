//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    int i=0;
	    vector<int> a,b;
	    
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<0)   //Negative cases
	            a.push_back(arr[i]);
	        else            //Positive Cases
	            b.push_back(arr[i]);
	    }
	    
	    int j=0,k=0;
	    i=0;
	    
	    while(j<a.size() && k<b.size())
	    {
	        arr[i++] = b[k++];
	        arr[i++] = a[j++];
	    }
	    
	    while(k<b.size())
	        arr[i++] = b[k++];
	    while(j<a.size())
	        arr[i++] = a[j++];
	}
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends