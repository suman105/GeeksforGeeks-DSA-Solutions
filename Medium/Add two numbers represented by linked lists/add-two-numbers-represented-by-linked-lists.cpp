//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverse(struct Node *root)
    {
       struct Node *newHead=NULL;
        
        while(root!=NULL)
        {
            struct Node *nex=root->next;
            root->next=newHead;
            
            newHead=root;
            root=nex;
        }
        
        return newHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node *l1=reverse(first);
        struct Node *l2=reverse(second);
        
        //short code 
        struct Node *dummy=new Node(0);
        struct Node *temp=dummy;
        int carry=0;
        
        while(l1 || l2 || carry)
        {
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->data;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->data;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            
            //creating new node and assigning value
            struct Node *node=new Node(sum%10);    
            
            temp->next=node;
            temp=temp->next;            
        }
        
        struct Node* ans=reverse(dummy->next);
        return ans;
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends