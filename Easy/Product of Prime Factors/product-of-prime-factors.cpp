//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public: 
    long long int primeProduct(int N){
        int i,s=1,j,c;
        for(i=1;i<=N;i++)
        {
            c=0;
            if((N%i) == 0)
            {
                for(j=2;j<i;j++)
                {
                    if((i%j) == 0)
                    {
                        c = c + 1;
                    }
                }
                if(c == 0)
                {
                    s = s*i;
                }
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.primeProduct(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends