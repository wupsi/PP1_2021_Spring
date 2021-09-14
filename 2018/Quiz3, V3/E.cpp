// Aida and her "knowledge"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedK(){

    int n, k; cin >> n >> k;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.begin() + k - 1);
    sort(v.begin() + k, v.end());
    reverse(v.begin() + k, v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){

    sortedK();
}