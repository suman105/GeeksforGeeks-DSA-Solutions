//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

// } Driver Code Ends

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    unordered_map<Node*,int> map;
    
    Node *temp = head;
    int i=1;
    while(temp)
    {
        if(map.find(temp)==map.end())
        {
            map[temp] = i;
            ++i;
        }
        else
            return i-map[temp];
        temp = temp->next;
    }
    return 0;
}