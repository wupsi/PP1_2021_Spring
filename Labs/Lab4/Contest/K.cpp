#include <iostream>
using namespace std;

int main(){

    int n, m, sum = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i ++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }

    for(int i = 0; i < m; i ++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum << endl;
    }

}