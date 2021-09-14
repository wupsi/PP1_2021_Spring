#include <iostream>
using namespace std;

int main(){
    int n, m, cnt = 0; cin >> n >> m;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] <= m) cnt++;
    }
    cout << cnt;
}