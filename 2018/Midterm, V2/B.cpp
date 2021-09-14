// Maximum of three

#include <iostream>
using namespace std;

int get_maximum(int x, int y, int z){

    if(x > y and x > z) cout << x;
    if(y > x and y > z) cout << y;
    if(z > x and z > x) cout << z;
}

int main(){

    int x, y, z; cin >> x >> y >> z;

    get_maximum(x, y, z);
}