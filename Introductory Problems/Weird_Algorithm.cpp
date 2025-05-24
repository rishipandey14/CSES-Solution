#include<bits/stdc++.h>
using namespace std;
 
#define FIO           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll            long long
#define maxHeap(a)    priority_queue<a>
#define minHeap(a)    priority_queue<a, vec(a), greater<a>>
#define mod           1000000007
#define inf           1e18
#define w(x)          int x; cin>>x; while(x--)
#define f(i, n)       for(int i=0; i<n; i++)
#define all(p)        p.begin(),p.end()
#define ia(a, n)     vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];


int main() {
    FIO;
    ll n;  cin>>n;
    vector<ll> res;
    res.push_back(n);
    
    while(n != 1){
      if(n % 2 == 0){
        n /= 2;
      } else {
        n *= 3;
        n += 1;
      }
      res.push_back(n);
    }
    for(int i=0; i<res.size(); i++) cout << res[i] << " ";
    cout<<endl;
    return 0;
}