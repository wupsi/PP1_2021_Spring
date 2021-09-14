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
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}