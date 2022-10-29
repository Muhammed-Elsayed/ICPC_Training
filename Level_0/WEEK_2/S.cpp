#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main (){
    int num_TestCases , x, y, start, end, sum ;
    cin >> num_TestCases;

    for (int i = 0 ; i < num_TestCases; i ++){
        sum = 0;
        cin >> x >> y;

        if ( x < y){
            start = x;
            end = y;
        }

        else{
            start = y;
            end = x;
        }

        for (int j = start + 1 ; j < end ; j ++ ){
            if ( j % 2 != 0)
               sum += j;
        }
        cout << sum << endl;

    }

    return 0;
}