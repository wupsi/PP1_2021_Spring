#include <iostream>
using namespace std;

int main(){
    string s, sub = "aeiou"; cin >> s;
    int cnt = 0;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < sub.size(); j++){
            if(s[i] == sub[j]) cnt++;
        }
    }
    cout << cnt;
}