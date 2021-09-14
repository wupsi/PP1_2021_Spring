// Different bits

#include <iostream>
using namespace std;

int main(){
    
    int n, m, cnt = 0; cin >> n >> m;
    int arr[9], arr1[9];

    for(int i = 1; i < 9; i++){
        arr[i] = n % 2;
        n /= 2;
    }

    for(int i = 1; i < 9; i++){
        arr1[i] = m % 2;
        m /= 2;
        if(arr[i] != arr1[i]) cnt++;
    }
    cout << cnt;
}