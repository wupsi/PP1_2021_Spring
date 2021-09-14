// Power

#include <iostream>
using namespace std;

int Power(int a, int b) {

    int cnt = 0, c = a;

    if(b == 0) cout << 1;
    else{
        while(cnt + 1 < b){
            cnt++;
            a *= c;
        }
        cout << a;
    }
}

int main(){

    int a, b; cin >> a >> b;

    Power(a, b);
}