//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) 
    {
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)   //Inserting into map
        {
            if(m.find(arr[i])==m.end())
                m[arr[i]] = 1;
            else
                ++m[arr[i]];
        }
        
        for(int i=0;i<n;i++)  //Returning
        {
            if(m[arr[i]]>1)
                return (i+1);
        }
        
        return -1;  //Not Found Case
    }
};



//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends