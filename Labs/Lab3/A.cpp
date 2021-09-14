#include <iostream>
using namespace std;

int main(){
    int n, num; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num % 2 == 1) cout << num << " ";
    }
}