#include <iostream>
using namespace std;

int main(){

    int h, a, b, up = 0, cnt = 0; cin >> h >> a >> b;

    if(h == a) cout << 1;
    else{

    if(a <= b) cout << "NO";
    else{
        while(h){
            cnt++;
            up += a;
            if(up >= h) break;
            up -= b;
        }
        cout << cnt;
        }
    }
}