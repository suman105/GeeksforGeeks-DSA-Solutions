//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    bool ispar(string x)
    {
        int i;
        unordered_map<int,int> m;
        
        m[']'] = '[';
        m['}'] = '{';
        m[')'] = '(';
        
        stack<char> s;
        for(i=0;i<x.length();i++)
        {
            char c=x[i];
            if(c=='(' || c=='{' || c=='[')
                s.push(c);
            else if(!s.empty() && m[c]==s.top())
                s.pop();
            else
                return false;
            
        }
        
        return s.empty();

    }

};


//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends