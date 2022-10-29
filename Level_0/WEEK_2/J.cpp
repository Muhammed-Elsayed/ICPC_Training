#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main (){

    int num1;
    bool is_prime = true;
    cin >> num1;

    for (int i = 2 ; i <= num1; i++ ){
        for (int j = 2; j < i ; j++ ){
            if (i % j == 0)
               is_prime = false;
               
        }
        if (is_prime == true){
            cout << i << " ";
        }
        is_prime = true;
    }



    return 0;
}