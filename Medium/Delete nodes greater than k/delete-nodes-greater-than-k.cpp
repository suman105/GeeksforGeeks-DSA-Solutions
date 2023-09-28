//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;      
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void inorder(Node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}

}

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends


class Solution{
  public:
    void inorder(Node* root, vector<int> &v, int k)
    {
        if(!root)   return;
        inorder(root->left,v,k);
        if(root->data < k)  v.push_back(root->data);
        inorder(root->right,v,k);
    }
    
    Node* deleteNode(Node* root, int k)
    {
        vector<int> v;
        inorder(root,v,k);
        if(v.size()==0) return NULL;
        
        Node *head = new Node(v[0]);
        // head->data = v[0];
        // head->left=head->right=NULL;
        Node *temp=head;
        int i=1;
        while(i<v.size())
        {
            temp->right = new Node(v[i]);
            temp = temp->right;
            ++i;
        }
        return head;
    }
};



// } Driver Code Ends

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        string s;
        getline(cin,s);
        
        root = buildTree(s);
        int k;
        cin>>k;
        getchar();
        Solution obj;
    Node *R= obj.deleteNode(root,k);
    	inorder(R);
      cout<<endl;
    }
}



// } Driver Code Ends