#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        v.push_back(x);
    }
    int x; cin >> x;
    sort(v.begin(), v.end());
    for(int i = 0; i < x; i++){
        cout << v[i] << " ";
    }
}