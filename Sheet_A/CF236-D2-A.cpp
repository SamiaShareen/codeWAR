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
    string s;
    cin >> s;
    int i,a[26]={0},cnt=0;

    for(i=0 ;s[i]; i++){
        a[s[i]-'a']++;
    }
    for(i=0 ;i<26; i++){
        if(a[i]!=0){
            cnt++;
        }
    }
    //cout << cnt;
    if(cnt%2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}