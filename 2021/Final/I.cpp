#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    string sur, last;
    int q1, q2, q3, q4, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    string arr[n + 1];
    int arrsum[100100], quiz1[n + 1], quiz2[n + 1], quiz3[n + 1], quiz4[n + 1];

    for(int i = 0; i < n; i++){
        cin >> sur >> last >> q1 >> q2 >> q3 >> q4;
        arrsum[i] = q1 + q2 + q3 + q4; 
        if(arrsum[i] > 20) arr[i] = last;
        quiz1[i] = q1;
        quiz2[i] = q2;
        quiz3[i] = q3;
        quiz4[i] = q4;
        sum1 += quiz1[i];
        sum2 += quiz2[i];
        sum3 += quiz3[i];
        sum4 += quiz4[i];
    }
    for(int i = 0; i < n; i++){
        if(sum1 == 0) arrsum[i]++;
        if(sum2 == 0) arrsum[i]++;
        if(sum3 == 0) arrsum[i]++;
        if(sum4 == 0) arrsum[i]++;
    }

    for(int i = 1; i < n; i++){	
        for(int k = 0; k < n - i; k++){
		    if(arrsum[k] < arrsum[k + 1]){
			    int temp = arrsum[k];
                string temp1 = arr[k];
	    		arrsum[k] = arrsum[k + 1];
                arr[k] = arr[k + 1];
			    arrsum[k + 1] = temp;
                arr[k + 1] = temp1;
            }
		}
	}

    for(int i = 0; i <= n; i++){
        
        cout << arr[i] << " " << arrsum[i] << endl;
    }
}