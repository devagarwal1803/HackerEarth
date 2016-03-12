#include<bits/stdc++.h>
#define mod 10000007
using namespace std;

int solution;

map<int,int*> dp;

vector<int> make_num(int n)
{
    vector<int> v;
    for(int i=1;i<=n/2;i++)
        v.push_back(i);
    v.push_back(n);
    return v;
}

void evaluate( int k , int n )
{

    if(k==1)
        {
            solution++;
            if(solution>mod)
                solution=solution-mod;
        }
    else
    {

        if(dp[k][n]!=0)
        {
            solution+=dp[k][n];
            if(solution>mod)
                solution=solution-mod;
            //cout<<"HIT "<<endl;
            return;
        }

        vector<int> v;
        v=make_num(n);

        for(int i=0;i<v.size();i++)
        {
            if(n%v[i]==0 && n/v[i]-1>0)
                evaluate(k-1,n/v[i]-1);
        }
    }

}

int main()
{
    int t;
    cin>>t;

    int *p = new int[100001];
    for(int i=0;i<=100000;i++)
        p[i]=0;

    for(int i=1;i<=50;i++)
        dp[i]=p;
    while(t--)
    {
        solution=0;
        int k,n;
        cin>>k>>n;

        if(n<k)
        {
            cout<<0<<endl;
            continue;
        }

        evaluate(k,n);

        dp[k][n]=solution;

        cout<<solution<<endl;
    }



}
