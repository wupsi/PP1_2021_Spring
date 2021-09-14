#include <iostream>
using namespace std;

bool Lucky(string str){
    int sum = 0;
    for(int i = 0; i < str.size(); i++) sum += str[i] - '0';
    if(sum % (str[str.size() - 1] - '0') == 0) return true;
    else return false;
}

int main(){
    string s; cin >> s;
    cout << (Lucky(s) ? "Yes" : "No");
}