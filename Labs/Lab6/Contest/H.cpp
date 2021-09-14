#include <iostream>
using namespace std;

bool Valid(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] % 2 == 1) return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    cout << (Valid(s) ? "Valid" : "Not valid");
}