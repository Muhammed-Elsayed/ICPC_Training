#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main (){

    int range1 , mynum1  ;
    long long result;
    cin >> range1;
    for (int i = 0 ; i < range1; i++ ){
        cin >> mynum1;
        for (int i = 1 ; i <= mynum1; i++ )
           result *= i;
    cout << result << endl;
    result = 1;
    }
    
    return 0;
}

//