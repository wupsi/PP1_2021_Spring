// Yelnur and Training

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;
    int x = 5, y = 5;
    char arr[11][11];

    for(int k = 0; k < str.size(); k++){
        if(str[k] == 'B') x++;
        if(str[k] == 'R') y++;
        if(str[k] == 'L') y--;
        if(str[k] == 'F') x--;
    }

    while(x != 5){
        if(x > 5){
            x--;
            cout << "F";
        }
        else{
            x++;
            cout << "B";
        }
    }

    while(y != 5){
        if(y > 5){
            y--;
            cout << "L";
        }
        else{
            y++;
            cout << "R";
        }
    }

}