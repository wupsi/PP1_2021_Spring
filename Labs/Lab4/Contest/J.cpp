#include <iostream>
using namespace std;

int main(){

    int n, m, perfect; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if((i + j) % 2 == 0) arr[i][j] += 1;
            else arr[i][j] -= 1;
        }
    }

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}