// Interesting array

#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n + 2];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[n + 1] = 1e9;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] <= arr[i + 1]) cnt++;
    }
    if(cnt == n) cout << "Interesting";
    else cout << "Not interesting";
}