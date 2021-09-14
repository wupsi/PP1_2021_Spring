#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0, cnt1 = 0;
    int arr[100100];

    for(int i = 0; i <= 1e9; i++){
        cin >> n;
        arr[i] = n;
        cnt++;
        if(n == 0) break;
    }

    for(int i = 0; i < cnt; i++){
        if(arr[i] < arr[i + 1]) cnt1++;
    }

    cout << cnt1;
}