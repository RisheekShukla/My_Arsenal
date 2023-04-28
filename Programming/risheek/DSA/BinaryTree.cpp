#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* right;
    node* left;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* bin_tree(node* root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new node(data);

    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter the value in the left of "<<data<<endl;
    root->left=bin_tree(root->left);
    cout<<"Enter the value in the right of "<<data<<endl;
    root->right=bin_tree(root->right);
    return root;
}
int main() 
{
node * root = NULL;
root = bin_tree(root);
return 0;
}