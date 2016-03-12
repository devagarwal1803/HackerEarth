#include<bits/stdc++.h>
using namespace std;
int state_matrix[5][5];
int edge_matrix[5][5];

int calculate_edges( int s )
{
    int k=4;
    vector<int> v;
    while(k--)
    {
        v.push_back(s%2);
        s=s/2;
    }

    int counter=0;
    for(int i=0;i<4;i++)
        if(v[i]==1)
        counter++;

    return counter;
}

int calculate( int s )
{
    int k=4;
    vector<int> v;
    while(k--)
    {
        v.insert(v.begin(),s%2);
        s=s/2;
    }

    for(int i=0;i<4;i++)
        if(v[i]==0)
        return i;

}



void update(int x , int y , int edge )
{
    state_matrix[x][y] += pow(2,edge);
    edge_matrix[x][y]++;
}


void update_state(int x , int y , int edge)
{

                update(x,y,edge);

                if(x==0 &&y==0)
                {

                    if(edge==1)
                        update(x,y+1,edge);
                    else if(edge==2)
                        update(x+1,y,edge);
                }
                else if(x==0&&y==4)
                {
                    if(edge==0)
                        update(x-1,y,edge);
                    else if(edge==1)
                        update(x,y+1,edge);
                }
                else if(x==4&&y==0)
                {

                    if(edge==2)
                        update(x+1,y,edge);
                    else if(edge==3)
                        update(x,y-1,edge);
                }
                else if(x==4&&y==4)
                {
                    if(edge==0)
                        update(x-1,y,edge);
                    else if(edge==3)
                        update(x,y-1,edge);
                }

                else if(x==0)
                {
                    if(edge==1)
                        update(x,y+1,edge);
                    else if(edge==2)
                        update(x+1,y,edge);
                    else if(edge==3)
                        update(x,y-1,edge);
                }

                else if(x==4)
                {
                    if(edge==0)
                        update(x-1,y,edge);
                    else if(edge==1)
                        update(x,y+1,edge);
                    else if(edge==3)
                        update(x,y-1,edge);
                }

                else if(y==0)
                {
                    if(edge==0)
                        update(x-1,y,edge);
                    else if(edge==1)
                        update(x,y+1,edge);
                    else if(edge==2)
                        update(x+1,y,edge);
                }

                else if(y==4)
                {
                    if(edge==0)
                        update(x-1,y,edge);
                    else if(edge==2)
                        update(x+1,y,edge);
                    else if(edge==3)
                        update(x,y-1,edge);
                }

                else
                {
                    if(edge==0)
                        update(x-1,y,edge);
                    else if(edge==1)
                        update(x,y+1,edge);
                    else if(edge==2)
                        update(x+1,y,edge);
                    else if(edge==3)
                        update(x,y-1,edge);
                }
}


int main()
{
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            //cin>>state_matrix[i][j];
            state_matrix[i][j]=0;
            edge_matrix[i][j]=calculate_edges(state_matrix[i][j]);
        }
    srand(time(NULL));
    int x=rand()%5;
    int y=rand()%5;


    while(1)
    {
    if(edge_matrix[x][y]==4)
    {
        while(edge_matrix[x][y]==4)
        {
            x=rand()%5;
            y=rand()%5;
        }
    }

    cout<<x<<" "<<y<<" ";
    int edge = calculate(state_matrix[x][y]);
    cout<<edge<<endl;
    update_state(x,y,edge);
    int a,b,c;
    cin>>a>>b>>c;
    update_state(a,b,c);
    }


}
