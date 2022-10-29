#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main (){
    int N, A, B, sum_of_digits = 0, i_2 = 0, sum_of_numbers = 0;
    cin >> N >> A >> B;

    for ( int i = 1 ; i <= N; i++){
        sum_of_digits = 0;
        i_2 = i;
        while (i_2){
          sum_of_digits += i_2 % 10;
          i_2 /= 10;
          
        }
        if (sum_of_digits >= A and sum_of_digits <= B){
            sum_of_numbers += i;
            
        
        }
    }
    
    cout << sum_of_numbers;
    return 0 ;
}