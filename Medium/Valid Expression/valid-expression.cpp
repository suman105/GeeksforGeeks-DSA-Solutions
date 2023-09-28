//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



bool isMatching(char a,char b)
{
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}

bool valid(string s)
{
    stack<char> k;
    
    for(char x:s)
    {
        if((x=='(') || (x=='[') || (x=='{'))
            k.push(x);
        else
        {
            if(k.empty())
                return false;
            else if(isMatching(k.top(),x)==false)
                return false;
            else
                k.pop();
        }
    }
    
    return k.empty();
}