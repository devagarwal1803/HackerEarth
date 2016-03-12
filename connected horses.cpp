#include<bits/stdc++.h>
using namespace std;

int global_n;
int global_m;
bool check_valid( int a , int b )
{
    return (a>=0 && a<=global_n-1 && b>=0 && b<=global_m-1);
}


int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;

        global_m=m;
        global_n=n;

        int board[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            board[i][j]=0;
        bool horses[n][m];

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            horses[i][j]=false;

        while(q--)
        {
            int a,b;
            cin>>a>>b;
            horses[a-1][b-1]=true;
        }

        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(horses[i][j]==true)
            {
                if(check_valid(i-2,j-1) && horses[i-2][j-1])
                {
                    board[i][j]++;
                    board[i-2][j-1]--;
                }

                if(check_valid(i-2,j+1) && horses[i-2][j+1])
                {
                    board[i][j]++;
                    board[i-2][j+1]--;
                }

                if(check_valid(i+2,j+1) && horses[i+2][j+1])
                {
                    board[i][j]++;
                    board[i+2][j+1]--;
                }

                if(check_valid(i-1,j-2) && horses[i-1][j-2])
                {
                    board[i][j]++;
                    board[i-1][j-2]--;
                }

                if(check_valid(i-1,j+2) && horses[i-1][j+2])
                {
                    board[i][j]++;
                    board[i-1][j+2]--;
                }

                if(check_valid(i+1,j-2) && horses[i+1][j-2])
                {
                    board[i][j]++;
                    board[i+1][j-2]--;
                }

                if(check_valid(i+1,j+2) && horses[i+1][j+2])
                {
                    board[i][j]++;
                    board[i+1][j+2]--;
                }

                if(check_valid(i+2,j-1) && horses[i+2][j-1])
                {
                    board[i][j]++;
                    board[i+2][j-1]--;
                }
            }

        }


        for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                    cout<<board[i][j]<<" ";
                cout<<endl;
            }



    }
}
