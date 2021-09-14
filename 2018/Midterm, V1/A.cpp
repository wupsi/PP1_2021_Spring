// Find the Absolute

#include <iostream>
#include <cmath>
using namespace std;

void Absol(int n, int m){

    cout << abs(n) + abs(m);
}

int main(){

    int n, m; cin >> n >> m;
    
    Absol(n, m);
}