// Aida and an essay

#include <iostream>
using namespace std;

int main(){

    string str, sub; getline(cin, str);
    int cnt = 0, arr[10000], arr1[10000];

    for(int i = 0; i <= str.size() + 10; i++){
        if(str[i] != ' '){
            cnt++;
            sub = str.substr(i - cnt + 1, cnt);
        }
        else{
            sub = '0';
            if(sub = '0') 
            cnt = 0;
        }
        cout << sub;
    }
}