#include <iostream>
using namespace std;

bool Xor(bool x, bool y){
    return x ^ y;
}

int main(){

    int n, m; cin >> n >> m;
    cout << Xor(n, m);
}