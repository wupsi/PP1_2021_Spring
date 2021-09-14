#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n + 1], arrb[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        if(arrb[arr[i]] != 1) cout << arr[i] << " "; 
        arrb[arr[i]] = 1;
    }
}