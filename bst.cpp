#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node  *right;
};
Node *createnode(int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->left=newNode->right=nullptr;
    return newNode;
}
Node *insert(Node * root,int data)
{
    if(root==nullptr)
    {
       root=createnode(data);
    }
    else if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(Node * root)
{
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{

   Node* root=nullptr;

    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        root=insert(root,x);
    }

    cout << "Inorder traversal: ";
    inorder(root);

return 0;
}