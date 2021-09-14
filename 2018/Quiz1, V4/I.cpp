#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int cntA = 0, cntB = 0, cntC = 0, cntD = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A') cntA++;
        if(s[i] == 'B') cntB++;
        if(s[i] == 'C') cntC++;
        if(s[i] == 'D') cntD++;
    }
    if(cntA > 0) cout << "A " << cntA << endl;
    if(cntB > 0) cout << "B " << cntB << endl;
    if(cntC > 0) cout << "C " << cntC << endl;
    if(cntD > 0) cout << "D " << cntD;
}