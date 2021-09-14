// Grades

#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    if(n >= 0 and n <= 49) cout << "F";
    if(n >= 50 and n <= 54) cout << "D";
    if(n >= 55 and n <= 59) cout << "D+";
    if(n >= 60 and n <= 64) cout << "C-";
    if(n >= 65 and n <= 69) cout << "C";
    if(n >= 70 and n <= 74) cout << "C+";
    if(n >= 75 and n <= 79) cout << "B-";
    if(n >= 80 and n <= 84) cout << "B";
    if(n >= 85 and n <= 89) cout << "B+";
    if(n >= 90 and n <= 94) cout << "A-";
    if(n >= 95 and n <= 100) cout << "A";
}