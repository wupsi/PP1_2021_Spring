// Lines

#include <iostream>
using namespace std;

int main(){

    int n, x, y, x1, y1, cnt = 0; cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x >> y >> x1 >> y1;
        if(y - x != y1 - x1) cnt++;
    }
    cout << cnt;
}