#include<bits/stdc++.h>
#define Max 1000000
using namespace std;

int main()
{
    char s[Max];
    gets(s);

    int length = 0;
    for(int i=0;s[i]!='\0';i++)
        length++;

    /* Input validation */
    if(length<1 || length>=7)
    {
        cout<<"Invalid string size"<<endl;
        return 0;
    }

    /* Printing permutaions of strings */
    while(next_permutation(s,s+length))
    {
        cout<<s<<endl;
    }
    cout<<s<<endl;

    return 0;

}
