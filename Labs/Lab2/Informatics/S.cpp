#include <iostream>
using namespace std;

int main(){
    int h, a, b; cin >> h >> a >> b;
    cout << 1 + (h - a) / (a - b) + ((h - a) % (a - b) + (a - b) - 1) / (a - b);
}