#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main (){
    char symbol;
    int range1 , number_of_symbol;

    cin >> symbol;
    cin >> range1;

    for (int i = 0 ; i < range1 ; i++){
        cin >> number_of_symbol;

       for ( int j = 0 ; j < number_of_symbol ; j++){
        cout << symbol;

       }
       cout << endl;

    }


    return 0;


}

    