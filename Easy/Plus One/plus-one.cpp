//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        // code here
        arr[n-1] += 1;
        int carry = arr[n-1]/10;
        arr[n-1] = arr[n-1]%10;
        
        for(int i=n-2;i>=0;i--){
            if(carry == 1){
                arr[i] += 1;
                carry = arr[i]/10;
                arr[i]=arr[i]%10;
            }
        }
        
        if(carry==1){
            arr.insert(arr.begin(),1);
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends