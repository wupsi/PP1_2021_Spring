#include <iostream>
using namespace std;

double power(double a, int n){
    double ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= a;
    }
    return ans;
}

int main(){
    double a; cin >> a;
    int n; cin >> n;
    cout << power(a, n);
}