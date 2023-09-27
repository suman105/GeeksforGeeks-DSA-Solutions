//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    
    void mergeTheArr(long long arr[],long long left,long long mid,long long right,long long &count){
        long long copy[right];
        long long k = left;
        long long i = left;
        long long j = mid+1;
        
        while(i <= mid and j <= right){
            if(arr[i] <= arr[j]){
                copy[k++] = arr[i++];
            }else{
                copy[k++] = arr[j++];
                count += mid - i + 1;
            }
        }
        
        // checking if left array is finished or not
        while(i <= mid){
            copy[k++] = arr[i++];
        }
        
        // checking if right array is finished or not
        while(j <= right){
            copy[k++] = arr[j++];
        }
        
        // copying the array finally in real array
        for(int it=left;it<=right;it++){
            arr[it] = copy[it];
        }
        
    }
    void mergeSort(long long arr[],long long left,long long right,long long &count){
        // base case
        if(left >= right){
            return ;
        }
        
        int mid = left + (right - left)/2;
        
        // sorting left part
        mergeSort(arr,left,mid,count);
        
        // sorting right part
        mergeSort(arr,mid+1,right,count);
        
        // merging the array finally
        mergeTheArr(arr,left,mid,right,count);
        
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long left = 0;
        long long right = N-1;
        long long  count = 0;
        
        mergeSort(arr,left,right,count);
        
        return count;
    }

};



//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends