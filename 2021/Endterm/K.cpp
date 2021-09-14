#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    n = n % 100;
    n = n / 10;



    if(n % 2 == 0 and n % 3 == 0 and n != 0){
        cout << "Best";
        exit(0);
    }
    else{
    if(n % 2 == 0 and n != 0){ 
        cout << "Good";
        exit(0);
        }
    if(n % 3 == 0 and n != 0){ 
        cout << "Very good";
        exit(0); 
    }
}
        cout << "None";
}