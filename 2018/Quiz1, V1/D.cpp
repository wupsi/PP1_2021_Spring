#include <iostream>
using namespace std;

int main(){

    int n, sum = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] == 4 or arr[i] == 6 or arr[i] == 8 or arr[i] == 9) sum += arr[i];
    }

    cout << sum;
}