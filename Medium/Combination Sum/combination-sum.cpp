//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void help(vector<int> arr,vector<vector<int>> &res, vector<int> &v, int sum, int i)
    {
        if(sum==0){
            res.push_back(v);
            return;
        }
        while(i<arr.size() && sum-arr[i]>=0)
        {
            v.push_back(arr[i]);
            help(arr,res,v,sum-arr[i],i);
            ++i;
            v.pop_back();
        }
    }
    
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) 
    {
        sort(begin(A),end(A));
        A.erase(unique(begin(A),end(A)),A.end());
        vector<int> temp;
        vector<vector<int>> res;
        
        help(A,res,temp,B,0);
        return res;
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends