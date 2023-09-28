//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends

class Solution{
public:
    Node* divide(int N, Node *head)
    {
        Node *a = new Node(0); //even case
        Node *b = new Node(0); //odd case
        Node *a1=a,*a2=b;
        
        while(head!=NULL)
        {
            if((head->data)%2==0)
            {
                a1->next = new Node(head->data);
                a1 = a1->next;
            }
            else{
                a2->next = new Node(head->data);
                a2 = a2->next;
            }
            head = head->next;
        }
        
        a = a->next;
        b = b->next;
        
        if(a==NULL)
            return b;
        a1->next = b;
        
        return a;
    }
};



//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends