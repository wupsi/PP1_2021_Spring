#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v, t;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
        t.push_back(x);
    }
    reverse(t.begin(), t.end());
    for(int i = 0; i < n; i++){
        string val = "Instead of " + to_string(v[i]) + " here was " + to_string(t[i]);
        cout << (v[i] == t[i] ? "OK" : val) << endl;
    }
}