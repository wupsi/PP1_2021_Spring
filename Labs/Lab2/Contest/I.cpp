#include <iostream>
using namespace std;

int main(){
    int n, num, cnt = 0; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num % 10 == 7) cnt++;
    }
    cout << cnt;
}