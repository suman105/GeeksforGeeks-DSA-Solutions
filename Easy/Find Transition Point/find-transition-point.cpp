//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends




int transitionPoint(int arr[], int n)
{
      int low=0;
       int high=n-1;
       if(arr[n-1]==0){
           return -1;
       }
       int mid=0;
       while(low <= high){
           mid=(low + high)/2;
           if(arr[mid]==1){
               high=mid-1;
           }
           else if(arr[mid]<1){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       }
       return low;
}