//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int m=0,p=0,j=0;
            
            for(int i=0;i<N;i++)
            {
                auto lower = lower_bound(Mat[i].begin(),Mat[i].end(),1)-Mat[i].begin();
                auto upper = upper_bound(Mat[i].begin(),Mat[i].end(),1)-Mat[i].begin();
                
                int k = upper-lower;
                
                if(m<k)
                {
                    m=k;
                    p=i;
                }
                
                
            }
            
            return p;
        }
};



//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends