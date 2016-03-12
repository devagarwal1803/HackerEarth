#include<bits/stdc++.h>
using namespace std;

class graph
{
private:
    int **travel;
    int **taxi;
    int n;
public:
    graph(int v)
    {
        travel = new int*[v];
        taxi = new int*[v];

        for(int i=0;i<v;i++)
            {
                travel[i] = new int[v];
                taxi[i] = new int[v];
            }
        for(int i=0;i<v;i++)
            for(int j=0;j<v;j++)
        {
            travel[i][j]=0;
            taxi[i][j]=0;
        }
        n=v;
    }

    void add_edge(int a, int b ,int c,int d)
    {
        travel[a][[b]=c;
        taxi[a][b]=d;
    }
};

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        graph g(n);

        while(m--)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            g.add_edge(a,b,c,d);
        }
    }
}
