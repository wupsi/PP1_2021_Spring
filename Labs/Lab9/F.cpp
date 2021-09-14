#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;

    for(int i = 0; i < s.size() - 1; i++){
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '(' and s[j + 1] == ')'){
                s += "00";
                s.erase(j, 2);
                cnt += 2;
                break;
                } 
        }
    }
    cout << (s.size() == cnt ? "YES" : "NO");
}