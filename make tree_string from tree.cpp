#include<iostream>
#include<stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node *newnode(int value)
{
    struct node *temp = new node();
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
};

struct node *insert_node(struct node *root , int value )
{
    if(root==NULL)
        return newnode(value);
    else
    {
        if( value > root->data )
            root->right = insert_node(root->right,value);
        else
            root->left = insert_node(root->left,value);
    }
};

void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

string tree_string;

void make_string(struct node *root)
{
    tree_string+="(";

    if(root)
    {
        char c = (char)(root->data + '0');
        tree_string+=c;
        make_string(root->left);
        make_string(root->right);
        tree_string+=")";
    }
    else
        tree_string+=")";
}

int main()
{
    freopen("tree_string.txt","w",stdout);

    int values[]={7,4,5,6,3,1,2,9,8,0};
    struct node *root = NULL;

    int s = sizeof(values)/sizeof(values[0]);

    for(int i=0;i<s;i++)
        root = insert_node(root,values[i]);

    //inorder(root);
    //cout<<endl;

    tree_string="";

    make_string(root);

    cout<<tree_string<<endl;


}
