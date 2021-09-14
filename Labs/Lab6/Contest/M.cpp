#include <iostream>
using namespace std;

void Reverse(int size, int a[]){
    for(int i = size - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Reverse(n, arr);
}