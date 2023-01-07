//https://codeforces.com/contest/1768/problem/C

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
const double EPS=1e-6;

int main(){

    sameh;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        set<int>st1,st2;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=1;i<=n;i++){
            st1.insert(i);
            st2.insert(i);
        }
        int perm1[n]={},perm2[n]={},freq[200005]={};
        bool flag=1;
        for(int i=0;i<n;i++){
            if(freq[v[i]]==0){
                perm1[i]=v[i];
                st1.erase(st1.find(v[i]));
                freq[v[i]]++;
            }
            else if(freq[v[i]]>=2){
                flag=0;
                continue;
            }
            else{
                perm2[i]=v[i];
                st2.erase(st2.find(v[i]));
                freq[v[i]]++;
            }
        }
        if(!flag){
            cout<<"NO"<<el;
            continue;
        }else{
            for(int i=0;i<n;i++){
                if(perm2[i]==0){
                    auto it=st2.upper_bound(perm1[i]);
                    if(it==st2.begin()){
                        cout<<"NO"<<el;
                        flag=0;
                        break;
                    }
                    --it;
                    perm2[i]=*it;
                    st2.erase(it);
                }else{
                    auto it = st1.upper_bound(perm2[i]);
                    if(it==st1.begin()){
                        cout<<"NO"<<el;
                        flag=0;
                        break;
                    }
                    --it;
                    perm1[i]=*it;
                    st1.erase(it);
                }
            }
            if(flag){
                cout<<"YES"<<el;
                for(int i=0;i<n;i++){
                    cout<<perm1[i]<<" ";
                }
                cout<<el;
                for(int i=0;i<n;i++){
                    cout<<perm2[i]<<" ";
                }
                cout<<el;
            }

        }
    }

}