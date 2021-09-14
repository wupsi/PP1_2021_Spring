#include <iostream>
using namespace std;

int main(){

    int A1, B1, A2, B2, A3, B3, team1, team2; 
    cin >> A1 >> B1 >> A2 >> B2 >> A3 >> B3;

    team1 = A1 + A2 + A3;
    team2 = B1 + B2 + B3;

    if(team1 > team2) cout << "Grats Yelnur";
    if(team1 < team2) cout << "Hee Hee Losers";
    if(team1 == team2) cout << "Draw";
}