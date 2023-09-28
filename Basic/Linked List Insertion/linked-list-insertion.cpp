//{ Driver Code Starts
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
    Node *insertAtBegining(Node *head, int x) 
    {
       if(head==NULL)
           head =new Node(x);
    
       else
       {
           Node *t = new Node(x);
           t->next = head;
           head = t;
       }
       return head;
    }
    Node *insertAtEnd(Node *head, int x) 
    {
       Node *temp = head;
       if(head==NULL){
           head =new Node(x);
           temp = head;
       }
       else
       {
           while(temp->next!=NULL)
           {
               temp = temp->next;
           }
           temp->next = new Node(x);
           temp = temp->next;
       }
       return head;
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
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 


// } Driver Code Ends