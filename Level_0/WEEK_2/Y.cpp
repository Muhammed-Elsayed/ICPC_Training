#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main (){

    int num1, first = 0, second = 1, sum = 0 ;
    cin >> num1 ;
    
    if ( num1 == 1){
        cout << 0 << " ";
    } 

    else
       cout << 0 <<" " << 1 << " " ;
    
    
    for (int i = 2; i < num1; i++){
        sum = first + second;
        cout << sum << " ";

        first = second;
        second = sum;
    }

    return 0;
}