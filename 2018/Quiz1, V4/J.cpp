#include <iostream>
using namespace std;

int main(){

    int n, val; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        val ^= arr[i];
    }
    cout << val;
}