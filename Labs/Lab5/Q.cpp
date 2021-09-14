#include <iostream>
using namespace std;

int main(){
    string s, sub, ans; cin >> s >> sub;
    for(int i = 0; i < sub.size() / s.size(); i++){
        ans += s;
    }
    cout << (ans == sub ? "YES" : "NO");
}