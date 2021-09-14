#include <iostream>
using namespace std;

int main(){

    int x, y; cin >> x >> y;

    if(x % 2 == 1){
        if(y % 2 == 1) cout << "white";
        else cout << "black";
        exit(0);
    }
    else{
        if(y % 2 == 0) cout << "white";
        else cout << "black";
    }
    
}