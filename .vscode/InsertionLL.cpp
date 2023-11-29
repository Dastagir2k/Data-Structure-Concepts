
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
// Function to print the linked list
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

// Function to insert a new node at the tail of the linked list
Node* insertTail(Node* head, int val) {
    if (head == NULL)
        return new Node(val);

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    Node* newNode = new Node(val);
    temp->next = newNode;

    return head;
}

Node* insertPosition(Node* Head , int val, int k){
    if(Head==NULL){
        if(k==1){
            return new Node(val);
        }else{
            return Head;
        }
    }
    if(k==1){
        Node* n=new Node(val,Head);
        return n;
    }
    int cnt=0;
    Node* temp=Head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* newNode=new Node(val,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return Head;

}

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

int main() {
    
    vector<int> arr={5,4,3,2,1};
    Node* head= convertArr(arr);
    head=insertPosition(head,6,3);
    // Printing the linked list
    printLL(head);

    return 0;
}


