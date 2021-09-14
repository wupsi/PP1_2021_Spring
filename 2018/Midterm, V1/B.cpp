// Almaty or Astana?

#include <iostream>
using namespace std;

int main(){

    long long n; cin >> n;

    if(n / 10000000 == 8717) cout << "Astana";
    if(n / 1000000 == 87272 or n / 1000000 == 87273) cout << "Almaty";
}