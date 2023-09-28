//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string help(string a, string b)
    {
        string res="";
        int len = min(a.length(),b.length());
        for(int i=0;i<len;i++)
        {
            if(a[i]!=b[i])  break;
            res += a[i];
        }
        return res;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==0)    return "";
        if(N==1)    return arr[0];
        string temp = arr[0];
        for(int i=1;i<N;i++)
            temp = help(temp,arr[i]);
        if(temp.length()==0)    return "-1";
        return temp;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends