// https://codeforces.com/contest/296/problem/A

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
//ll m=1e9+7;

void Hhhh()
{
   int n; cin>>n;
   map<int,int>mp;
   vector<int>v(n);
   int mx=-1;
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
       mp[v[i]]++;
       mx=max(mx,mp[v[i]]);
   }
   if(n>=2*mx-1)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }

}

int main()
{
    sameh

    int t=1; //cin>>t;
    while (t--)
    {
        Hhhh();
    }

}
