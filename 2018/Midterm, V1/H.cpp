// RGB

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;
    int cnt = 0;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'r' and str[i + 1] == 'g' and str[i + 2] == 'b') cnt++;
    }
    cout << cnt;
}