#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main (){
    long long start1, end1, start2 , end2   , change_start , change_end;
    cin >> start1 >> end1 >> start2 >> end2;

    if (start2 < start1){
        change_start = start1;
        start1 = start2;
        start2 = change_start;

        change_end = end1;
        end1 = end2;
        end2 = change_end;
    }

    if(end1 >= start2 and end2 >= end1){
        cout << start2 << " " << end1;
    }
    else if (end1 >= end2 and end1 >= start2)
      cout << start2 << " " << end2;
    else 
      cout << "-1";
    return 0;
}