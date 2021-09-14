#include <iostream>
using namespace std;

int main(){
    int n, val = 0; cin >> n;
    for(int i = 1; i <= n; i++){
        val += i;
    }
    cout << val;
}