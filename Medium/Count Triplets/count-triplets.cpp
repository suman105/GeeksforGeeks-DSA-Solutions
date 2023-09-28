//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}
// } Driver Code Ends

int countTriplets(struct Node* head, int x) 
{ 
    vector<int> v;
    while(head!=NULL)
    {
        v.push_back(head->data);
        head=head->next;
    }
    
    int i,j,k,n,count=0;
    n = v.size();
    
    for(i=0;i<n-2;i++)
    {
        j = i+1;
        k = n-1;
        while(j<k)
        {
            if(v[i]+v[j]+v[k] == x){
                ++count;
                ++j;
                --k;
            }
            else if(v[i]+v[j]+v[k] > x)
                --k;
            else
                ++j;
        }
    }
    return count;
    
} 