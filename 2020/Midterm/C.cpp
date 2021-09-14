// Array modes

#include <iostream>
using namespace std;

int main(){

    int n, min = 1e9, max = -1e9, cnt = 0, maxcnt = -1e9; cin >> n;
    int arr[n + 1], maxarr[100100];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }

    for(int i = min; i <= max; i++){
        for(int j = 1; j <= n; j++){
            if(arr[j] == i) cnt++;
        }
        maxarr[i] = 1e9;
        if(maxcnt <= cnt) maxcnt = cnt;
        cnt = 0;
    }
    for(int i = min; i <= max + 1; i++){
        for(int j = 1; j <= n; j++){
            if(arr[j] == i) cnt++;
        }   
        if(maxcnt == cnt) maxarr[i] = i;
        cnt = 0;
    }

    for(int i = max; i >= min; i--){
        if(maxarr[i] != 1e9) cout << maxarr[i] << " ";
    }
}