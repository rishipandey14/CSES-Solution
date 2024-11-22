#include<bits/stdc++.h>
using namespace std;
 
#define ff        first
#define dd        double
#define ss        second
#define ll       long long
#define pb        push_back
#define mp        make_pair
#define pii       pair<int,int>
#define vi        vector<int>
#define floop        for(int i=0; i<n; i++)
#define mii       map<int, int>
#define pqb       priority_queue<int>
#define pqs       priority_queue<int, vi, greater<int> >
#define mod       1000000007
#define inf       1e18
#define w(x)      int x; cin>>x; while(x--)
#define FIO       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
 
int main() {
    FIO;
    ll n;  cin>>n;
    vector<ll> res;
    res.push_back(n);
 
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            if(n > (LLONG_MAX - 1) / 3){
                return 1;
            }
            n = 3 * n + 1;
        }
        res.push_back(n);
    }
    for(size_t i=0; i<res.size(); i++){
        cout<<res[i];
        if(i != res.size() - 1) cout<<" ";
    }
    cout<<endl;
    return 0;
}