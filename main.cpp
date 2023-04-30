//////////////////////////////////////////////////////////////////////////
//TASK3
#include "bits/stdc++.h"

using namespace std;

#define int long long
#define endl "\n"
#define inf (((int)1e18)-1)

void prefix_dif(int n,vector<int> &v, vector<int>&v1){
    int c_mn = v[0];
    int c_mx = v[0];
    int c_dif = 0;
    for(int i = 1 ; i < n ; i ++){
        if(v[i] > c_mx){
            c_mx = v[i];
        }
        if(v[i] < c_mn){
            c_mx = v[i];
            c_mn = v[i];
        }
        c_dif = max(c_dif,c_mx - c_mn);
        v1[i]=c_dif;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i ++)
        cin >> v[i];
    vector<int>pref_dif(n,0);
    prefix_dif(n,v,pref_dif);
    vector<int>suff_dif(n,0);
    reverse(v.begin(),v.end());
    prefix_dif(n,v,suff_dif);
    reverse(suff_dif.begin(),suff_dif.end());
    int res1_up = 0;
    int res1_down = 1;
    int res2 = 0;
    int res2_down = 1;
    for(int i = 0 ; i < n ; i ++){

    }
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << setprecision(15) << fixed;
    int t = 1;
    while (t--)
        solve();
}
//////////////////////////////////////////////////////////////////////////