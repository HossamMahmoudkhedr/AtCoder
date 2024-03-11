#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    double x = n / 1.08;
    double x2 = (n+1) / 1.08;
    double priceWithNoTax = ceil(x);
    if(priceWithNoTax >= x && priceWithNoTax < x2 && priceWithNoTax * 1.08 >= n){
        cout << priceWithNoTax << endl;
    }else{
        cout << ":(" << endl;
    }


    return 0;
}
