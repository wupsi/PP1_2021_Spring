#include <iostream>
using namespace std;

char upper(char a){
    if(a >= 'a' and a <= 'z') return a - ' ';
    else return a;
}

int main(){
    char a; cin >> a;
    cout << upper(a);
}