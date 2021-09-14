#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    cout << n % 2 * 8 + n % 4 / 2 * 4 + n % 8 / 4 * 2 + n / 8;
}