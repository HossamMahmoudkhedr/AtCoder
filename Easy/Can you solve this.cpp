#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
   int n, m, c,x, result = 0 ;
   cin >> n >> m >> c;
   int b[m];
   for (int i = 0; i<m;i++){
    cin >> b[i];
   }
   for (int i = 0; i < n; i++){
    int counter = 0;
    for (int j = 0; j < m; j++){
        cin >> x;
        counter+= x*b[j];
    }
    if(counter + c > 0 ){
        ++result;
    }
   }
    cout << result << endl;
    return 0;
}
