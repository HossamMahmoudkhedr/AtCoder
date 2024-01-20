#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    int qualified = a + b;
    int bQualified = 0;

    for (int i=0; i<n; i++){
        if(s[i] == 'c'){
            cout << "No" << endl;
        }else if(s[i]== 'a' && qualified){
            cout << "Yes" << endl;
            qualified--;
        }else if(s[i]=='b' && qualified){
            if (bQualified == 0){
                cout << "Yes" << endl;
                qualified--;
                bQualified++;
            }else if(bQualified < b){
                cout << "Yes" << endl;
                qualified--;
                bQualified++;
            }
            else{
                cout << "No" << endl;
            }
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
