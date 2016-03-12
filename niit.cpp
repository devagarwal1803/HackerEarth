#include<iostream>
#include<vector>
using namespace std;

struct node
{
    char c;
    vector<char> v;
    int level;
    struct node *left;
    struct node *right;
};

struct node *newnode(char ca , int l)
{
    struct node *temp = new node();
    temp->c=ca;
    temp->level=l;
    temp->left=temp->right=NULL;
    return temp;
};

void print_permutations(struct node *tree , int n)
{

    if(tree->level == n)
    {
        for(int i=0;i<tree->v.size();i++)
            cout<<tree->v[i];
        cout<<endl;
        return ;
    }

    if(tree->c == 'Y')
    {
        struct node *l = newnode('X',tree->level+1);
        struct node *r = newnode('Y',tree->level+1);


        vector<char> t1(tree->v);
        vector<char> t2(tree->v);
        t1.push_back('Y');
        t2.push_back('X');

        l->v=t1;
        r->v=t2;

        print_permutations(l,n);
        print_permutations(r,n);
    }
    else
    {
        struct node *t = newnode('Y',tree->level+1);
        vector<char> t1(tree->v);
        t1.push_back('X');
        t->v = t1;
        print_permutations(t,n);
    }
}


int main()
{
    int n;
    cin>>n;



    struct node *tree = newnode('Y',0);


    print_permutations(tree,n);

}
