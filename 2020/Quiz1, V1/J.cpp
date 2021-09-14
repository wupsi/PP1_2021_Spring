#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;

    while(n > cnt){
        for(int i = 0; i < cnt; i++){
            cout << "-";
        }
        cout << "*" << endl;
        cnt++;
    }
}