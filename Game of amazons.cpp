#include<iostream>
using namespace std;

bool make_turn( int a[][10] , int player_id , int x , int y)
{
    bool pos; int posx,posy;
    bool arrow; int arrowx,arrowy;

    int i=x;
    int j=y;

    while(i>=0 && j>=0 )
    {
        if(a[i][j]==0)
        {
            posx=i;
            posy=j;

        }
    }



}
bool make_turn( int a[][10] , int player_id , int x , int y)
{
    bool pos;
    int posx,posy;
    int i=x;
    int j=y;

    while(i>=0 && j>=0 )
    {
        if(a[i][j]==0)
        {
            if()
        }
    }



}


int main()
{
    int input[10][10];
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            cin>>input[i][j];

    int player_id;
    cin>>player_id;

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(input[i][j] == player_id )
            {
                bool is_turn_made = make_turn( input , player_id ,i ,j );
            }
        }
    }
}
