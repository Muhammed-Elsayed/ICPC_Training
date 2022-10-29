#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int num1, number_of_spaces, number_of_hashes;
    cin >> num1;    

    for( int i = 0 ; i < num1; i ++){
        
        for (int j = 0 ; j < num1 - 1 - i ; j++){
            cout << " ";
        }

        cout << "*";

        for (int j = 0 ; j < num1 - 1 - i ; j++){
            cout << " ";
        }

        
        
    }
    cout << endl;
    return 0;
}

