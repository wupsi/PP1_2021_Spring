#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, max, ans; cin >> a >> b;

    if(a >= b) max = a;
    else max = b;

    for(int i = 1; i <= max; i++){
        if(a % i == 0 and b % i == 0) ans = i;
    }
    cout << ans;
}