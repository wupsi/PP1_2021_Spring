#include <iostream>
using namespace std;

int main(){

    long long n, m, sum = 0; cin >> n >> m;

    for(int i = n; i <= m; i++){
        sum += i * i;
    }
    cout << sum;
}