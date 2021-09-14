#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v, t;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 2 == 0) v.push_back(x);
        else t.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    sort(t.begin(), t.end());

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    for(int i = 0; i < t.size(); i++) cout << t[i] << " ";
}