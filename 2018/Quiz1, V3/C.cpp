#include <iostream>
using namespace std;

int main(){

    int n, even = 0, odd = 0, cnt = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    if(odd == 1){
        for(int i = 1; i <= n; i++){
            cnt++;
            if(arr[i] % 2 == 1) break;
        }
    }

    if(even == 1){
        for(int i = 1; i <= n; i++){
            cnt++;
            if(arr[i] % 2 == 0) break;
        }
    }    

    cout << cnt;
}