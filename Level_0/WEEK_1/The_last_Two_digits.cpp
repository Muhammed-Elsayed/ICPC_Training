#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main (){

    long long A, B, C, D, product;
    cin >> A >> B >> C >> D;

    product = (A % 100) * (B % 100) * (C % 100) * (D % 100);

    

    if (product % 100 < 10){
        cout << 0 << product % 100;
    }

    else
       cout << product % 100;

    return 0;
}