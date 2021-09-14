#include <iostream>
using namespace std;

int main(){
    int n, num, even = 0, odd = 0; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num % 2 == 0) even++;
        else odd++;
    }
    cout << even << " " << odd;
}