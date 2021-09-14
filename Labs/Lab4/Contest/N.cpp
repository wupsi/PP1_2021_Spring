#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 0 or n == 1){
        return false;
    }
    else{
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n; cin >> n;

    for(int i = 2; i <= n; i++){
        if(isPrime(i)) cout << i << " is prime" << endl;
    }
}