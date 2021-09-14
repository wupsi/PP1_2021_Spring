#include <iostream>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    float k = n;
    
    cout << "Usual division: " << k / m << endl;
    cout << "Division without remainder: " << n / m << endl;
    cout << "Remainder: " << n % m;  
}