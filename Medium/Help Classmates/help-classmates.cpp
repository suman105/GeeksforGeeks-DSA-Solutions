//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> st;
        vector<int> v;
        
        v.push_back(-1);
        st.push(arr.back());
        
        auto it = arr.rbegin()+1;
        
        while(it != arr.rend())
        {
            while(!st.empty() && st.top()>= *it)
                st.pop();
            v.push_back(st.empty() ? -1 : st.top());
            st.push(*(it++));
        }
        reverse(begin(v),end(v));
        
        return v;
    } 
};



//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends