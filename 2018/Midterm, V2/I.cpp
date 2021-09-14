// Candies

#include <iostream>
using namespace std;

int main(){

    int n, m; cin >> n >> m;

    if((n + m) % 3 == 0){
        cout << "Yes";
        exit(0);
    } 
    else{ 
        if(n % 3 == 0 or m % 3 == 0){
            cout << "Yes";
            exit(0);
        }
    }

    cout << "No";
}