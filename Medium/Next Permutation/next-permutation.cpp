//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr)
    {
       int i=-1,j=-1;
       
       for(int k=N-2;k>=0;--k)
       {
           if(arr[k]<arr[k+1]){
               i=k;
               break;
           }
       }
       if(i<0)
       {
           sort(arr.begin(),arr.end());
           return arr;
       }
       for(int k=N-1;k>=0;--k)
       {
           if(arr[k]>arr[i]){
               j=k;
               break;
           }
       }
       swap(arr[i],arr[j]);
       sort(arr.begin()+i+1,arr.end());
       return arr;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends