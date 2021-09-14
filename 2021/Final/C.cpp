#include <iostream>
using namespace std;

int main(){

    int n, sum = 0; cin >> n;
    char arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
}