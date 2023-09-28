//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

class Solution{
public:
    int height(Node *root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    int findHeight(int N, int parent[]){
        
        Node *root = NULL ;
        Node *p[N] ;
        for(int i=0;i<N;i++)
        {
            p[i] = new Node (i);
        }
        for(int i=0;i<N;i++)
        {
            if (parent[i] == -1)
                root = p[i];
            else if(p[parent[i]] -> left == NULL)
                p[parent[i]] -> left = p[i];
            else
                p[parent[i]] -> right = p[i];
        }
        return height(root);
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends