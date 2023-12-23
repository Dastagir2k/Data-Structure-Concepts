#include<bits/stdc++.h>
using namespace std;

struct BinaryTree
{
    /* data */
    int data;
    struct BinaryTree *left,*right;
    BinaryTree(int val){
        data=val;
        left=right=NULL;
    }
};

 void inOrder(struct BinaryTree* temp){
    if(temp==NULL){
        return;
    }
    inOrder(temp->left);
    cout<<temp->data<<" ";
    inOrder(temp->right);
 }
 void preOrder(struct BinaryTree* temp){
    if(temp==NULL){
        return;
    }
    cout<<temp->data<<" ";
    inOrder(temp->left);
    inOrder(temp->right);
 }
 void postOrder(struct BinaryTree* temp){
    if(temp==NULL){
        return;
    }
    inOrder(temp->left);
    inOrder(temp->right);
    cout<<temp->data<<" ";
 }


int main(int argc, char const *argv[])
{
    /* code */
    struct BinaryTree* root=new BinaryTree(1);
    root->left=new BinaryTree(2);
    root->right=new BinaryTree(3);
    root->left->left=new BinaryTree(4);
    root->left->right=new BinaryTree(5);
    cout<<"PreOrder traversal of binary tree is \n";
    preOrder(root);
    return 0;
}
