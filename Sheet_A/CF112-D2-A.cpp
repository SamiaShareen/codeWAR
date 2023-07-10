// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int i,j,la,lb;
    string s,t;
    cin >> s >> t;
    for(i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        if(t[i]>='A' && t[i]<='Z'){
            t[i]+=32;
        }
    }
    if(s>t) cout << '1' << el;
    else if(s<t) cout << "-1" << el;
    else cout << '0' << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}