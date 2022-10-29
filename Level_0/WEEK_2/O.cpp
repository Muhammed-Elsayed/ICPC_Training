#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main (){
    int num1;
    cin >> num1;

    for (int i = 1 ; i < num1 + 1; i++){
        for ( int j = 0 ; j < i ; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}