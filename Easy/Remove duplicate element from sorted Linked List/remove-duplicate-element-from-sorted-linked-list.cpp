//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
        set<int> s;
        struct Node *t=head,*l,*m;
        int i,c=0,a[1000000];
        while(t!=NULL){
            s.insert(t->data);
            t=t->next;
        }
        for(auto j = s.begin() ; j != s.end() ; j++)
            a[c++] = *j;
        m = new Node(a[0]);
        t=m;
        l=m;
        for(i=1;i<c;i++){
            m = new Node(a[i]);
            t->next = m;
            t=m;
        }
        return l;
}