#include<iostream>
using namespace std;


void mark(bool marked[][8] , int i , int j)
{
    for(int k=0;k<8;k++)
    {
        marked[i][k]=true;
        marked[k][j]=true;
    }

    int x=i;
    int y=j;

    while(x>=0 && y>=0)
    {
        marked[x][y]=true;
        x--;
        y--;
    }

    x=i;y=j;
    while(x<=7 && y<=7)
    {
        marked[x][y]=true;
        x++;
        y++;
    }

    x=i;y=j;
    while(x>=0 && x<=7 && y>=0 && y<=7)
    {
        marked[x][y]=true;
        x++;
        y--;
    }

    x=i;y=j;
    while(x>=0 && x<=7 && y>=0 && y<=7)
    {
        marked[x][y]=true;
        x--;
        y++;
    }


}


void print(bool result[][8])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
            cout<<result[i][j]<<" ";
        cout<<endl;
    }
}

void find_solution(bool marked[][8] , bool result[][8])
{

    int counter=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            if(marked[i][j])
                counter++;
        }

    if(counter==64)
    {
        cout<<"Solution found "<<endl;
        print(result);
        cout<<endl;
    }


    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            if(!marked[i][j])
            {
               result[i][j]=true;
               mark(marked,i,j);
               find_solution(marked,result);
            }
        }

}

int main()
{
    bool marked[8][8];
    bool result[8][8];

    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            {
                marked[i][j]=false;
                result[i][j]=false;
            }


    find_solution(marked,result);


}
