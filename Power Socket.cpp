#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int a ,b;
    cin >> a >> b;

    if (a == b || (a > b && b > 1)){
        cout << 1 << endl;
    }else{
        if (b == 1){
            cout << 0 << endl;
        }else{
            double remainingSockets = b - a;
            double numberOfPowers = remainingSockets / (a - 1);
            cout << ceil(numberOfPowers) + 1 << endl;
        }
    }
    return 0;
}
