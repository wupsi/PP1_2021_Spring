#include <iostream>
using namespace std;

int main(){

    int n, sum = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] > 1000 or arr[i] < 100) sum += arr[i];
    }

    cout << sum;
}