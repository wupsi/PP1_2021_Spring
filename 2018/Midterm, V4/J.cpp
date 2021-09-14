// Factory

#include <iostream>
using namespace std;

int main(){

    int n, num, cnt1 = 0, cnt2 = 0; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        num = arr[1];
        if(arr[i] == num) cnt1++;
        else cnt2++;
    }
    if(cnt1 == 2 or cnt2 == 2) cout << "Yes";
    else cout << "No";
}