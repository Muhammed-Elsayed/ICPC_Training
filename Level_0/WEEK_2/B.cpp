#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main (){

    int num1 = 0;
    
    cin >> num1;

    
    
    for(int i = 1 ; i <= num1 ; i++){
     if ( i % 2 == 0)
       cout << i << endl ;
    }

    if (num1 == 1){
       cout << -1;
    }
       
    return 0;
    
}