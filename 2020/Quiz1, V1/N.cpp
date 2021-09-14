#include <iostream>
using namespace std;

int main(){

    int n, h = 437; cin >> n;
    int arr[n + 1];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(h >= arr[i]){
            cout << "Crash " << i + 1; 
            break;
        }
    }
}