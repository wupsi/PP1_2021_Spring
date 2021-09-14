#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int d1 = n / 100000, d2 = n / 10000 % 10, d5 = n % 100 / 10, d6 = n % 10;

    if(d1 + d2 == d5 + d6) cout << "YES";
    else cout << "NO";
}