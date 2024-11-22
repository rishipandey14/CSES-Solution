#include<bits/stdc++.h>
using namespace std;
 
#define ff        first
#define ss        second
#define ll       long long
#define pb        push_back
#define mp        make_pair
#define pii       pair<int,int>
#define vi        vector<int>
#define mii       map<int, int>
#define pqb       priority_queue<int>
#define pqs       priority_queue<int, vi, greater<int> >
#define mod       1000000007
#define inf       1e18
#define w(x)      int x; cin>>x; while(x--)
#define FIO       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
int main() {
    FIO;
    int n; cin>>n;
    vi arr(n-1);
    ll actual_sum = 0;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        actual_sum += arr[i]; 
    }
    ll sumToBe ;
    if(n % 2 == 0) sumToBe = (n / 2LL) * (n+1);
    else sumToBe = (n + 1) / 2LL * n; 
    cout<<sumToBe - actual_sum<<endl;
    return 0;
}
