#include <bits/stdc++.h>
using namespace std;
 
struct node
{
    int data;
    node * left;
    node * right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

// Preorder Traversal [ N , L , R ]
void preorder(node * temp)
{
    if(!temp)
    {
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}

// Postorder Traversal [ L , R , N ]
void postorder(node * temp)
{
    if(!temp)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}

// Inorder Traversal [ L , N ,R ]
void inorder(node * temp)
{
    if(!temp)
    {
        return;
    }
    postorder(temp->left);
    cout<<temp->data<<" ";
    postorder(temp->right);
}

// Level Order Traversal [Breadth First Traversal]
vector<vector<int>> levelorder(node * root)
{
    vector<vector<int>> ans;
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        vector<int>level;
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            node* newnode = q.front();
            q.pop();
            if(newnode->left!=NULL)
            {
                q.push(newnode->left);
            }
            if(newnode->right!=NULL)
            {
                q.push(newnode->right);
            }        
        level.push_back(newnode->data);   
        }
        ans.push_back(level);
    }
    return ans;
}

// Iterative Preorder Traversal
vector<int> IterPreorder(node * root)
{
    vector<int>preorder;
    if(root==NULL)
    {
         return preorder;
    }
    stack<node*>st;
    st.push(root);
    while(!st.empty())
    {
        root = st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right)
        {
            st.push(root->right);
        }
        if(root->left)
        {
            st.push(root->left);
        }
    }
    return preorder;
}

// Iterative Postorder Traversal [2 stacks]
vector<int>IterPostorder(node*root)
{
    vector<int>postorder;
    if(root==NULL)
    {
        return postorder;
    }
    stack<node *>s1,s2;
    s1.push(root);
    //s2.push(root);
    while(!s1.empty())
    {
       root=s1.top();
       s1.pop();
       if(root->left)
       {
        s1.push(root->left);
       }
       if(root->right)
       {
        s1.push(root->right);
       }
       s2.push(root);
    }
    while(!s2.empty())
    {
        postorder.push_back(s2.top()->data);
        s2.pop();
    }
    return postorder;
}

int main() 
{
node* root = new node(4);
root->left=new node(3);
root->right = new node(5);
root->left->left=new node(1);
vector<int>arr;
// cout<<"Preorder :- ";
// preorder(root);
// cout<<endl;
 cout<<"Postorder :- ";
 postorder(root);
 cout<<endl;
// cout<<"Inorder :- ";
// inorder(root);
cout<<"\nLevel Order ";
levelorder(root);
// arr = IterPreorder(root);
// cout<<"IterPostorder"<<endl;
// arr = IterPostorder(root);
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}