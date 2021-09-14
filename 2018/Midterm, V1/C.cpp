// Distance in an array

#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n + 1][n + 1];

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            cout << j + i << " ";
        }
        cout << endl;
    }
}