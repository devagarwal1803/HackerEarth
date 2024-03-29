#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        bool dp[n][n];
        int mat[n][n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
                dp[i][j]=false;
            }
        }

        dp[0][0]=true;

        for(int i=1;i<n;i++)
        {
            if(mat[i][0]==1 && mat[i-1][0]==1)
                dp[i][0]=true;
            if(mat[0][i]==1 && mat[0][i-1]==1)
                dp[0][i]==true;
        }

        for(int i=1;i<n;i++)
            for(int j=1;j<n;j++)
        {
            if(mat[i][j]==1 && ( dp[i-1][j] || dp[i][j-1]))
                dp[i][j]=true;
        }

        if(dp[n-1][n-1])
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"<<NOT POSSIBLE"<<endl;
    }
}
