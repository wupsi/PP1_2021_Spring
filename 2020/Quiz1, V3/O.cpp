#include <iostream>
using namespace std;

int main(){

    int a, b; cin >> a;
    char sym; cin >> sym;
    cin >> b;

    if(sym == '+') cout << a << " + " << b << " = " << a + b;
    if(sym == '-') cout << a << " - " << b << " = " << a - b;
    if(sym == '*') cout << a << " * " << b << " = " << a * b;
    if(sym == '/') cout << a << " / " << b << " = " << a / b;
}