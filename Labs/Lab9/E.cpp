#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    map<string, int> mp;

    for(int i = 0; i < n; i++){
        string x; cin >> x;
        mp[x]++;
    }
    for(auto i : mp) if(i.second == 3) cnt++;
    cout << cnt;
}