#include <iostream>
using namespace std;

int main(){

    int a, b, c, d, total = 0; cin >> a >> b >> c >> d;

    total = a * 10 + b * 25 + c * 5 + d * 100;

    cout << total / 100 << " " << total % 100;
}