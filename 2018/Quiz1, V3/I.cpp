#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    
    if(n / 100 < 10 and n / 100 > 0) cout << "YES";
    else cout << "NO";
}