#include<bits/stdc++.h>
using namespace std;

int lps(string str , vector<int> &v)
{
   int n = str.size();
   int i, j, cl;
   int L[n][n];

   for (i = 0; i < n; i++)
      L[i][i] = 1;

    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
               L[i][j] = 2;
            else if (str[i] == str[j])
               L[i][j] = L[i+1][j-1] + 2;
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
            cout<<L[i][j]<<" ";
        cout<<endl;
    }

    return L[0][n-1];
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a;
        string b;

        cin>>a>>b;

        int sa = lps(a);
        int sb = lps(b);

        if(sa%2==1 && sb%2==1)
        {
            int t=rand()%2;
            if(t=1)
                cout<<sa+sb<<endl;
            else
                cout<<sa+sb-1<<endl;
        }
        else
            cout<<sa+sb<<endl;

    }
}
