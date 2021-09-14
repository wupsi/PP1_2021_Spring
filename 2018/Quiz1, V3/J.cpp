#include <iostream>
using namespace std;

int main(){

    int a, b, c, cnt = 0; cin >> a >> b >> c;

    if(a > 0) cnt++;
    if(b > 0) cnt++;
    if(c > 0) cnt++;
    
    if(cnt == 3) cout << "Yes";
    else cout << "No";
}