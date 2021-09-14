// Blocks

#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == 1){ 
            cnt++;
            if(arr[i + 1] == 1) cnt--;
        }
    }
        cout << cnt;
}