#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1;
    cin >> num1;
    bool is_yes = true;
    
    for (int i = 2 ; i < num1 ; i++){
        if ( num1 % i == 0){
           cout << "NO"; 
           is_yes = false;   
           break;
        }  
    }

    if(is_yes == true)
       cout << "YES";

    return 0;
}