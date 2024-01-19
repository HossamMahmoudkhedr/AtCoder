#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int n, result=0;
    double sum=0, median;
    cin >> n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        int x;
        cin >> x;
        arr[i]=x;
        sum += x;
    }
    median = round(sum / n);
    for (int i =0 ;i<n;i++){
        int stamina = pow((arr[i]-median),2);
        result += stamina;
    }

    cout << result << endl;

    return 0;
}
