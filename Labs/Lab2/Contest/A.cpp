#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n % 2 == 0 and n != 0) cout << "Even";
    if(n % 2 != 0 and n != 0) cout << "Odd";
    if(n == 0) cout << "None";
}