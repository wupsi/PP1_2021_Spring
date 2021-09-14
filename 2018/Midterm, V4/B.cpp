// Binarization

#include <iostream>
using namespace std;

int main(){

    int n, max = -1e9; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == max) arr[i] = 1;
        else arr[i] = 0;
    }

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
}