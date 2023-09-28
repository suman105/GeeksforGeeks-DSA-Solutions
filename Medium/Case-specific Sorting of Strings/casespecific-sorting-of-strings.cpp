//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        vector<char> v1,v2;
        int i,k=0,j=0;
        for(i=0;i<n;i++){
            if(s[i]>='a' && s[i] <= 'z'){
                v1.push_back(s[i]);
            }
            else
                v2.push_back(s[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(i=0;i<n;i++){
            if(s[i]>='a' && s[i] <= 'z'){
                s[i] = v1[k];
                ++k;
            }
            else{
                s[i] = v2[j];
                ++j;
            }
        }
        return s;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends