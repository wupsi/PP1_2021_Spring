// Polygon

#include <iostream>
using namespace std;

int main(){

    int n, max = -1e9, sum = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }

    for(int i = 1; i <= n; i++){
        sum += arr[i];
    }

    if(sum - max > max) cout << "Yes";
    else cout << "No";
}