#include <iostream>
using namespace std;

int main(){
    int n, num, max = -1e9; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num > max) max = num;
    }
    cout << max;
}