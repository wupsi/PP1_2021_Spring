#include <iostream>
using namespace std;

int main(){
    int n, ans; cin >> n;
    ans = 540 + n * 45 + n / 2 * 15 + (n - n / 2) * 5 - 15 + n % 2 * 10;
    cout << ans / 60 << " " << ans % 60;
}