#include<iostream>
#include<stdio.h>
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


bool is_attacking( bool result[][8] , int i , int j)
{

    for(int k=0;k<8;k++)
    {
        if(result[i][k])
            return true;

        if(result[k][j])
            return true;
    }

    int x=i;
    int y=j;

    while(x>=0 && y>=0)
    {
        if(result[x][y])
        return true;
        x--;
        y--;
    }

    x=i;y=j;
    while(x<=7 && y<=7)
    {
        if(result[x][y])
        return true;
        x++;
        y++;
    }

    x=i;y=j;
    while(x>=0 && x<=7 && y>=0 && y<=7)
    {
        if(result[x][y])
        return true;
        x++;
        y--;
    }

    x=i;y=j;
    while(x>=0 && x<=7 && y>=0 && y<=7)
    {
        if(result[x][y])
        return true;
        x--;
        y++;
    }


    return false;


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

void find_solution(bool result[][8])
{

    cout<<"Board is "<<endl;
    print(result);
    cout<<endl;

    int counter=0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            if(result[i][j])
                counter++;
        }

    //cout<<"Queen placed are "<<counter<<endl;

    if(counter==7)
        {
            for(int k=0;k<8;k++)
            {
                for(int l=0;l<8;l++)
                    cout<<result[k][l]<<" ";
                cout<<endl;
            }
            return;
        }

    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {

            if(!is_attacking(result,i,j))
            {
               result[i][j]=true;
               //cout<<"queen placed at "<<i+1<<" "<<j+1<<endl;
               bool result_temp[8][8];

               for(int m=0;m<8;m++)
               for(int n=0;n<8;n++)
                result_temp[m][n]=result[m][n];

               find_solution(result_temp);
            }
        }
}

int main()
{
    freopen("board.txt","w",stdout);

    bool result[8][8];

    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            result[i][j]=false;


    find_solution(result);


}
