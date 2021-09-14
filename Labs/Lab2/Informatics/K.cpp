#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    n %= 1440;
    cout << n / 60 << " " << n % 60;
}   