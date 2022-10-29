#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main (){

    int num1, num2, max1, min1, GCF = 0;

    cin >> num1 >> num2;

    if (num1 >= num2){
       max1 = num1;
       min1 = num2;
    }

    else{
       max1 = num2;
       min1 = num1;
    }



    for (int i = 1; i <= min1; i++){
        if (num1 % i == 0 and num2 % i == 0 ){
            GCF = i;
        }
    }
       cout << GCF;
    return 0;
}