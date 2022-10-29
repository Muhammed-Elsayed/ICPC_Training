#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int num_testCases;
    long long num1, num1_replace;
    cin >> num_testCases;

    for(int i = 0 ; i < num_testCases ; i++){
      cin >> num1;
      num1_replace = num1;
      if (num1 == 0)
            cout << 0 << " ";

      while (num1_replace){
            cout << num1_replace % 10 << " ";
            num1_replace /= 10;
      }
      cout << endl;
    }
    return 0;
}