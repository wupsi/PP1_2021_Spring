// Flip

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n, flip = 0, con = 0; cin >> n;
    int arr[9];

    for(int i = 1; i < 9; i++){
        arr[i] = n % 2;
        n /= 2;
        if(arr[i] == 0) arr[i] = 1;
        else arr[i] = 0;
        flip += arr[i] * pow(2.0, i - 1);
    }
    cout << flip;
}