#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int v, t, d; cin >> v >> t;
    d = v * t;

    if(d == 109) cout << 0;
    
    if(d > 0 and d != 109){
        while(d > 109) d = d - 109;
        cout << d;
    }
    
    if(d < 0 and d != 109){
        while(d < -109) d = d + 109;
        cout << 109 + d;
        }
    }