#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    int val = n;

    if(n % 4 == 0) cout << 12;
    else cout << 13;  
    cout << "/" << "09" << "/";
    while(val < 1000){
        cout << "0";
        val *= 10;
    }
    cout << n;
}