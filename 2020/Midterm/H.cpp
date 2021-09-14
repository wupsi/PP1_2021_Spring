// Shift + Delete

#include <iostream>
using namespace std;

int main(){

    char letter; cin >> letter;
    string str; cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != letter) cout << str[i];
    }
}