#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<int, pair<double, int>> mp;

    for(int i = 0; i < n; i++){
        int x, y, exam, credit, sum = 0; cin >> x >> y >> exam >> credit;
        double gpa;
        if(x + y >= 30 and exam >= 20){
            sum += x + y + exam;
            if(sum >= 95 and sum <= 100) gpa = 4.0;
            else if(sum >= 90 and sum <= 94) gpa = 3 + 2.0 / 3;
            else if(sum >= 85 and sum <= 89) gpa = 3 + 1.0 / 3;
            else if(sum >= 80 and sum <= 84) gpa = 3.0;
            else if(sum >= 75 and sum <= 79) gpa = 2 + 2.0 / 3;
            else if(sum >= 70 and sum <= 74) gpa = 2 + 1.0 / 3;
            else if(sum >= 65 and sum <= 69) gpa = 2.0;
            else if(sum >= 60 and sum <= 64) gpa = 1 + 2.0 / 3;
            else if(sum >= 55 and sum <= 59) gpa = 1 + 1.0 / 3;
            else if(sum >= 50 and sum <= 54) gpa = 1.0;
        }
        else gpa = 0.0; 
        mp.insert(make_pair(i+1, make_pair(gpa, credit)));
    }
    double credits;
    int sum = 0;

    for(auto i : mp){
        credits += i.second.first * i.second.second;
        sum += i.second.second;
        cout <<"#" << i.first << ") gpa: " << i.second.first << ", credits: " << i.second.second << endl;
    }
    cout << "GPA: " << credits / sum << ".";
}