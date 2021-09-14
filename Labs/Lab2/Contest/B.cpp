#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n % 2 != 0) cout << "Super";
    else if(n >= 2 and n <= 5) cout << "Not Super";
    else if(n >= 6 and n <= 20) cout << "Super";
    else if(n > 20) cout << "Not Super";
}