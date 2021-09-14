#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') cout << s[i];
        else if(s[i] == '1' and s[i + 1] == '1') i++;
        else cout << s[i];
    }
}