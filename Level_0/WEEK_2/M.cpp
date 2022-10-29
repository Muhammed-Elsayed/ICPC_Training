#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int start1, end1 , last1, x, y = 0, luck = 0;
    cin >> start1 >> end1;

    for (int i = start1 ; i <= end1; i++){
        x = i;
        luck = 0;
        
        while (x > 0){
            if (x % 10 != 7 and  x % 10 !=  4){
               luck += 1 ;  // not a prime
            } 
            x = x / 10; 
        }

        if(luck == 0){
            cout << i <<  " ";
            y += 1;
        }
    }
    if (y == 0){
            cout << -1 ;
        }
    return 0;
}