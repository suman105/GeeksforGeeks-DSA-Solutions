//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string str="";
            unordered_map<char,int> a,b,temp;
            for(int i=0;i<A.length();i++)
                ++a[A[i]];
            for(int i=0;i<B.length();i++)
                ++b[B[i]];
            for(int i=0;i<A.size();i++)
            {
                if(b.find(A[i])==b.end())
                {
                    str += A[i];
                    b.erase(b[A[i]]);
                }
            }
            for(int i=0;i<B.size();i++)
            {
                if(a.find(B[i])==a.end())
                {
                    str += B[i];
                    a.erase(a[B[i]]);
                }
            }
            
            if(str.size()==0)
                return "-1";
            sort(str.begin(),str.end());
            return str;
        }
};





//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends