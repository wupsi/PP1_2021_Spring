#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        int cnt = 0;
        for(int j = 1; j <= x; j++){
            if(x % j == 0) cnt++;
        }
        mp[cnt] = x;
    }
    for(auto i : mp) cout << i.second << " ";
}

int main(){
    solve();
}