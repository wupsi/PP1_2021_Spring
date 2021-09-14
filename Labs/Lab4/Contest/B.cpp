#include <iostream>
using namespace std;

int main(){
    int n, max = -1e9, max1 = -1e9; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max1 and  arr[i][j] != max) max1 = arr[i][j];
        }
    }
    if(max1 == -1e9) cout << 0;
    else cout << max1;
}