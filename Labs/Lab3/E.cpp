#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    long long sum = 0;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
}