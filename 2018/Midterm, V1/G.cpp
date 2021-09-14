// Post index

#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n + 2];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == arr[i + 1]) cnt++;
    }
    
    if(cnt + 1 == n) cout << "Yes";
    else cout << "No";
}