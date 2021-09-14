// Right sum

#include <iostream>
using namespace std;

int main(){

    int n, m, x, sum = 0; cin >> n >> m >> x;
    int arr[n + 1][m + 1];

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j++){
            arr[i][j] = 1;
        }
    }
    sum = n * m;

    for(int i = 1; i <= m; i ++){
        for(int j = 1; j <= n; j++){
            sum++;
            arr[j][i]++;
            if(sum == x){
                break;
            }
        }
        if(sum == x) break;
    }

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}