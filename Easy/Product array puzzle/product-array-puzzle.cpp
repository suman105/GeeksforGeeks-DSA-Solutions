//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n)
    {
       vector<long long int> v;
       int i;
       long long int s=1;
       int count=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]!=0)
                s*=nums[i];
            else
                ++count;
        }
            
        if(count>0)
        {
            if(count==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(nums[j]==0)
                        v.push_back(s);
                    else
                        v.push_back(0);
                }
            }
            else
            {
                for(int j=0;j<n;j++)
                    v.push_back(0);
            }
        }
        else
        {
            for(i=0;i<n;i++)
                v.push_back(s/nums[i]);
        }
        return v;
    }
};



//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends