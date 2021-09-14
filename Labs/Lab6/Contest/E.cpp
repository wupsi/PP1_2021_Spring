#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Hypotenuse(int n, int m){
    return sqrt(n * n + m * m);
}

int main(){
    int a, b; cin >> a >> b;
    cout << setprecision(4) << Hypotenuse(a, b);
}