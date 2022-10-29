#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
    int num1;

    cin >> num1;


    for(int i = 0 ; i < 12; i++){
        cout << num1 << " * " << i + 1 << " = " << num1 * (i + 1) << endl;
    }


    return 0;
}