//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int m = INT_MAX;
        bool found=false;
        unordered_map<char,int> map;
        
        for(int i=0;str[i]!='\0';i++)
        {
            if(map.find(str[i])==map.end())
                map[str[i]] = i;
        }
        
        for(int i=0;patt[i]!='\0';i++)
        {
            if(map.find(patt[i])!=map.end())
            {
                m = min(m,map[patt[i]]);
                found=true;
            }
        }
        
        if(found==false)
            return -1;
        return m;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends