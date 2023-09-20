#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n];
     ll brr[m];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    ll c=0;
   sort(arr,arr+n);
   sort(brr,brr+m);
   ll j=0;ll i=0;
   
   while(i<n && j<m)
   {
      if(((arr[i]+k)>=brr[j])&&((arr[i]-k)<=(brr[j])))
     { c++;
       i++;
       j++;
     }
     else if(arr[i]<brr[j])
     i++;
      else 
      j++;

   }
   cout<<c<<endl;
}
int main() {
    ll test = 1;
    //cin >> test;
    while(test--)
    {
        solve();
    }
    return 0;
}