#include <iostream>
#include <deque>
using namespace std;
long long printKMax(long long arr[], long long n, long long k,long long val)
{
std::deque<long long>  Qi(k);
long long count=0;
   long long i;
   for (i = 0; i < k; ++i)
   {
       while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
           Qi.pop_back();

       Qi.push_back(i);
   }

   for ( ; i < n; ++i)
   {
   if(arr[Qi.front()]>val)
   count++;

       while ( (!Qi.empty()) && Qi.front() <= i - k)
           Qi.pop_front();
       while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
           Qi.pop_back();

       Qi.push_back(i);
   }
       if(arr[Qi.front()]>val)
   count++;
return count;
}
int main()
{
   int t;
   cin>>t;
   long long n,k;
while(t--){
   cin>>n>>k;
   long long arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   long long count=0;

        for(int i=1;i<=n;i++)
            count+=printKMax(arr,n,i,k);
            cout<<count<<endl;
}
   return 0;
}
