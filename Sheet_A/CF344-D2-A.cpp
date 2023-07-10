// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,x,y,i,cnt=0;
    vi a;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x ;
        a.pb(x);
    }
    //forcout(a);
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }
    }

    cout << (cnt+1) << el;
}


int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}