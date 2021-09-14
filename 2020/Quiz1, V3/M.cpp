#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    float m; cin >> m;
    
    m = n * (100 + m) / 100;

    printf("%.2f", m);
}