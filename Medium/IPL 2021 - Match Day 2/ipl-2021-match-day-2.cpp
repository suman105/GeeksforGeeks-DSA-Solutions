//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> v;
        deque<int> dq;
        int i=0;
        for(i=0;i<k;i++)
        {
            while(!dq.empty() && arr[i]>=arr[dq.back()])
                    dq.pop_back();
            dq.push_back(i);
        }
        v.push_back(arr[dq.front()]);
        for(i=k;i<n;i++)
        {
            while(!dq.empty() && i-dq.front()>=k) 
                dq.pop_front();
            while(!dq.empty() && arr[i]>=arr[dq.back()])
                    dq.pop_back();
            dq.push_back(i);
            v.push_back(arr[dq.front()]);
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends