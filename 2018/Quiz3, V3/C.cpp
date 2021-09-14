// Aida and binary numbers

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1' and str[i + 1] == '1'){
            str[i] = '0';
            str[i + 1] = 0;
        }
        if(str[i] > 0) cout << str[i];
    }

}