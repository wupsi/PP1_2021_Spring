  
#include <iostream>
using namespace std;

string vow(string str){
    string ans = "";
    for(int i = 0; i < str.size(); i++){
        int cnt = 0;
        for(int j = 0; j < 10; j++){
            if(str[i] == "aeiouAEIOU"[j]) cnt++;
        }
        if(cnt == 0) ans += str[i];
    }
    return ans;
}

int main(){
    string s; getline(cin, s);
    cout << vow(s);
}