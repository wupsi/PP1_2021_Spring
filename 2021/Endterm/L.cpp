#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    string s, str;
    char a[100100];

    for(int i = 0; i < n; i++){
        cin >> s;
        str += s;
    }

    for(int i = 0; i < str.size(); ++i){
        if(a[str[i]] != 1){
        cout << str[i];
        a[str[i]] = 0;
    }
    a[str[i]] = 1;
 }

}
