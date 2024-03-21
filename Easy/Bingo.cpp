#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string ans = "No";
    int n, x, arr[3][3];

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cin >> n;

    while(n--){
        cin >> x;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(x == arr[i][j]){
                    arr[i][j] = 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++){
        if (arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1){
            ans = "Yes";
        }
        if (arr[0][i] == 1 && arr[1][i] == 1 && arr[2][i] == 1){
            ans = "Yes";
        }
    }

     if ((arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) || (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1)){
        ans = "Yes";
     }

     cout << ans << endl;
    return 0;
}
