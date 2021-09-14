#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(isPrime(arr[i])) cnt++;
    }

    cout << cnt;
}