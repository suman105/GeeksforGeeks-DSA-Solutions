//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str)
	{
	    string str1;
	    int k=0;
	    
	    unordered_set<char> s;
	    
	    for(int i = 0; str[i] != '\0'; i++)
        {
            if(s.find(str[i])==s.end())
            {
                s.insert(str[i]);
                str1.push_back(str[i]);
            }
            
        }
	    return str1;
	}
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends