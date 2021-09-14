#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    n %= 86400;
    cout << n / 3600 << ":";
    if(n / 60 % 60 < 10) cout << 0;
    cout << n / 60 % 60 << ":";
    if(n % 60 < 10) cout << 0;
    cout << n % 60;
}