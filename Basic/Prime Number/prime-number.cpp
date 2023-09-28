//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int isPrime(int n){
        int i,x;
        if(n == 1){
            return 0;
        }
        for(i=2;i<=sqrt(n);i++){
            x = n%i;
            if(x == 0){
                return 0;
            }
        }
        return 1;
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends