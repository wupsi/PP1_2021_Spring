#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(i < 7) cnt++;
        else if(i % 7 == 0) cnt++;
    }

    cout << cnt;
}