#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    multimap<string, int> mp;

    for(int i = 0; i < n; i++){
        int x, y, cnt = 0; 
        string s, t;
        cin >> s >> x >> t >> y;
        string key = s + " and " + t;
        for(auto i : mp){
            if(i.first == key and i.second == x + y) cnt++;
        }
        if(cnt == 0) mp.insert(make_pair(key, x + y));
    }
    for(auto i : mp) cout << i.first << " " << i.second << endl;
}