//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) 
    {
         vector<vector<int>> v{};
         sort(intervals.begin(), intervals.end());
         
         stack<vector<int>> s;
         s.push(intervals[0]);
         
         for(int i=1;i<intervals.size();i++)
         {
             vector<int> temp = s.top();
             
             if(temp[1]<intervals[i][0])
                s.push(intervals[i]);
             else if(temp[1]<intervals[i][1])
             {
                 
                 temp[0] = min(temp[0],intervals[i][0]);
                 temp[1] = intervals[i][1];
                 s.pop();
                 s.push(temp);
             }
         }
         
         while(!s.empty())
         {
             v.push_back(s.top());
             s.pop();
         }
         
         sort(v.begin(),v.end());
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
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends