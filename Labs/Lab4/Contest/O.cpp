#include <iostream>
using namespace std;

int main(){
    int n, max = -1e9; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(i == j and max < arr[i][j]) max = arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j and max == arr[i][j]){
                cout << "Maximum element is: " << max << " with coordinates: " << i+1 << ";" << j+1;
                return 0;
            }
        }
    }    
}