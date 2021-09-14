#include <iostream>
using namespace std;

int main(){
    int a, b, n; cin >> a >> b >> n;
    a *= n; b *= n;

    if(b >= 100){
        a += b / 100;
        b = b % 100;
    }
    cout << a << " " << b;
}