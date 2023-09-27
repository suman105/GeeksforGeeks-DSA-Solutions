//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A)
		{
		    queue<char> q;
		    unordered_map<char,int> m;
		    string d;
		    for(char c:A)
		    {
		        m[c]++;
		        while(!q.empty() && m[q.front()]>1)
		            q.pop();
		        if(m[c]==1)
		            q.push(c);
		        if(q.empty())
		            d.push_back('#');
		        else
		            d.push_back(q.front());
		    }
		    
		    return d;
		}

};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends