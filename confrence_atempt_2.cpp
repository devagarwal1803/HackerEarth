#include<iostream>
#include<map>
#include<list>
#define m 1299709
using namespace std;

struct node
{
    long long int data;
    struct node *left,*right;
};

struct node *make_tree(int level , int max_level , int &lf , long long int level_sum[])
{
    if(level == max_level)
    {
        struct node *temp = new node();
        temp->data=lf%m;
        temp->left = temp->right = NULL;
        lf++;


        level_sum[level] += temp->data;
        return temp;
    }
    else
    {
        struct node *temp = new node();
        temp->left = make_tree(level+1 , max_level , lf , level_sum);
        temp->right = make_tree(level+1,max_level ,lf , level_sum);
        temp->data = (((temp->left->data)%m)*((temp->right->data)%m))%m;
        level_sum[level] += temp->data;
        return temp;
    }
};

int main()
{
    int l,q;
    cin>>l>>q;

    struct node *tree = NULL;
    int leaf_nodes=1;

    long long int level_sum[l+1];

    for(int i=0;i<=l;i++)
        level_sum[i]=0;

    tree = make_tree(1,l,leaf_nodes,level_sum);

    while(q--)
    {
        int x,y;
        cin>>x>>y;

        long long int final_sum=0;

        for(int i=x;i<=y;i++)
            final_sum+=level_sum[i]%m;

        cout<<final_sum%m<<endl;
    }



}
