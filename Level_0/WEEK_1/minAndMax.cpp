#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int A,B,C , maxnum, minnum;
    
    cin >> A >> B >> C;

    if (A > B){
        maxnum = A;
        minnum = B;
    }

    else if (B > A)
    {
       maxnum = B;
       minnum = A;
    }

    if (C > maxnum)
    {
        maxnum = C;
    }

    else if (minnum > C)
    {
        minnum = C;
    }
    
    cout << minnum << " "<< maxnum;
    
    return 0;
}