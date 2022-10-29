#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1, pum = 4;
    cin >> num1;

    for (int i = 1 ; i <= 4 * num1; i++ ){
        if ( i == pum ){
            cout << "PUM" << endl;
            pum += 4;
        }
        else{
            cout << i << " ";
        }
    }
    return 0;
}