#include <iostream>
using namespace std;

int sum(string str){
    int digits = 0;
    for(int i = 0; i < str.size(); i++) digits += str[i] - '0';
    return digits;
}

int main(){
    string s; cin >> s;
    cout << sum(s);
}