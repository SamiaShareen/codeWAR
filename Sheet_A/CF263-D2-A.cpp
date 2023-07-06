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
    int i,j,a[10][10],r,c,x;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                r=i,c=j;
            }
        }
    }
    r=abs((r-3));
    c=abs((c-3));
    cout << (r+c);
    
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}