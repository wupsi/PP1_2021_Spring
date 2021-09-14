#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    if(ceil(sqrt(n)) * ceil(sqrt(n)) == n) cout << "Yes";
    else cout << "No";
}