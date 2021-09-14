#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, string> mp;

    for(int i = 0; i < n; i++){
        string login, password; cin >> login >> password;
        mp[login] = password;
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        string login, password; cin >> login >> password;
        if(mp[login].empty()) cout << "login error" << endl;
        else if(mp[login] != password) cout << "password error" << endl;
        else cout << "correct password" << endl;
    }
}