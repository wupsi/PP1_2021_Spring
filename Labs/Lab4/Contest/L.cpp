#include <iostream>
using namespace std;

int main(){

    int n, m, min = 1e9, sum = 0; cin >> n >> m;
    int arr[n][m], ans[m];

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;

    for(int i = 0; i < m; i ++){
        min = 1e9;
        for(int j = 0; j < n; j++){
            if(arr[j][i] < min) min = arr[j][i];
        }
        sum += min;
        ans[i] = min;
    }
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j++){
            if(arr[j][i] == ans[i]){
                cout << j + 1 << ";" << i + 1 << endl;
                break;
            }
        }
    }
    cout << "Their sum:\n" << sum;
}