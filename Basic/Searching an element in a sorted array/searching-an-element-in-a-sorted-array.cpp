//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int searchInSorted(int a[], int n, int k) 
    { 
        int l = 0;
	int h = n-1;
	int mid;
	while(l<=h)
	{
		mid=l+(h-l)/2;
		if(a[mid]==k){
			return 1;
		}
		else if(a[mid]>k)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends