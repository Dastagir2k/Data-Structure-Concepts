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
int main()
{
    // initializing array with given values
    vector<int> arr = {2, 4, 6, 8};

    Node *Head = convertArr(arr);
    cout << Head->data;

    return 0;
}