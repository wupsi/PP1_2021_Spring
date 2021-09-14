#include <iostream>
#include <cmath>
using namespace std;

int diff(int a, int b){
    return abs(b - a);
}

int main(){
    int n; cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cout << diff(a[i], b[i]) << " ";
}