#include <iostream>
using namespace std;

int main(){

    int n, val = 2; cin >> n;
    int arr[8];

    for(int i = 1; i <= 8; i++){
        arr[i] = val;
        val *= 2;
    }


    for(int i = 1; i <= 8; i++){
        if(n == arr[i]){
            cout << endl << arr[i] / 2 << " ";
        }
    }
    cout << n;
}