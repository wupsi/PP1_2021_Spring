// Bye-bye, F.R.I.D.A.Y.

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str.size() >= 3 and str.size() <= 15){
            if(str[0] >= 'A' and str[0] <= 'Z'){
                if(str[i] == 'A' or str[i] == 'E' or str[i] == 'I' or str[i] == 'O' or str[i] == 'U' or str[i] == 'Y' or str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u' or str[i] == 'y'){
                    if(str[i + 1] >= 'A' and str[i + 1] <= 'Z'){
                        cout << "Invalid name";
                        exit(0);
                    }
                    else{
                        cout << "Hi, " << str;
                        exit(0);
                    }
                }
            }
        }
    }
    cout << "Invalid Name";
}