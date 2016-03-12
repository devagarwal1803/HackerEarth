#include<iostream>
using namespace std;

int k=1;
int kode = 1;
int p[100000]={0};

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int get_data(struct node *Node , int level , int max_level)
{
    if(level == max_level)
    {

        Node->data=p[k++];
        Node->left = Node->right = NULL;
        cout<<Node->data<<" returned "<<endl;
        return Node->data;
    }

    else
    {
        Node->left = Node->right = new node();
        Node->data = get_data(Node->left , level+1 , max_level)*get_data(Node->right , level+1 , max_level);
        cout<<"value at node "<<kode<<" "<<Node->left->data<<"*"<<Node->right->data<<" = "<<Node->data<<endl;
        kode++;
        return Node->data;
    }
}

void inorder(struct node *tree)
{
    if(tree)
    {
        inorder(tree->left);
        cout<<tree->data<<" ";
        inorder(tree->right);
    }
}

int main()
{
    int l;
    //cin>>l;
    l=3;

    for(int i=0;i<100000;i++)
        p[i]=i;
    k=1;

    int presum[l+1];
    for(int i=0;i<=l;i++)
        presum[i]=0;

    struct node *tree = new node();
    tree->left = tree->right = new node();
    tree->data = get_data(tree->left,2,l)*get_data(tree->right,2,l);

    inorder(tree);

}
