#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int num1, num2;
     char sign1;

     cin >> num1 >> sign1 >> num2;

     if (sign1 == '>'){
          if (num1 > num2){
               cout << "Right";
          }
          else{
               cout << "Wrong";
          }
     }

     else if (sign1 == '<'){
          if(num1 < num2){
               cout << "Right";
          }
          else{
               cout << "Wrong";
          }
     }

     else if( sign1 == '='){
          if (num1 == num2){
               cout << "Right";
          }

          else {
               cout << "Wrong";
          }
     }
}