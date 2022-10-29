#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int num1 , digit, reverse1 = 0, mynum;
    cin >> mynum;
    num1 = mynum;

    while (num1){
        digit = num1 % 10;
        reverse1 = (reverse1 * 10) + digit;
        num1 = num1 / 10;
    }
    cout << reverse1 << endl ;

    if (mynum == reverse1){
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}