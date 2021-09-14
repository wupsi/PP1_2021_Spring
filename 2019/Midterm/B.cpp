// High quality matrix

#include <iostream>
using namespace std;

int main(){

    int n, m, x, cnt = 0; cin >> n >> m >> x;
    int arr[n + 1][m + 1];

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j++){
            if(arr[i][j] == x){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}