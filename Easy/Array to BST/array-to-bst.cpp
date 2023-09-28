//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void preorder(vector<int> nums, int i, int j, vector<int> &v)
    {
        if(i>j)
            return;
            
        int m = (i+j)/2;
        v.push_back(nums[m]);
        preorder(nums,i,m-1,v);
        preorder(nums,m+1,j,v);
    }
    
    
    vector<int> sortedArrayToBST(vector<int>& nums) 
    {
       vector<int> v;
       preorder(nums,0,nums.size()-1,v);
       return v;
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends