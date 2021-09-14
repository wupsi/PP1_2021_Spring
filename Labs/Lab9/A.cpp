#include <iostream>
#include <set>
using namespace std;

int main(){
    int n; cin >> n;
    multiset<pair<int, int>> mp;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        mp.insert(make_pair(x, y));
    }

    for(multiset<pair<int, int>> :: iterator it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}