#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    int d=r/(b+1);
    int m=r%(b+1);
    int ct=0;
    while(ct<r){
        for(int i=0;i<d;i++){
            cout<<"R";
            ct++;
        }
        if(m){
            cout<<"R";
            m--;
            ct++;
        }
        if(b>0){
            cout<<"B";
            b--;
        }
    }
    cout<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}