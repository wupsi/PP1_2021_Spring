#include <iostream>
using namespace std;

int sum(int n, int m){
    return n + m;
}

int main(){
    int a, b; cin >> a >> b;
    cout << sum(a, b);
}