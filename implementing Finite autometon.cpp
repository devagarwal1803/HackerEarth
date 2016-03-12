#include<bits/stdc++.h>
using namespace std;

class DFA
{
private:
    vector<char> inputs;
    map<char,int> *states;
    int n_state;
    int initial_state;
    map<int,bool> final_state;
public:
    DFA(int n, vector<char> v , int i , map<int,bool> f)
    {
        n_state=n;
        states = new map<char,int>[n];
        inputs = v;
        initial_state=i;
        final_state=f;
    }

    void set_transition()
    {
        for(int i=0;i<n_state;i++)
        {
            cout<<"for state "<<i<<endl;
            for(int k=0;k<inputs.size();k++)
            {
                cout<<"("<<i<<") --"<<inputs[k]<<"-->";
                cin>>states[i][inputs[k]];
            }
            cout<<endl;
        }
    }

    void print_transition()
    {
        for(int i=0;i<n_state;i++)
        {
            cout<<"state "<<i<<endl;
            map<char,int>::iterator it;

            for(it=states[i].begin();it!=states[i].end();it++)
                cout<<(*it).first<<" "<<(*it).second<<endl;
            cout<<endl;
        }
    }

    bool is_accepted(string s)
    {
        int state;
        state = states[initial_state][s[0]];

        for(int i=1;i<s.size();i++)
        {
            state = states[state][s[i]];
        }

        if(final_state[state]==true)
            return true;
        else
            return false;
    }
};

int main()
{
    int n;

    vector<char> in;
    cout<<"Input characters "<<endl;
    cin>>n;
    char c;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        in.push_back(c);
    }

    cout<<"Number of states "<<endl;
    cin>>n;

    cout<<"Number of final state"<<endl;
    int f;
    cin>>f;
    map<int,bool> finals;
    for(int i=0;i<f;i++)
    {
        int temp;
        cin>>temp;
        finals[temp]=true;
    }

    DFA dfa(n,in,0,finals);

    finals.clear();
    in.clear();

    dfa.set_transition();
    dfa.print_transition();

    cout<<"Enter String ";
    string s;
    cin>>s;

    cout<<"Result : "<<dfa.is_accepted(s);

}
