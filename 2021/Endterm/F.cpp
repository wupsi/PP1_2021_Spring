#include <iostream>
using namespace std;

int main(){

    int n, m, k; cin >> n;

    k = n / 1000;
    m = n % 10;

    cout << k << " " << n / 100 % 10 << " " << n % 100 / 10  <<  " " << m;

}