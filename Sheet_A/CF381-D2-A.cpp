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
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,i,s=0,d=0,f=0;
    cin >> n;
    vi a(n);
    forcin(a);
    for(i=0;i<n;i++){
        if(f==0){
            if(a[i]>a[n-1]){
                s+=a[i];
                f=1;
            }
            else{
                s+=a[n-1];
                n--;
                i--;
                f=1;
            }
        }
        else{
            if(a[i]>a[n-1]){
                d+=a[i];
                f=0;
            }
            else{
                d+=a[n-1];
                n--;
                i--;
                f=0;
            }
        }
    }
    cout << s << ' ' << d << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}