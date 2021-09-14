#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, k, cnt = 0; cin >> n >> k;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == k) cnt++;
    }
    cout << cnt;
}