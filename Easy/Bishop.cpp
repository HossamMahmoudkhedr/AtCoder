#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int r, c;
    cin >> r >> c;
    if (r == 1 || c == 1){
        cout << 1 << endl;
    }else{
        cout << (r*c)/2 + (r*c)%2 << endl;
    }
    return 0;
}
