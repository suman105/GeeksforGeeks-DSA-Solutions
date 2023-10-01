//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k)
	{
	    vector<int> v;
	    priority_queue <int, vector<int>, greater<int> > p;
	    int temp=k;
	    while(temp>0){
	        p.push(arr[temp-1]);
	        --temp;
	    }
	    for(int i=k;i<n;i++){
	        p.push(arr[i]);
	        p.pop();
	    }
	    while(!p.empty()){
	        v.push_back(p.top());
	        p.pop();
	    }
	    reverse(v.begin(),v.end());
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
