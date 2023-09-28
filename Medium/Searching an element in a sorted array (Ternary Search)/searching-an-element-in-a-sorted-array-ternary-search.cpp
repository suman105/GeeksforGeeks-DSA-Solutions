//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int ternarySearch(int a[], int n, int k) 
    { 
       int l,h,mid1,mid2;
       l = 0;
       h = n-1;
       while(l <= h)
       {
           mid1 = l + (h-l)/3;
           mid2 = h - (h-l)/3;
           if(a[mid1] == k)
                return 1;
           if(a[mid2] == k)
                return 1;
           if(a[mid1] > k)
            {
                h = mid1 -1;
            }
            else if(a[mid2] < k)
            {
                l = mid2 + 1;
            }
            else
            {
                l = mid1 + 1;
                h = mid2 - 1;
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
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 

// } Driver Code Ends