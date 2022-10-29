#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main (){

    int range1, even1 = 0, odd1 = 0, positive1 = 0, negative1 = 0;

    int num1;
    
    cin >> range1;

    for(int i = 0 ; i < range1; i++ ){
        
        cin >> num1;

        if (num1 % 2 == 0)
           even1 += 1;

        else
           odd1 += 1;

        if (num1 > 0)
           positive1 += 1;

        else if (num1 < 0)
           negative1 += 1;
    }

    cout << "Even: " << even1 << endl;
    cout << "Odd: " << odd1 << endl;

    cout << "Positive: " << positive1 << endl;
    cout << "Negative: " << negative1 << endl; 

    
    
    
    return 0 ;
    }
    
   


    


