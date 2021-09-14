#include <iostream>
using namespace std;

void Transpose(int x, int y){
    int arr[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m; cin >> n >> m;
    Transpose(n, m);
}