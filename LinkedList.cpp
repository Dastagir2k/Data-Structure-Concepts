#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

int main(){
    // initializing array with given values
    vector<int>arr={2,4,6,8};

    // creating new Node with the first element of array
    Node* Head= new Node(arr[0]);
    
 

    // printing the Head's data
    cout<<"Head -->"<<Head->data<<endl;

    // printing the Head's next pointer (nullptr in this case)
    cout<<"Head Next-->"<<Head->next;

    return 0;
}