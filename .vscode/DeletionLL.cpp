// Deleting Head of Linked List
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr(vector<int> &arr)
{
    // Create a new node and assign it a value
    Node *Head = new Node(arr[0]);

    // Keep track of the last node visited
    Node *mover = Head;

    // Iterate through the array starting from the second element
    for (int i = 1; i < arr.size(); i++)
    {
        // Create a new node and assign it a value
        Node *temp = new Node(arr[i]);

        // Connect the new node to the previous node
        mover->next = temp;

        // Move the 'mover' to the new node
        mover = temp;
    }

    // Return the head of the new linked list
    return Head;
}

void print(Node* Head){
    Node* temp=Head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* DeleteK(Node* Head,int k){
    if(Head==NULL||Head->next==NULL) return NULL;
 
    if(k==1){
        Node*temp=Head;
        Head=Head->next;
        return Head;
    }
    int cnt=0;
    Node*temp=Head;
    Node*prev =NULL;
    while(temp->next!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return Head;
}
int main()
{
    // initializing array with given values
    vector<int> arr = {2, 4, 6, 8};
    
    Node *Head = convertArr(arr);
    Head=DeleteK(Head,4);
    print(Head);

    return 0;
}