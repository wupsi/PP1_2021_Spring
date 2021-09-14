#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 122) s[i] -= 25;
        else s[i] += 1;
        cout << s[i];
    }
}