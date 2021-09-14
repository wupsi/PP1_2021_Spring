#include <iostream>
using namespace std;

int main(){
    int n, max = -1e9, cnt = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
    }
    for(int i = 1; i <= n; i++){
        cnt++;
        if(arr[i] == max){
            cout << cnt;
            break;
        }
    }
}