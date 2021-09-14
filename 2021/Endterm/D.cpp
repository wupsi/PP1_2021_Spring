#include <iostream>
using namespace std;

int main(){

    int a, b, c, d, cnt = 0; cin >> a >> b >> c >> d;

    if(a >= 91 and a <= 96) cnt++;
    if(a <= 64 or a >= 123) cnt++;

    if(b >= 91 and b <= 96) cnt++;
    if(b <= 64 or b >= 123) cnt++;

    if(c >= 91 and c <= 96) cnt++;
    if(c <= 64 or c >= 123) cnt++;

    if(d >= 91 and d <= 96) cnt++;
    if(d <= 64 or d >= 123) cnt++;

    if(cnt == 0) cout << "YES";
    else cout << "NO";

}