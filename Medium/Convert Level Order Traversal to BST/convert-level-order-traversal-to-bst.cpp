//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}
// } Driver Code Ends

void insert(Node* &root, int x)
{
    if(!root)   return;
    if(root->data > x)
    {
        if(!root->left)
        {
            root->left = new Node(x);
            return;
        }
        insert(root->left,x);
    }
    else
    {
        if(!root->right)
        {
            root->right = new Node(x);
            return;
        }
        insert(root->right,x);
    }
}

Node* constructBst(int arr[], int n)
{
    Node *root = new Node(arr[0]);
    for(int i=1;i<n;i++)
        insert(root,arr[i]);
    return root;
}
