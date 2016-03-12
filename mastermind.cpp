#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<int,int> m;
    map<int,int>::iterator it,ir;
    map<int,bool> nodes;
    map<int,bool> f;
    map<int,bool>::iterator k;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        m[a]=b;
        f[a]=true;
        nodes[a]=true;
    }

    for(it=m.begin();it!=m.end();it++)
    {
        int temp = (*it).second;

        if(temp!=0)
        {
            if(nodes[temp]==true)
            {
                f[temp]=false;
            }
            else
            {
                for(ir=m.begin();ir!=m.end();ir++)
                {
                    int a = (*ir).first;
                    int other = temp-a;

                    if(nodes[other]==true)
                    {
                        f[a]=false;
                        f[other]=false;
                        break;
                    }
                }
            }
        }
    }

    for( k= f.begin();k!=f.end();k++)
    {
        if((*k).second == true)
        {
            cout<<(*k).first;
            break;
        }
    }




}
