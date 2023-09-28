//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends




string firstRepChar(string s)
{
    unordered_map<char,int> map;
    for(int i=0;i<s.length();i++)
    {
        if(map.find(s[i])==map.end())
            map[s[i]] = 1;
        else
        {
            string a(1,s[i]);
            return a;
        }
        
    }
    return "-1";
}