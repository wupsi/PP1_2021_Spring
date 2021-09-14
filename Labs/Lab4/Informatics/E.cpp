#include <iostream>
using namespace std;

int main(){
    int n, m, max = 0, cnt = 0; cin >> n >> m;
    int arr[n][m], ans[n];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] > max) max = arr[i][j];
            sum += arr[i][j];
        }
        ans[i] = sum;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == max) cnt++;
        }
    }
    if(cnt <= 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == max) cout << i;
            }
        }
    }// сравнить суммы всех максимумов
    else{
        int maxsum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == max and ans[i] > maxsum){
                    maxsum = ans[i];
                }
            }
        }
        for(int i = 0; i < n; i++){
            if(ans[i] == maxsum){
                cout << i;
                return 0;
            }
        }
    }
}