#include <iostream>
using namespace std;

int main(){

    string str, str1, str2; cin >> str >> str1 >> str2;
    int cnt = 0;

    str += str1 + str2;

    for(char s = 'a'; s <= 'z'; s++){
        for(int j = 0; j < str.size(); j++){
            if(str[j] == s) cnt++;
        }
        if(cnt == 0) cout << s;
        cnt = 0;
    }
}