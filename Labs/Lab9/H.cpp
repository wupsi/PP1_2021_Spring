#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> mp;

    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        mp.insert(make_pair(s, i));
    }
    for(auto i : mp) cout << i.first << " " << i.second << endl;
}