#include<iostream>
#include<vector>
using namespace std;

void rotate_array(vector<int> &v , int k)
{
    if(v.size()==0 || k==0)
        return;

    k=k%v.size();

    vector<int> res(v.size());

    for(int i=0;i<v.size();i++)
        res[(i+k)%v.size()] = v[i];

    for(int i=0;i<v.size();i++)
        v[i]=res[i];

}


int main()
{

    int n;
    cin>>n;

    vector<int> v;

    while(n--)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    int k;
    cin>>k;

    rotate_array(v,k);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
