#include <iostream>
using namespace std;

int main(){

    int n, sum = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] % 3 == 0 or arr[i] % 5 == 0 or arr[i] % 7 == 0) sum += arr[i];
    }

    cout << sum;
}