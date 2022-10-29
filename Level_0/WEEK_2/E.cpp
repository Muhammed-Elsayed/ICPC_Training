#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main (){

    int myrange, mynums, max_num;

    cin >> myrange;

    for (int i = 0; i < myrange; i++){
        cin >> mynums;
        if (i == 0 )
            max_num = mynums;

        if (mynums > max_num)
            max_num = mynums;

    }

    cout << max_num;


    return 0;
}