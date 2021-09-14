#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, sum = 0; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        v.push_back(x);
    }
    int x; cin >> x;
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < x; i++){
        sum += v[i];
    }
    cout << sum;
}