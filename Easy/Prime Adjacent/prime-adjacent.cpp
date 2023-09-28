//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int primeAdjacent(int n)
    {
        int i,j,c=0,x=0;
        if(n-1 == 1)
            return 0;
        for(i=2;i<n-1;i++)
        {
            if((n-1)%i == 0)
            {
                c = c+1;
            }
        }
        for(i=2;i<n+1;i++)
        {
            if((n+1)%i == 0)
            {
                x = x+1;
            }
        }
        if(c == 0 && x == 0)
            return 1;
        else
            return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        if(ob.primeAdjacent(N))
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
// } Driver Code Ends