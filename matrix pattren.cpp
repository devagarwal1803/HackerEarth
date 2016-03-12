#include<bits/stdc++.h>
using namespace std;
typedef vector< vector<int> > vi;
typedef vector< vector<bool> > vb;


void crawl(vi &mat , vb &visited , int direction , int &x , int &y ,int &number , int n)
{
    if(direction == 0)
    {
        while( y < n && visited[x][y]==false)
        {
            mat[x][y++]=number++;
            visited[x][y-1]=true;
        }
        y--;
    }

    if(direction == 1)
    {
        while( x < n && visited[x][y]==false)
        {
            mat[x++][y]=number++;
            visited[x-1][y]=true;
        }
        x--;
    }

    if(direction == 2)
    {
        while( y >= 0  && visited[x][y]==false)
        {
            mat[x][y--]=number++;
            visited[x][y+1]=true;
        }
        y++;
    }

    if(direction == 3)
    {
        while( x >= n && visited[x][y]==false)
        {
            mat[x--][y]=number++;
            visited[x+1][y]=true;
        }
        x++;
    }
}


int main()
{
    int n;
    cin>>n;

    vector< vector<int> > mat(n,vector<int>(n));
    vector< vector<bool> > visited(n,vector<bool>(n));

    int number=1;
    int direction=0;
    int x=0;
    int y=0;



    int ks=10;
    while(ks--)
    {
        cout<<"Direction "<<direction<<endl;
        crawl(mat,visited,direction,x,y,number,n);
        direction++;
        direction = direction%4;

        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;

    }



}
