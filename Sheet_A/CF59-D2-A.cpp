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
    int i,u=0,l=0;
    for(i=0;s[i];i++){
        if(isupper(s[i])){
            u++;
        }
        else l++;
    }
    if(u>l){
        for(i=0;s[i];i++)
            if(islower(s[i]))
                s[i]=toupper(s[i]);
    }
    if(u<=l){
        for(i=0;s[i];i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
    }
    cout << s << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}