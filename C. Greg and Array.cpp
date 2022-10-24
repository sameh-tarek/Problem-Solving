// https://codeforces.com/problemset/problem/296/C

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
//ll m=1e9+7;
ll q[100005];
ll ans[100005];
void Hhhh()
{
    int n,m,k; cin>>n>>m>>k;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
   vector<pair<int,int>>lr(m+1);
   vector<ll>val(m+1);
   for(int i=1;i<=m;i++)
   {
       cin>>lr[i].first>>lr[i].second;
       cin>>val[i];
   }
   vector<pair<int,int>>qui(k+1);
   for(int i=1;i<=k;i++)
   {
       cin>>qui[i].first>>qui[i].second;
   }
   for(int i=1;i<=k;i++)
   {
     q[qui[i].first]++;
     q[(qui[i].second)+1]--;
   }
   for(int i=1;i<=m;i++)
   {
       q[i]+=q[i-1];
   }
   for(int i=1;i<=m;i++)
   {
       val[i]*=q[i];
   }
   for(int i=1;i<=m;i++)
   {
       ans[lr[i].first]+=val[i];
       ans[(lr[i].second)+1]-=val[i];
   }
   for(int i=1;i<=n;i++)
   {
       ans[i]+=ans[i-1];
   }
   for(int i=1;i<=n;i++)
   {
       cout<<v[i]+ans[i]<<" ";
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
