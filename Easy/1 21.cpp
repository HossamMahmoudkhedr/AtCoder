#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a, b, ans = "No";
    cin >> a >> b;

    int number = stoi(a+b);
    int sq = sqrt(number);
    if(sq*sq == number){
        ans = "Yes";
    }

    cout << ans << endl;
    return 0;
}
