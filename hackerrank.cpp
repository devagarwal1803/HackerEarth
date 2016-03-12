#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


void print_largest(vector< vector<int> > arr)
{
        int max_sum=0;

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {

                int sum=0;
                for(int k=0;k<3;k++)
                {
                    sum+=arr[i][j+k];
                    sum+=arr[i+2][j+k];
                }

                sum+=arr[i+1][j+1];

                if(sum>max_sum)
                    max_sum=sum;


            }
        }

        cout<<max_sum<<endl;
}



int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    print_largest(arr);

    return 0;
}
