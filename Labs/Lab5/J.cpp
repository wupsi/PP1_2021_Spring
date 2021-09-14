#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s; cin >> s;
    string sub = s;

    reverse(s.begin(),s.end());
    if(s == sub or sub.substr(1) == s.substr(0, s.size() - 1)){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}