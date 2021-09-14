#include <iostream>
using namespace std;

int Binomal(int n, int k) {
    if (k == 0 || k == n) return 1;
    return Binomal(n - 1, k - 1) + Binomal(n - 1, k);
}

int main() {
    int n, k; cin >> n >> k;
    cout << Binomal(n, k);
}