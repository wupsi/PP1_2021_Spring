#include <iostream>
using namespace std;

int main(){

    int n, sum = 0; cin >> n;
    int arr[n + 1];
    float av;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    av = sum;
    av /= n;

    cout << "Average: " << av;

    cout << endl << "Sum:" << sum;
}