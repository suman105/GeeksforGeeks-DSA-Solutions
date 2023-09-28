//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node *root, int x);

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;

        cout << search(root, s);
        cout << endl;
    }
}

// } Driver Code Ends
void help(Node *root,int x,bool &found)
{
    if(!root)   return;
    if(root->data==x){
        found=true;
        return;
    }
    if(root->data > x)
        help(root->left,x,found);
    else
        help(root->right,x,found);
}

bool search(Node* root, int x) 
{
    bool found=false;
    help(root,x,found);
    if(found)
        return 1;
    return 0;
}
