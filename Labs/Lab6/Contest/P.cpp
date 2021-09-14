#include <iostream>
#include <cmath>
using namespace std;

int positive(int a){
    return abs(a);
}

int main(){
    int n; cin >> n;
    cout << positive(n);
}