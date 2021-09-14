// Party hard

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        cout << abs(arr[i]) << " "; 
    }
}