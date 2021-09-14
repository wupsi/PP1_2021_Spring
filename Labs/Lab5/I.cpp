#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;
    sort(s.begin(), s.end());
    sort(sub.begin(), sub.end());
    if(s == sub) cout << "YES";
    else cout << "NO";
}