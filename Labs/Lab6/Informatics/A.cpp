#include <iostream>
using namespace std;

int min(int a, int b, int c, int d){
    int mini = 1e9, arr[] = {a, b, c, d};
    for(int i = 0; i < 4; i++) if(mini > arr[i]) mini = arr[i];
    return mini;
}

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << min(a, b, c, d);
}