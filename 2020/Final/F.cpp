#include <iostream>
using namespace std;

int main(){

    int n, m = 0, num1, num2; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> num1 >> num2;
        while(num1){
            m = m * 10 + num1 % 10;
            num1 /= 10;
        }
        num1 = m;
        m = 0;
        while(num2){
            m = m * 10 + num2 % 10;
            num2 /= 10;
        }
        num2 = m;
        m = 0;
        arr[i] = num1 + num2;
    }

    for(int i = 1; i <= n; i++){
        while(arr[i]){
            m = m * 10 + arr[i] % 10;
            arr[i] /= 10;
        }
        arr[i] = m;
        m = 0;
    }
    for(int i = 1; i <= n; i++){
        cout << arr[i] << endl;
    }
}