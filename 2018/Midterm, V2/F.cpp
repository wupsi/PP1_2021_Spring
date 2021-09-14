// Attraction

#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int x; cin >> x;

    for(int i = 1; i <= n; i++){
        if(arr[i] >= x) cnt++;
    }

    cout << cnt;
}