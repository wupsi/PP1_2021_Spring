#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;

    for(int i = 1; i <= n; i++){
        if(i < 10 and i % 4 == 0) cnt++;
        if(i > 10 and i < 100 and (i % 10 + i / 10) % 4 == 0) cnt++;
        if(i >= 100 and i < 1000 and (i % 10 + i / 10 % 10 + i / 100) % 4 == 0) cnt++;
        if(i >= 1000 and i < 10000 and (i % 10 + (i / 10 % 10) + (i / 100 % 10) + i / 1000) % 4 == 0) cnt++;
    }
    cout << cnt;
}