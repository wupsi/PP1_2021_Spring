#include <iostream>
using namespace std;

int main(){

    int m1, m2, m3, max = -1e9; cin >> m1 >> m2 >> m3;
    int a[] = {m1, m2, m3};

    for(int i = 0; i < 3; i++){
        if(a[i] >= 69 and a[i] <= 699){
            if(a[i] > max) max = a[i];
        }
    }
    if(max != -1e9) cout << max;
    else cout << "Error";
}