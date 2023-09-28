//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

// } Driver Code Ends

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        Node* temp=new Node(0),*ptr;
        ptr = temp;
        
        if(head->data != head->next->data){
            temp->next = head;
            temp=head;
        }
        
        Node*prev,*cur;
        prev = head;
        cur = head->next;
        
        while(cur->next!=NULL)
        {
            if(cur->data!=prev->data && cur->data!=cur->next->data){
                temp->next = new Node(cur->data);
                temp=temp->next;
            }
            prev=cur;
            cur=cur->next;
        }
        
        if(prev->data!=cur->data)
        {
            temp->next = new Node(cur->data);
            temp=temp->next;
        }
        
        return ptr->next;
    }
};



//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;


	while (T--)
	{
		int N;

		cin >> N ;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		Solution ob;
		head = ob.removeAllDuplicates(head);
		printList(head);

		cout << "\n";


	}
	return 0;
}

// } Driver Code Ends