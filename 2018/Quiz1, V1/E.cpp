#include <iostream>
using namespace std;

int main(){

    int Aza, Dau, cnt = 0; cin >> Aza >> Dau;

    while(Aza <= Dau){
        Dau *= 2;
        Aza *= 3;
        cnt++;
    }
    cout << cnt;
}