// Repeating letters

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;
    int arr[256];

    for(int i = 0; i < str.size(); i++){
        if(arr[str[i]] == 1) cout << str[i];
        arr[str[i]] = 1;
    }
}