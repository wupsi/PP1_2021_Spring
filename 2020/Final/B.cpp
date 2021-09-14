#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    char arr[n * 2 + 1][n * 4];

    for(int i = 1; i <= n * 2; i++){
        for(int j = 1; j <= n * 4 - 1; j++){
            
            // Весь массив
            arr[i][j] = ' ';
            
            // Низ
            if(i == n * 2 and j != n * 2) arr[i][j] = '*';
            
            // Левый край
            if(i + j == n * 2 + 1) arr[i][j] = '*';
            
            // Центр
            if(i == n and j >= i + 1 and j <= n * 3 - 1) arr[i][j] = '*';
            
            // Правый край
            if((i + j) % 2 == 1)
            if((i + j) / 2 == i + n - 1) arr[i][j] = '*';

            // Параллельный левому краю
            if(i + j == n * 4 + 1 and i >= n + 1) arr[i][j] = '*';

            // Параллельный правому краю
            if((i + j) % 2 == 1)
            if((i + j) / 2 == i - 1 and i >= n + 1) arr[i][j] = '*';
        }
    }

    for(int i = 1; i <= n * 2; i++){
        for(int j = 1; j <= n * 4 - 1; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}