//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        vector<int> v;
        set<int> set(arr,arr+N);
        for(auto x: set)
            v.push_back(x);
        int c=1,m=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]+1==v[i+1])
                ++c;
            else c=1;
            if(c>m) m=c;
            
        }
        return m;
    }
};



//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends