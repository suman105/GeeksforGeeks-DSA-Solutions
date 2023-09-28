//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}

// } Driver Code Ends

struct Node* partition(struct Node* head, int x)
{
    Node *first,*second,*third,*temp=head,*y;
    Node *f,*s,*t;
    f = new Node(0);
    s = new Node(0);
    t = new Node(0);
    first = f;
    second = s;
    third = t;
    while(temp!=NULL)
    {
        if(temp->data < x)
        {
            y = new Node(temp->data);
            f->next = y;
            f=y;
        }
        else if(temp->data > x)
        {
            y = new Node(temp->data);
            s->next = y;
            s=y;
        }
        else
        {
            y = new Node(temp->data);
            t->next = y;
            t=y;
        }
        temp = temp->next;
    }
    first = first->next;
    second = second->next;
    third = third->next;
    
    // f->next = third;
    // t->next = second;
    if(first!=NULL && third!=NULL)
    {
        f->next = third;
        t->next = second;
        return first;
    }
    
    else if(first==NULL && third!=NULL)
    {
        t->next = second;
        return third;
    }
    
    else if(first!=NULL && third==NULL)
    {
        f->next = second;
        return first;
    }
    
    else if(first==NULL && third==NULL)
        return second;
    
}