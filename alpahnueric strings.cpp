#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int k=0;k<t;k++)
    {
        fflush(stdin);
        char s[201];
        gets(s);

        string word="";
        set<string> words;
        int digit_sum=0;

        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='0' && s[i]<='9')
                digit_sum+=(int)(s[i]-'0');
            else if(s[i]==' ')
                {
                    words.insert(word);
                    word="";
                }
            else
                word+=s[i];
        }

        words.insert(word);

        set<string>::iterator it;

        for(it=words.begin();it!=words.end();it++)
        {
            digit_sum = digit_sum-(*it).size();
            cout<<(*it)<<" "<<abs(digit_sum)<<" ";
        }
        cout<<endl;
    }
}
