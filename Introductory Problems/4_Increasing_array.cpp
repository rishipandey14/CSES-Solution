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
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 
    long long cnt = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            cnt += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout<<cnt<<endl;
 
    return 0;
}
