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

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends


Node* deleteMid(Node* head)
{
    struct Node *t;
    t=head;
    int c=0;
    while(t!=NULL){
        t=t->next;
        ++c;
    }
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    t=head;
    int mid = c/2;
    while (mid-- > 1) {
        head = head->next;
    }
 
    // Delete the middle node
    head->next = head->next->next;
    
    
    return t;
}