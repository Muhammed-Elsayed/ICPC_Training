#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main (){

    int num1;
    cin >> num1;

    for (int i = 0 ; i < num1; i ++ ){
        for(int  j = num1 ; j > i ; j --){
            cout << "*";

        }
        cout << endl;
    }


    return 0;
}