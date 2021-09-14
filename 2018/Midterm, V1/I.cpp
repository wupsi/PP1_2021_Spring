// Rightmost set bit
// Перевод в двоичное число

#include <iostream>
using namespace std;

int main(){
    
    int num = 0, ans = 0, d = 1, cnt = 0; 
    cin >> num;
    
    while(num){
        ans += (num % 2) * d;
        num /= 2;
        d *= 10;
    }
    
    while(ans % 10 == 0){
        cnt++;
        ans /= 10;
    }
    cout << cnt;
}

