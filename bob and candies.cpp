#include<bits/stdc++.h>
using namespace std;

set< vector<int> > sol;
int min_size = INT_MAX;

struct node
{
    int value;
    struct node *left , *right;
    vector<int> v;
};

struct node *newnode(int data)
{
    struct node *temp = new node();
    temp->value = data;
    temp->left=temp->right=NULL;
    return temp;
};

struct node *make_tree(struct node *root , int a[] , int index ,int n , int sum)
{
    if(index == n )
        return NULL;

    vector<int> l(root->v) , r(root->v);


    root->left = newnode(root->value);
    root->left->v = l;
    make_tree(root->left , a , index+1 , n , sum);

    //if(root->value + a[index] <= sum)
    {
        r.push_back(index+1);
        root->right = newnode(root->value + a[index]);
        root->right->v=r;

        if(root->right->value == sum)
        {

            if(r.size() <= min_size)
               {
                   sort(r.begin(),r.end());
                   sol.insert(r);
                   min_size=r.size();
               }
        }


        make_tree(root->right , a , index+1 , n , sum);
    }

};

void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->value<<" ";
        inorder(root->right);
    }
}

int main()
{
    struct node *tree=new node();

    int a[]={1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    int x =9;

    make_tree(tree , a , 0 , n , x);

    set< vector<int> >::iterator it;

    if(sol.size()==0)
    {
        cout<<-1;
        return 0;
    }


   //inorder(tree);



    for(it=sol.begin();it!=sol.end();it++)
    {
        //if((*it).size()==min_size)
        {
            for(int k=0;k<(*it).size();k++)
                cout<<(*it)[k]<<" ";

                cout<<endl;
            //break;
        }
    }






}
