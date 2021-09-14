#include <iostream>
using namespace std;

string cap(string str){
    string ans = "";
    for(int i = 0; i < str.size(); i++){
        if(i % 2 == 0 and str[i] >= 'a' and str[i] <= 'z') ans += str[i] - ' ';
        else ans += str[i];
    }
    return ans;
}

int main(){
    string s; cin >> s;
    cout << cap(s);
}