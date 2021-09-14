#include <iostream>
using namespace std;

int main(){
    int n, l, r; cin >> n >> l >> r;
    long long sum = 0;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(i >= l and i <= r) sum += arr[i];
    }
    cout << sum;
}