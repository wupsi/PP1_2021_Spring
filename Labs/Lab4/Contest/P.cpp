#include <iostream>
using namespace std;

int main(){
    int n, sum = 0; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(i + j == n - 1) sum += arr[i][j];
        }
    }
    cout << sum;
}