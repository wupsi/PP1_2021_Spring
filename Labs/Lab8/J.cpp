#include <iostream>
using namespace std;

int main(){
    int n, x, max = -1e9, min = 1e9; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x; 
        if(x > max) max = x;
        if(x < min) min = x;
    }
    cout << max - min;
}