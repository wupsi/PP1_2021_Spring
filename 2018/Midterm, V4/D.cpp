// Encryption

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'z') str[i] = 'a';
        else str[i] += 1;
        cout << str[i];
    }
}