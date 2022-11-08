#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
   int val;
   struct TreeNode* left;
   struct TreeNode* right;
};
typedef struct TreeNode bst;
bst* NewNode(int val)
{
    bst* root;
    root=new bst();
    root->val=val;
    root->left=NULL;
    root->right=NULL;
}
bst* findmin(bst* right)
{
       bst* current=right;
       while(current && current->left)
         current=current->left;
         return current;
}
bst* deleteNode(bst* root, int key)
{
    if(root==NULL)
       return root;
    if(root->val>key)
    {
        root->left=deleteNode(root->left,key);
    }
    else if(root->val<key)
    {
        root->right=deleteNode(root->right,key);
    }
    else 
    {
        if(root->left==NULL && root->right==NULL)
         return NULL;
        else if(root->left==NULL)
        {
               bst* temp=root->right;
                delete(root);
              return temp;
        }
        else if(root->right==NULL)
        {
            bst* temp=root->left;
             delete(root);
              return temp;
        }
        else
        {
             bst* temp=findmin(root->right);
             root->val=temp->val;
            root->right= deleteNode(root->right,temp->val);
            return root;
        }
    }
}
bst* insert(bst* root, int val)
{
    if(root==NULL)
    {
        return NewNode(val);
    }
    if(root->val>val)
    {
         root->left=insert(root->left,val);
    }
    else if(root->val<val)
    {
         root->right=insert(root->right,val);
    }
    return root;
}
void inorder(bst* root)
{
if(root!=NULL)
{
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
}
int main()
{
       bst *root=NULL;
    // int arr[]={50,30,20,40,70,60,80};
     int arr[]={5,3,6,2,4,7};
     int n=sizeof(arr)/sizeof(arr[0]);
    for (int key=0; key<n; key++) 
    {
        root = insert(root, arr[key]);
    }   
      root=deleteNode(root,3);
      inorder(root);
}