#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int num1;
    cin >> num1;


    for (int i = 1; i <= num1 ; i++){
        if (num1 % i == 0)
           cout << i << endl;

    }
    return 0;
}