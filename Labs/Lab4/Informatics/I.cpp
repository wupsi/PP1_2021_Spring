#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 or j == 0){
                arr[0][j] = 1;
                arr[i][0] = 1;
            }
            else arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}