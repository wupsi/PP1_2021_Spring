#include <iostream>
using namespace std;

int main(){
    int n, m, temp; cin >> n >> m;
    temp = n; n = m; m = temp;
    cout << n << " " << m;
}