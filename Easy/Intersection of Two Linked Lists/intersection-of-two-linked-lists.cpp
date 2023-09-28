//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}


// } Driver Code Ends

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        set<int> s;
        int i,a[10000],b[10000],k=0,c=0;
        struct Node *t,*l,*m;
        t = head2;
        while(t!=NULL)
        {
            s.insert(t->data);
            t = t->next;
        }
        t = head1;
        while(t!=NULL){
            a[c++] = t->data;
            t =t->next;
        }
        for(i=0;i<c;i++){
            if(s.find(a[i]) != s.end())
                b[k++]=a[i];
        }
        m = new Node(b[0]);
        t=l=m;
        for(i=1;i<k;i++){
            m = new Node(b[i]);
            t->next = m;
            t=m;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends