#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n){
    double ans = 1;
    for(int i = 1; i <= abs(n); i++) ans *= a;
    if(n >= 0) return ans;
    else return 1 / ans;
}

int main(){
    double a; cin >> a;
    int n; cin >> n;
    cout << power(a, n);
}