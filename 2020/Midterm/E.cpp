// Awesome quiz

#include <iostream>
using namespace std;

int main(){

    string str;
    int cnt = 0;
    getline(cin, str);

    for(char s = '0'; s <= '9'; s++){
        for(int j = 0; j < str.size(); j++){
            if(str[j] == s) cnt++;
        }
        if(cnt > 0) cout << s << ": " << cnt << endl;
        cnt = 0;
    }
}