#include<bits/stdc++.h>
using namespace std;

#define print(a) for(auto x:a)cout<<x<<' ';cout<<'\n';
#define debug(x) cout<<#x<<" "<<x<<'\n'
#define int   long long int

const int M = 1e9 + 7;
const int N = 2e5 + 10;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = min(a[0],a[1]);
    for(int i = 2; i < n; i++){
        vector<int> b{a[i],a[i-1],a[i-2]};
        sort(b.begin(),b.end());
        ans = max(ans,b[1]);
    }
    cout << ans << '\n';
}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;   cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      //cout<<"Case "<<tc<<": ";
      solve();
   }
   return 0;
}

