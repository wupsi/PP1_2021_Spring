// Shooting gallery

#include <iostream>
using namespace std;

int main(){

    int n, point = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        point += arr[i] * i;
    }

    cout << point;
}