#include <iostream>
using namespace std;

int main(){
    int n, m, max = 0; cin >> n >> m;
    int arr[n][m], ans[n];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        ans[i] = sum;
        if(ans[i] > max) max = ans[i];
    }
    for(int i = 0; i < n; i++){
        if(ans[i] == max){
            cout << ans[i] << endl << i;
            break;
        }
    }
}