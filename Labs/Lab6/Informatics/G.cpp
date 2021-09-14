#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n){
    return pow(a, n);
}

int main(){
    double a; cin >> a;
    int n; cin >> n;
    cout << power(a, n);
}