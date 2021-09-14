#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int d1 = n / 100, d2 = n / 10 % 10, d3 = n % 10;

    cout << d1 + d2 + d3;
}