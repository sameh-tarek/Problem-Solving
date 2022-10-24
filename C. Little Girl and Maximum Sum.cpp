// https://codeforces.com/contest/276/problem/C

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
//ll m=1e9+7;
ll q[1000001];
ll ans[1000001];
void Hhhh()
{
   int n,m; cin>>n>>m;
   vector<int>v(n+1);
   for(int i=1;i<=n;i++)
   {
       cin>>v[i];
   }
   vector<pair<int,int>>v2(m+1);
   for(int i=1;i<=m;i++)
   {
       cin>>v2[i].first>>v2[i].second;
   }
   for(int i=1;i<=m;i++)
   {
       int l=v2[i].first;
       int r=v2[i].second;
       q[l]++;
       q[r+1]--;
   }
   for(int i=1;i<=n;i++)
   {
       q[i]+=q[i-1];
   }
    sort(v.begin(),v.end());
    sort(q,q+n+1);
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=v[i]*q[i];
    }
    cout<<sum;
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
