// Password generator

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;
    int cnt = 0;

    for(int i = 0; i < str.size(); i++){
        if(str.size() >= 8){
            if(str[i] >= 'A' and str[i] <= 'Z'){
                cnt++;
                break;
            }
        }
    }

    for(int i = 0; i < str.size(); i++){
        if(str.size() >= 8){
            if(str[i] >= 'a' and str[i] <= 'z'){
                cnt++;
                break;
            }
        }
    }

    for(int i = 0; i < str.size(); i++){
        if(str.size() >= 8){
            if(str[i] >= '1' and str[i] <= '9'){
                cnt++;
                break;
            }
        }
    }
    
    if(cnt == 3) cout << "Yes";
    else cout << "No";
}