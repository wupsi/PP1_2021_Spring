#include <iostream>
using namespace std;

int main(){
    string s, x; cin >> s >> x;
    int n; cin >> n;

    for(int i = 0; i < s.size(); i++){
        if(x[0] == s[i]) n--;
    }
    cout <<(n ? "NO" : "YES");
}