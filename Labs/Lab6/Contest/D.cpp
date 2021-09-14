#include <iostream>
using namespace std;

bool Stock(int size, int arr[], int x){
    for(int i = 0; i < size; i++){
        if(x == arr[i]) return true;
    }
    return false;
}

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x; cin >> x;
    cout << (Stock(n, arr, x) ? "Yes" : "No");
}