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
    string s;  cin>>s;
    int n = s.size();
 
    if(n==0) cout<<0<<endl;
 
    int maxLen = 1, currLen = 1;
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1]){
            currLen++;
        }
        else{
            maxLen = max(maxLen, currLen);
            currLen = 1;
        }
    }
    maxLen = max(maxLen, currLen);
    cout<<maxLen<<endl;
 
    return 0;
}
