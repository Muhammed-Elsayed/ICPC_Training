#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    float num1;
    cin >> num1;

    if (num1 < 0 or num1 > 100)
        cout << "Out of Intervals";
    

    else if (num1 >= 0 and num1 <= 25)
            cout <<"Interval" << " " << "[" << 0 << "," << 25 << "]" ;

    else if (num1 > 25 and num1 <= 50)
            cout <<"Interval"<< " " << "(" << 25 << "," << 50 << "]" ;

    else if (num1 > 50 and num1 <= 75)
            cout << "Interval" << " " << "(" << 50 << "," << 75 << "]" ;

    else if (num1 > 75 and num1 <= 100)
            cout <<"Interval" <<" " <<"(" << 75 << "," << 100 << "]" ;

    

    return 0;
}