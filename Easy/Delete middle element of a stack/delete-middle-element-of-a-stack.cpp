//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int> st;
        int k=0;
        k = (sizeOfStack)/2;
        
        
        int i=0;   
        while(!s.empty() && k>i)
        {
            st.push(s.top());
            s.pop();
            ++i;
        }
        s.pop();
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
        
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends