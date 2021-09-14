#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int max = -1e9, maxcnt = 0, cnt = 1;
    int arr[n + 2];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(max <= arr[i]){ 
            maxcnt++;
            max = arr[i];
        }
        arr[n + 2] = 1e9;
    }

    for(int i = maxcnt; i <= n; i++){
        if(arr[i] > 0)
        if(arr[i] > arr[i + 1] and arr[i + 1] != 0) cnt++;
    }
    cout << cnt;
}