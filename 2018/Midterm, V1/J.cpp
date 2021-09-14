// Subway

#include <iostream>
using namespace std;

int main(){

    int n, x, y; cin >> n >> x >> y;

    if(n * x < y) cout << "No";
    if(n * x > y) cout << "Yes";
    if(n * x == y) cout << "No difference";
}