// https://codeforces.com/contest/604/problem/C

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
//ll m=1e9+7;

void Hhhh()
{
    int n; cin>>n;
    string s; cin>>s;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])cnt++;
    }
    if(cnt+2>n)
    {
        cout<<n;
    }
    else
    {
        cout<<cnt+2;
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