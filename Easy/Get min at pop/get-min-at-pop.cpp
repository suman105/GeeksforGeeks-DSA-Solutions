//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack<int> st;
    for(int i=0;i<n;i++)
        st.push(arr[i]);
    return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>st)
{
    vector<int> v;
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v)
        st.push(i);
    
    map<int,int> map;
    for(auto it=v.begin();it!=v.end();it++)
        ++map[*it];
    
    while(!st.empty())
    {
        auto it = map.begin();
        cout << it->first << " ";
        if(map[st.top()]==1)
            map.erase(st.top());
        else
            --map[st.top()];
        st.pop();
    }
}


//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends