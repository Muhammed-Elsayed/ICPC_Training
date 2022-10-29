#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main (){

    int N , M , start1, end1, sum;


    while (true){
        sum = 0;
        cin >> N >> M ;
         
        if (N * M <= 0)
           break;

        if ( M > N ){
            start1 = N;
            end1 = M;
        }
        else{
            start1 = M;
            end1 = N;
        }
    
    
    for (int i = start1 ; i <= end1 ; i++){
        cout << i << " ";
        sum += i;
    }
    cout << "sum =" << sum << endl;

    }


    return 0;
}