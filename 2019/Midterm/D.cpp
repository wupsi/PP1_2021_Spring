// Lucky number

#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;

    if(n % 2 == 0) cnt++;
    if(n % 5 == 0) cnt++;
    if(n % 17 == 0) cnt++;
    if(n % 19 == 0) cnt++;    

    if(cnt >= 2) cout << "YES";
    else cout << "NO";
}