#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - 1; j++){
            cout << s << " ";
            string x = "";
            x += s[j];
            x += s[j + 1];
            if(s[j] != 'a' or s[j] != 'a'){
                if(ceil(sqrt(stoi(x))) * ceil(sqrt(stoi(x))) == stoi(x)){
                    s.erase(i, 2);
                    s += "aa";
                }
            }
        }
    }
    cout << s;
}