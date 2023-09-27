//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        bool fact(int m,int n)
        {
            int p=5,c=0;
            while(p<=m)
            {
                c += m/p;
                p*=5;
            }
            return c>=n;
        }
        
        int findNum(int n)
        {
            if(n==1)
                return 5;
            int l=0,h=5*n;
            
            while(l<h)
            {
                int m = (l+h)/2;
                
                if(fact(m,n))
                    h = m;
                else
                    l = m+1;
            }
            
            return l;
        }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends