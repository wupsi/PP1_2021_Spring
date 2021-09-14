#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto i : mp) if(i.second > 1) cnt++;
    cout << cnt;
}