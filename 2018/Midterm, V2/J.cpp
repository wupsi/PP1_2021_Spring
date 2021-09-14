// Folding

#include <iostream>
using namespace std;

int main(){

    double a, b, c, d; cin >> a >> b >> c >> d;

    if(a / 2 == c and b == d){
        cout << "Yes";
        exit(0);
    }
    if(a / 2 == d and b == c){
        cout << "Yes";
        exit(0);
    }
    if(b / 2 == c and a == d){
        cout << "Yes";
        exit(0);
    }
    if(b / 2 == d and a == c){
        cout << "Yes";
        exit(0);
    }
    cout << "No";
}