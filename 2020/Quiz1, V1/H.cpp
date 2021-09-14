#include <iostream>
using namespace std;

int main(){

    int n, d1, d2, d3, d4, d5, d6, sumeven = 0, sumodd = 0; cin >> n;

    if(n == 1000000) cout << 1;
    else{
        d1 = n / 100000;
        d2 = n / 10000 % 10;
        d3 = n / 1000 % 10;
        d4 = n / 100 % 10;
        d5 = n / 10 % 10;
        d6 = n % 10;
        
        int a[] = {d1, d2, d3, d4, d5, d6};

        for(int i = 0; i < 6; i++){
            if(a[i] % 2 == 0) sumeven += a[i];
            else sumodd += a[i];
        }

        if(sumeven > sumodd) cout << sumeven;
        if(sumeven < sumodd) cout << sumodd;
        if(sumeven == sumodd) cout << sumeven + sumodd;
    }
}