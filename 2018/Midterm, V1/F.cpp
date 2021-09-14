// May I come in?

#include <iostream>
using namespace std;

int main(){

    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    if(h1 * 60 + m1 < h2 * 60 + m2) cout << "Yes";
    else cout << "No";
}