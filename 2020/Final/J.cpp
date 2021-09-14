#include <iostream>
using namespace std;

int main(){

    string str, sub; cin >> str >> sub;
    int cnt = 0;
    char arr[10000];


    for(int i = 0; i < str.size(); i++){
        arr[i] = str[i];
    }

    char tmp = arr[str.size() - 1];
    for (int i = str.size() - 1; i >= 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = tmp;
    
    for(int i = 0; i < str.size(); i++){
        cout << arr[i];
    }
}