#include<bits/stdc++.h>
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

Node* insertHead(Node* Head,int val){
    Node* temp=Head;
    Node* Last=new Node(val);
    while(temp!=nullptr){
        temp=temp->next;
    }
    temp->next=Last;
    return temp;
}

void print(Node* Head){
    Node* temp=Head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    vector<int> arr={5,4,3,2,1};
    Node* Head= convertArr(arr);
    Head=insertHead(Head,6);
    print(Head);
    return 0;
}