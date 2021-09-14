#include <iostream>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;
    if(s.find(sub) != -1) cout << "YES";
    else cout << "NO";
}