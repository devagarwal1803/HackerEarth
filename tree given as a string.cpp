#include<iostream>
#include<stdio.h>
using namespace std;


struct node
{
    int data;
    struct node *left,*right;
};

int pointer;


struct node *newnode(int value)
{
    struct node *temp = new node();
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
};

struct node *make_node(string s)
{
    pointer++;

    if(s[pointer]==')')
    {
        pointer++;
        return NULL;
    }
    else
    {
        int value = (int)(s[pointer]-'0');
        struct node *temp = new node();
        temp->data = value;
        pointer++;
        temp->left = make_node(s);
        temp->right = make_node(s);
        pointer++;
        return temp;
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

int main()
{

    freopen("tree_string.txt","r",stdin);

    string s;
    cin>>s;

    struct node *root = NULL;

    pointer = 0;

    root=make_node(s);

    inorder(root);

}
