//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int fractional_node(struct Node* head,int k);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* ptr,*start = NULL,*ptr1;
        int n,i;
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            int value;
            cin>>value;
            
            ptr=new Node(value);
            
            if(start==NULL)
            {
                start=ptr;
                ptr1=ptr;
            }
            else
            {
                ptr1->next=ptr;
                ptr1=ptr1->next;
            }
        }
        ptr1->next=NULL;
        int k;
        cin>>k;
        int p = fractional_node(start,k);
        cout<<p<<endl;
    }
}

// } Driver Code Ends

int fractional_node(struct Node *head, int k)
{
    if(head==NULL)
        return 0;
    int l=0,m;
    Node *temp = head,*u;
    while(temp!=NULL){
        temp = temp->next;
        ++l;
    }
    if(l%k == 0)
        m = l/k;
    else
        m = (l/k)+1;
    temp=head;
    while(temp && m){
        u=temp;
        temp = temp->next;
        --m;
    }
    if(u)
        return u->data;
    return 0;
}
